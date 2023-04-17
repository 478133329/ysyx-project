module program_counter(
			input clk,
			input rst,
			input jump,
			input[63:0] jump_addr,
			output[63:0] pc,
			output[63:0] pc_add4
			);
	assign pc_add4 = pc + 4;
	reg[63:0] npc;
	MuxKey #(2, 1, 64) program_counter_mux21(.out(npc), .key(jump), .lut({
		1'b0, pc_add4,
		1'b1, jump_addr
	}));
	Reg #(64, 64'h80000000) program_counter_reg_lo(.clk(clk), .rst(rst), .din(npc), .dout(pc), .wen(1'b1));
endmodule

	
