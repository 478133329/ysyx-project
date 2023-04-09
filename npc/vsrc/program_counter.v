module program_counter(
			input clk,
			input rst,
			input jump,
			input[31:0] jump_addr,
			output[31:0] pc
			);
	wire[31:0] pc_add4 = pc + 4;
	reg[31:0] npc;
	MuxKey #(2, 1, 32) program_counter_mux21(.out(npc), .key(jump), .lut({
		1'b0, pc_add4,
		1'b1, jump_addr
	}));
	Reg #(32, 32'h80000000) program_counter_reg(.clk(clk), .rst(rst), .din(npc), .dout(pc), .wen(1'b1));
endmodule

	
