import "DPI-C" function void npc_trap(input longint halt_pc);

module my_cpu(input clk, 
		input rst, 
		input[31:0] instr, 
		input[63:0] rdata, 
		output[63:0] wdata,
		output[63:0] instr_raddr, 
		output[63:0] data_raddr, 
		output[63:0] data_waddr,
		output mem_wen
		);

	wire[63:0] pc;
	wire[63:0] pc_add4;
	wire reg_wen;
	wire[4:0] reg_waddr;
	wire[4:0] reg_raddr1;
	wire[4:0] reg_raddr2;
	wire[63:0] reg_wdata;
	wire[1:0] reg_input_sel;
	wire[63:0] reg_rdata1;
	wire[63:0] reg_rdata2;
	wire alu_a_sel;
	wire alu_b_sel;
	wire[3:0] alu_op;
	wire[63:0] alu_src1;
	wire[63:0] alu_src2;
	wire[63:0] alu_dst;
	wire[63:0] imm;
	wire pc_jump;
	wire[63:0] pc_jump_addr;
	wire pc_j_jump;
	wire pc_b_jump;
	wire pc_b_jump_cond;
	// TODO
	wire[63:0] b_jump_addr;

	MuxKey #(2, 1, 64) alu_src1_mux21(.out(alu_src1), .key(alu_a_sel), .lut({
		1'b0, pc,
		1'b1, reg_rdata1
	}));
	MuxKey #(2, 1, 64) alu_src2_mux21(.out(alu_src2), .key(alu_b_sel), .lut({
		1'b0, imm,
		1'b1, reg_rdata2
	}));
	MuxKey #(4, 2, 64) reg_input_mux41(.out(reg_wdata), .key(reg_input_sel), .lut({
		2'b00, 64'b0,
		2'b01, alu_dst,
		2'b10, pc_add4,
		2'b11, rdata
	}));
	MuxKey #(2, 1, 64) jump_sel_mux21(.out(pc_jump_addr), .key(pc_b_jump), .lut({
		1'b0, alu_dst,
		1'b1, b_jump_addr
	}));

	assign instr_raddr = pc;

	program_counter my_pc(.clk(clk), .rst(rst), .jump(pc_jump), .jump_addr(pc_jump_addr), .pc(pc), .pc_add4(pc_add4));

	branch my_branch(.cond_op(pc_b_jump_cond), .cond_data(alu_dst), .pc_b_jump(pc_b_jump));

	assign pc_jump = pc_j_jump | pc_b_jump;

	reg_heap my_reg_heap(.clk(clk), .rst(rst), .wen(reg_wen), .waddr(reg_waddr), .raddr1(reg_raddr1), .raddr2(reg_raddr2), .wdata(reg_wdata),
				.rdata1(reg_rdata1), .rdata2(reg_rdata2));

	alu my_alu(.op(alu_op), .src1(alu_src1), .src2(alu_src2), .dst(alu_dst));

	controller my_controller(.instr(instr), .imm(imm), .reg_wen(reg_wen), .reg_src1(reg_raddr1), .reg_src2(reg_raddr2), .reg_dst(reg_waddr), .reg_input_sel(reg_input_sel),
				.alu_op(alu_op), .alu_a_sel(alu_a_sel), .alu_b_sel(alu_b_sel), .mem_wen(mem_wen), .pc_j_jump(pc_j_jump), .pc_b_jump_cond(pc_b_jump_cond));

	always@(*) begin
		if(instr==32'h00100073) npc_trap(pc);
	end

endmodule

