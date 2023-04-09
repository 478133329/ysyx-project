module controller(
		input[31:0] instr,
		output[31:0] imm,
		output reg_wen,
		output[4:0] reg_src1,
		output[4:0] reg_src2,
		output[4:0] reg_dst,
		output alu_op,
		output alu_a_sel,
		output alu_b_sel,
		output mem_wen,
		output pc_jump
		);

	wire[6:0] opcode;
	wire[2:0] funct3;
	wire[6:0] funct7;
	
	assign opcode = instr[6:0];
	assign funct3 = instr[14:12];
	assign funct7 = instr[31:25];

	wire is_add_op;
	wire is_addi_op;

	assign is_add_op = (opcode == 7'b0110011)&&(funct3 == 3'b000)&&(funct7 == 7'b0000000);
	assign is_addi_op = (opcode == 7'b0010011)&&(funct3 == 3'b000);

	wire is_r_type;
	wire is_i_type;
	wire is_s_type;
	wire is_b_type;
	wire is_u_type;
	wire is_j_type;

	assign is_r_type = is_add_op;
	assign is_i_type = is_addi_op;

	assign imm = {{20{instr[31]}} ,instr[31:20]};
	assign reg_wen = is_r_type || is_i_type;
	assign reg_src1 = instr[19:15];
	assign reg_src2 = instr[24:20];
	assign reg_dst =  instr[11:7];
	assign alu_op = is_add_op || is_addi_op;
	assign alu_a_sel = is_r_type || is_i_type;
	assign alu_b_sel = is_r_type;
	assign mem_wen = 1'b0;
	assign pc_jump = 1'b0;
	
endmodule
