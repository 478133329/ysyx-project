import "DPI-C" function void call_break(input bit call);

module my_cpu(input clk, 
		input rst, 
		input[31:0] instr, 
		input[31:0] rdata, 
		output[31:0] wdata,
		output[31:0] instr_raddr, 
		output[31:0] data_raddr, 
		output[31:0] data_waddr,
		output mem_wen
		);
	wire[31:0] pc;
	wire reg_wen;
	wire[4:0] reg_waddr;
	wire[4:0] reg_raddr1;
	wire[4:0] reg_raddr2;
	wire[31:0] reg_wdata;
	wire[31:0] reg_rdata1;
	wire[31:0] reg_rdata2;
	wire alu_a_sel;
	wire alu_b_sel;
	wire alu_op;
	wire[31:0] alu_src1;
	wire[31:0] alu_src2;
	wire[31:0] imm;
	MuxKey #(2, 1, 32) alu_src1_mux21(.out(alu_src1), .key(alu_a_sel), .lut({
		1'b0, pc,
		1'b1, reg_rdata1
	}));
	MuxKey #(2, 1, 32) alu_src2_mux21(.out(alu_src2), .key(alu_b_sel), .lut({
		1'b0, imm,
		1'b1, reg_rdata2
	}));
	assign instr_raddr = pc;
	program_counter my_pc(.clk(clk), .rst(rst), .jump(), .jump_addr(), .pc(pc));
	reg_heap my_reg_heap(.clk(clk), .rst(rst), .wen(reg_wen), .waddr(reg_waddr), .raddr1(reg_raddr1), .raddr2(reg_raddr2), .wdata(reg_wdata),
				.rdata1(reg_rdata1), .rdata2(reg_rdata2));
	alu my_alu(.op(alu_op), .src1(alu_src1), .src2(alu_src2), .dst(reg_wdata));
	controller my_controller(.instr(instr), .imm(imm), .reg_wen(reg_wen), .reg_src1(reg_raddr1), .reg_src2(reg_raddr2), .reg_dst(reg_waddr), 
				.alu_op(alu_op), .alu_a_sel(alu_a_sel), .alu_b_sel(alu_b_sel), .mem_wen(mem_wen), .pc_jump());
	always@(*) begin
		if(instr==32'h00100073) call_break(1'b1);
	end
endmodule

