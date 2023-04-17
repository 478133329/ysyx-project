module alu(
	input op,
	input[63:0] src1,
	input[63:0] src2,
	output reg[63:0] dst
	);
	always@(*) begin
		case (op)
			1'b0: dst = src2;
			1'b1: dst = src1 + src2;
			default: dst = src2;
		endcase
	end
endmodule

// case should be used in always
// assign should not be used in always