module controller(
		input[31:0] instr,

		output[63:0] imm,

		output reg_wen,
		output[4:0] reg_src1,
		output[4:0] reg_src2,
		output[4:0] reg_dst,
		output[1:0] reg_input_sel,

		output[3:0] alu_op,
		output alu_a_sel,
		output alu_b_sel,

		output mem_wen,

		output pc_j_jump,

		output pc_b_jump_cond
		);

	wire[6:0] opcode;
	wire[2:0] funct3;
	wire[6:0] funct7;
	
	assign opcode = instr[6:0];
	assign funct3 = instr[14:12];
	assign funct7 = instr[31:25];

	wire is_u_type;
	wire is_j_type;
	wire is_i_type;	wire is_i_arith_type;	wire is_i_jump_type;	wire is_i_load_type;
	wire is_b_type;
	wire is_s_type;
	wire is_r_type;

	assign is_u_type = (opcode == 7'b0110111) || (opcode == 7'b0010111);
	assign is_j_type = (opcode == 7'b1101111);
	assign is_i_type = (opcode == 7'b1100111) || (opcode == 7'b0000011) || (opcode == 7'b0010011) || (opcode == 7'b1110011);
	assign is_b_type = (opcode == 7'b1100011);
	assign is_s_type = (opcode == 7'b0100011);
	assign is_r_type = (opcode == 7'b0110011);

	wire is_lui_op;
	wire is_auipc_op;

	wire is_jal_op;

	wire is_jalr_op;

	wire is_beq_op;
	wire is_bne_op;
	wire is_blt_op;
	wire is_bge_op;
	wire is_bltu_op;
	wire is_bgeu_op;

	wire is_lb_op;
	wire is_lh_op;
	wire is_lw_op;
	wire is_ld_op;
	wire is_lbu_op;
	wire is_lhu_op;
	wire is_lwu_op;

	wire is_sb_op;
	wire is_sh_op;
	wire is_sw_op;
	wire is_sd_op;

	wire is_addi_op;
	wire is_slti_op;
	wire is_sltiu_op;
	wire is_xori_op;
	wire is_ori_op;
	wire is_andi_op;
	wire is_slli_op;
	wire is_srli_op;
	wire is_srai_op;

	wire is_add_op;
	wire is_sub_op;
	wire is_sll_op;
	wire is_slt_op;
	wire is_sltu_op;
	wire is_xor_op;
	wire is_srl_op;
	wire is_sra_op;
	wire is_and_op;
	wire is_or_op;

	wire is_ebreak_op;

	assign is_lui_op = (opcode == 7'b0110111);
	assign is_auipc_op = (opcode == 7'b0010111);

	assign is_jal_op = (opcode == 7'b1101111);

	assign is_jalr_op = (opcode == 7'b1100111)&&(funct3 == 3'b000);

	assign is_beq_op = (opcode == 7'b1100011)&&(funct3 == 3'b000);
	assign is_bne_op = (opcode == 7'b1100011)&&(funct3 == 3'b001);
	assign is_blt_op = (opcode == 7'b1100011)&&(funct3 == 3'b100);
	assign is_bge_op = (opcode == 7'b1100011)&&(funct3 == 3'b101);
	assign is_bltu_op = (opcode == 7'b1100011)&&(funct3 == 3'b110);
	assign is_bgeu_op = (opcode == 7'b1100011)&&(funct3 == 3'b111);

	assign is_lb_op = (opcode == 7'b0000011)&&(funct3 == 3'b000);
	assign is_lh_op = (opcode == 7'b0000011)&&(funct3 == 3'b001);
	assign is_lw_op = (opcode == 7'b0000011)&&(funct3 == 3'b010);
	assign is_ld_op = (opcode == 7'b0000011)&&(funct3 == 3'b011);
	assign is_lbu_op = (opcode == 7'b0000011)&&(funct3 == 3'b100);
	assign is_lhu_op = (opcode == 7'b0000011)&&(funct3 == 3'b101);
	assign is_lwu_op = (opcode == 7'b0000011)&&(funct3 == 3'b110);

	assign is_sb_op = (opcode == 7'b0100011)&&(funct3 == 3'b000);
	assign is_sh_op = (opcode == 7'b0100011)&&(funct3 == 3'b001);
	assign is_sw_op = (opcode == 7'b0100011)&&(funct3 == 3'b010);
	assign is_sd_op = (opcode == 7'b0100011)&&(funct3 == 3'b011);

	assign is_addi_op = (opcode == 7'b0010011)&&(funct3 == 3'b000);
	assign is_slti_op = (opcode == 7'b0010011)&&(funct3 == 3'b010);
	assign is_sltiu_op = (opcode == 7'b0010011)&&(funct3 == 3'b011);
	assign is_xori_op = (opcode == 7'b0010011)&&(funct3 == 3'b100);
	assign is_ori_op = (opcode == 7'b0010011)&&(funct3 == 3'b110);
	assign is_andi_op = (opcode == 7'b0010011)&&(funct3 == 3'b111);
	assign is_slli_op = (opcode == 7'b0010011)&&(funct3 == 3'b001)&&(funct7 == 7'b0000000);
	assign is_srli_op = (opcode == 7'b0010011)&&(funct3 == 3'b101)&&(funct7 == 7'b0000000);
	assign is_srai_op = (opcode == 7'b0010011)&&(funct3 == 3'b101)&&(funct7 == 7'b0100000);

	assign is_add_op = (opcode == 7'b0110011)&&(funct3 == 3'b000)&&(funct7 == 7'b0000000);
	assign is_sub_op = (opcode == 7'b0110011)&&(funct3 == 3'b000)&&(funct7 == 7'b0100000);
	assign is_sll_op = (opcode == 7'b0110011)&&(funct3 == 3'b001)&&(funct7 == 7'b0000000);
	assign is_slt_op = (opcode == 7'b0110011)&&(funct3 == 3'b010)&&(funct7 == 7'b0000000);
	assign is_sltu_op = (opcode == 7'b0110011)&&(funct3 == 3'b011)&&(funct7 == 7'b0000000);
	assign is_xor_op = (opcode == 7'b0110011)&&(funct3 == 3'b100)&&(funct7 == 7'b0000000);
	assign is_srl_op = (opcode == 7'b0110011)&&(funct3 == 3'b101)&&(funct7 == 7'b0000000);
	assign is_sra_op = (opcode == 7'b0110011)&&(funct3 == 3'b101)&&(funct7 == 7'b0100000);
	assign is_and_op = (opcode == 7'b0110011)&&(funct3 == 3'b110)&&(funct7 == 7'b0000000);
	assign is_or_op = (opcode == 7'b0110011)&&(funct3 == 3'b111)&&(funct7 == 7'b0000000);

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
	// 00: 01:alu 10:pc+4 11:mem
	assign reg_input_sel[0] = is_u_type | is_i_arith_type | is_i_load_type | is_r_type;
	assign reg_input_sel[1] = is_j_type | is_i_jump_type | is_i_load_type;

	// 0000:direct 0001:add 0010:sub 0011:and 0100:or 0101:xor 0110:shift_left_logic 0111:shift_right_logic 1000:shift_right_arith 1001:less_than_signed 1010:less_than_unsigned
	assign alu_op[0] = is_auipc_op | is_jal_op | is_jalr_op | is_lb_op | is_lh_op | is_lw_op | is_ld_op | is_lbu_op | is_lhu_op | is_lwu_op | is_sb_op | is_sh_op | is_sw_op | is_sd_op | is_addi_op | is_xori_op | is_andi_op | is_srli_op | is_add_op | is_xor_op | is_srl_op | is_and_op | is_slt_op | is_slti_op | is_blt_op | is_bge_op;
	assign alu_op[1] = is_beq_op | is_bne_op | is_andi_op | is_slli_op | is_srli_op | is_sub_op | is_sll_op | is_srl_op | is_and_op | is_sltu_op | is_sltiu_op | is_bltu_op | is_bgeu_op;
	assign alu_op[2] = is_xori_op | is_ori_op | is_slli_op | is_srli_op | is_sll_op | is_xor_op | is_srl_op | is_or_op;
	assign alu_op[3] = is_srai_op | is_sra_op | is_slt_op | is_sltu_op | is_slti_op | is_sltiu_op | is_blt_op | is_bltu_op | is_bge_op | is_bgeu_op;
	assign alu_a_sel = is_i_type | is_b_type | is_s_type | is_r_type;  //0:pc 1:reg
	assign alu_b_sel = is_b_type | is_r_type;  //0:imm 1:reg

	assign mem_wen = is_s_type;

	assign pc_j_jump = is_j_type | is_jalr_op;
	
	// 00:eq 01:ne 10:lt 11:ge {01,10} 0:eq+ge 1:ne+lt
	assign pc_b_jump_cond = is_bne_op | is_blt_op | is_bltu_op;

endmodule

