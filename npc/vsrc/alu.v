module alu(
	input op,
	input[31:0] src1,
	input[31:0] src2,
	output reg[31:0] dst
	);
	always@(*) begin
		case (op)
			1'b1: dst = src1 + src2;
			default: dst = src1;
		endcase
	end
endmodule

// case should be used in always
// assign should not be used in always