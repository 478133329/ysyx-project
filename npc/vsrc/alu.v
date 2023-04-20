module alu(
	input[3:0] op,
	input[63:0] src1,
	input[63:0] src2,
	output reg[63:0] dst
	);
	wire[63:0] direct_dst, add_dst, sub_dst, and_dst, or_dst, xor_dst, sll_dst, srl_dst, sra_dst, lt_dst, ltu_dst;
	assign direct_dst = src2;
	assign add_dst = src1 + src2;
	assign sub_dst = src1 - src2;
	assign and_dst = src1 & src2;
	assign or_dst = src1 | src2;
	assign xor_dst = src1 ^ src2;
	assign sll_dst = src1 << src2;
	assign srl_dst = src1 >> src2;
	assign sra_dst = src1 >>> src2;
	assign lt_dst = less_than(src1, src2);
	assign ltu_dst = (src1 < src2) ? 1 : 0;
	MuxKey #(11, 4, 64) alu_dst_muxb1(.out(dst), .key(op), .lut({
			4'b0000, direct_dst,
			4'b0001, add_dst,
			4'b0010, sub_dst,
			4'b0011, and_dst,
			4'b0100, or_dst,
			4'b0101, xor_dst,
			4'b0110, sll_dst,
			4'b0111, srl_dst,
			4'b1000, sra_dst,
			4'b1001, lt_dst,
			4'b1010, ltu_dst
	}));
endmodule
// 0000:direct 0001:add 0010:sub 0011:and 0100:or 0101:xor 0110:shift_left_logic 0111:shift_right_logic 1000:shift_right_arith 1001:less_than_signed 1010:less_than_unsigned
// case should be used in always
// assign should not be used in always

function bit[63:0] less_than(input[63:0] src1, input[63:0] src2);
	reg[63:0] temp;
	begin
		if(src1[63] == 1'b0 && src2[63] == 1'b1) temp = 64'b0;
		else if(src1[63] == 1'b1 && src2[63] == 1'b0) temp = 64'b1;
		else if(src1[62:0] < src2[62:0]) temp = 64'b1;
		else temp = 64'b0;
	end
	assign less_than = temp;
endfunction
			