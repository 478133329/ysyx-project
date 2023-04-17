module controller(
		input[31:0] instr,

		output[63:0] imm,

		output reg_wen,
		output[4:0] reg_src1,
		output[4:0] reg_src2,
		output[4:0] reg_dst,
		output[1:0] reg_input_sel,

		output alu_op,
		output alu_a_sel,
		output alu_b_sel,

		output mem_wen,

		output pc_jump,
		output pc_jump_sel
		);

	wire[6:0] opcode;
	wire[2:0] funct3;
	wire[6:0] funct7;
	
	assign opcode = instr[6:0];
	assign funct3 = instr[14:12];
	assign funct7 = instr[31:25];

	wire is_u_type;
	wire is_j_type;
	wire is_i_type;
	wire is_b_type;
	wire is_s_type;
	wire is_r_type;

	assign is_u_type = (opcode == 7'b0110111) || (opcode == 7'b0010111);
	assign is_j_type = (opcode == 7'b1101111);
	assign is_i_type = (opcode == 7'b1100111) || (opcode == 7'b0010011);
	assign is_s_type = (opcode == 7'b0100011);
	assign is_r_type = (opcode == 7'b0110011);

	wire is_lui_op;
	wire is_auipc_op;
	wire is_jal_op;
	wire is_jalr_op;
	wire is_addi_op;
	wire is_sd_op;
	wire is_add_op;

	assign is_lui_op = (opcode == 7'b0110111);
	assign is_auipc_op = (opcode == 7'b0010111);
	assign is_jal_op = (opcode == 7'b1101111);
	assign is_jalr_op = (opcode == 7'b1100111)&&(funct3 == 3'b000);
	assign is_addi_op = (opcode == 7'b0010011)&&(funct3 == 3'b000);
	assign is_sd_op = (opcode == 7'b0100011)&&(funct3 == 3'b011);
	assign is_add_op = (opcode == 7'b0110011)&&(funct3 == 3'b000)&&(funct7 == 7'b0000000);

	wire[63:0] u_type_imm;
	wire[63:0] j_type_imm;
	wire[63:0] i_type_imm;
	wire[63:0] b_type_imm;
	wire[63:0] s_type_imm;
	wire[2:0] imm_type_code;

	assign u_type_imm = {{32{instr[31]}}, instr[31:12], {12{1'b0}}};
	assign j_type_imm = {{43{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
	assign i_type_imm = {{52{instr[31]}}, instr[31:21], instr[20] & ~is_jalr_op};
	assign b_type_imm = {{51{instr[12]}}, instr[12], instr[7], instr[30:25], instr[11:8], 1'b0};
	assign s_type_imm = {{52{instr[31]}}, instr[31:25], instr[11:7]};
	assign imm_type_code[0] = is_j_type | is_i_type;
	assign imm_type_code[1] = is_i_type | is_b_type | is_s_type;
	assign imm_type_code[2] = is_s_type;
	MuxKey #(5, 3, 64) program_counter_mux21(.out(imm), .key(imm_type_code), .lut({
		3'b000, u_type_imm,
		3'b001, j_type_imm,
		3'b011, i_type_imm,
		3'b010, b_type_imm,
		3'b110, s_type_imm
	}));

	assign reg_wen = is_u_type | is_j_type | is_i_type | is_r_type;
	assign reg_src1 = instr[19:15];
	assign reg_src2 = instr[24:20];
	assign reg_dst =  instr[11:7];
	assign reg_input_sel[0] = is_u_type | is_i_type | is_r_type;
	assign reg_input_sel[1] = is_j_type | (is_i_type & opcode == 7'b0000011);

	assign alu_op = is_auipc_op | is_jal_op | is_jalr_op | is_addi_op | is_add_op;
	assign alu_a_sel = is_i_type | is_r_type;  //0:pc 1:reg
	assign alu_b_sel = is_r_type;  //0:imm 1:reg

	assign mem_wen = 1'b0;

	assign pc_jump = is_j_type | is_jalr_op;
	assign pc_jump_sel = is_b_type;
	
endmodule
