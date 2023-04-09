module memory(
	input clk,
	input[31:0] instr_raddr,
	input[31:0] data_raddr,
	input[31:0] data_waddr,
	input[31:0] wdata,
	input wen,
	output[31:0] instr,
	output[31:0] rdata
	);
	reg[31:0] mem[127:0];
	integer i;
	assign instr = mem[instr_raddr];
	assign rdata = mem[data_raddr];
	Reg #(32, 32'b0) memory(.clk(clk), .rst(1'b0), .din(wdata), .dout(mem[data_waddr]), .wen(wen));
endmodule

	
