module branch(input cond_op, input reg[63:0] cond_data, output reg pc_b_jump);
	always@(*) begin
		case(cond_op)
			1'b0: if(cond_data == 0) pc_b_jump = 1; else pc_b_jump = 0;
			1'b1: if(cond_data == 0) pc_b_jump = 0; else pc_b_jump = 1;
		endcase
	end
endmodule
