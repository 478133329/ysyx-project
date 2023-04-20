// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmy_cpu__Syms.h"


VL_ATTR_COLD void Vmy_cpu___024root__trace_init_sub__TOP__0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+356,"clk", false,-1);
    tracep->declBit(c+357,"rst", false,-1);
    tracep->declBus(c+358,"instr", false,-1, 31,0);
    tracep->declQuad(c+359,"rdata", false,-1, 63,0);
    tracep->declQuad(c+361,"wdata", false,-1, 63,0);
    tracep->declQuad(c+363,"instr_raddr", false,-1, 63,0);
    tracep->declQuad(c+365,"data_raddr", false,-1, 63,0);
    tracep->declQuad(c+367,"data_waddr", false,-1, 63,0);
    tracep->declBit(c+369,"mem_wen", false,-1);
    tracep->pushNamePrefix("my_cpu ");
    tracep->declBit(c+356,"clk", false,-1);
    tracep->declBit(c+357,"rst", false,-1);
    tracep->declBus(c+358,"instr", false,-1, 31,0);
    tracep->declQuad(c+359,"rdata", false,-1, 63,0);
    tracep->declQuad(c+361,"wdata", false,-1, 63,0);
    tracep->declQuad(c+363,"instr_raddr", false,-1, 63,0);
    tracep->declQuad(c+365,"data_raddr", false,-1, 63,0);
    tracep->declQuad(c+367,"data_waddr", false,-1, 63,0);
    tracep->declBit(c+369,"mem_wen", false,-1);
    tracep->declQuad(c+350,"pc", false,-1, 63,0);
    tracep->declQuad(c+352,"pc_add4", false,-1, 63,0);
    tracep->declBit(c+370,"reg_wen", false,-1);
    tracep->declBus(c+371,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+372,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+373,"reg_raddr2", false,-1, 4,0);
    tracep->declQuad(c+89,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+29,"reg_input_sel", false,-1, 1,0);
    tracep->declQuad(c+374,"reg_rdata1", false,-1, 63,0);
    tracep->declQuad(c+376,"reg_rdata2", false,-1, 63,0);
    tracep->declBit(c+30,"alu_a_sel", false,-1);
    tracep->declBit(c+31,"alu_b_sel", false,-1);
    tracep->declBus(c+32,"alu_op", false,-1, 3,0);
    tracep->declQuad(c+91,"alu_src1", false,-1, 63,0);
    tracep->declQuad(c+93,"alu_src2", false,-1, 63,0);
    tracep->declQuad(c+95,"alu_dst", false,-1, 63,0);
    tracep->declQuad(c+33,"imm", false,-1, 63,0);
    tracep->declBit(c+97,"pc_jump", false,-1);
    tracep->declQuad(c+98,"pc_jump_addr", false,-1, 63,0);
    tracep->declBit(c+378,"pc_j_jump", false,-1);
    tracep->declBit(c+100,"pc_b_jump", false,-1);
    tracep->declBit(c+35,"pc_b_jump_cond", false,-1);
    tracep->declQuad(c+446,"b_jump_addr", false,-1, 63,0);
    tracep->pushNamePrefix("alu_src1_mux21 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+91,"out", false,-1, 63,0);
    tracep->declBus(c+30,"key", false,-1, 0,0);
    tracep->declArray(c+379,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+91,"out", false,-1, 63,0);
    tracep->declBus(c+30,"key", false,-1, 0,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+379,"lut", false,-1, 129,0);
    tracep->declBus(c+454,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+101+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+107+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+111,"lut_out", false,-1, 63,0);
    tracep->declBit(c+36,"hit", false,-1);
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_src2_mux21 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+93,"out", false,-1, 63,0);
    tracep->declBus(c+31,"key", false,-1, 0,0);
    tracep->declArray(c+384,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+93,"out", false,-1, 63,0);
    tracep->declBus(c+31,"key", false,-1, 0,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+384,"lut", false,-1, 129,0);
    tracep->declBus(c+454,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+113+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+119+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+123,"lut_out", false,-1, 63,0);
    tracep->declBit(c+37,"hit", false,-1);
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("jump_sel_mux21 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+98,"out", false,-1, 63,0);
    tracep->declBus(c+100,"key", false,-1, 0,0);
    tracep->declArray(c+125,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+98,"out", false,-1, 63,0);
    tracep->declBus(c+100,"key", false,-1, 0,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+125,"lut", false,-1, 129,0);
    tracep->declBus(c+454,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+130+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+136+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+140,"lut_out", false,-1, 63,0);
    tracep->declBit(c+142,"hit", false,-1);
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBus(c+32,"op", false,-1, 3,0);
    tracep->declQuad(c+91,"src1", false,-1, 63,0);
    tracep->declQuad(c+93,"src2", false,-1, 63,0);
    tracep->declQuad(c+95,"dst", false,-1, 63,0);
    tracep->declQuad(c+93,"direct_dst", false,-1, 63,0);
    tracep->declQuad(c+143,"add_dst", false,-1, 63,0);
    tracep->declQuad(c+145,"sub_dst", false,-1, 63,0);
    tracep->declQuad(c+147,"and_dst", false,-1, 63,0);
    tracep->declQuad(c+149,"or_dst", false,-1, 63,0);
    tracep->declQuad(c+151,"xor_dst", false,-1, 63,0);
    tracep->declQuad(c+153,"sll_dst", false,-1, 63,0);
    tracep->declQuad(c+155,"srl_dst", false,-1, 63,0);
    tracep->declQuad(c+155,"sra_dst", false,-1, 63,0);
    tracep->declQuad(c+157,"lt_dst", false,-1, 63,0);
    tracep->declQuad(c+159,"ltu_dst", false,-1, 63,0);
    tracep->pushNamePrefix("alu_dst_muxb1 ");
    tracep->declBus(c+456,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+457,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+95,"out", false,-1, 63,0);
    tracep->declBus(c+32,"key", false,-1, 3,0);
    tracep->declArray(c+161,"lut", false,-1, 747,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+456,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+457,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+95,"out", false,-1, 63,0);
    tracep->declBus(c+32,"key", false,-1, 3,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+161,"lut", false,-1, 747,0);
    tracep->declBus(c+458,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+185+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+218+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+240,"lut_out", false,-1, 63,0);
    tracep->declBit(c+38,"hit", false,-1);
    tracep->declBus(c+459,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("my_branch ");
    tracep->declBit(c+35,"cond_op", false,-1);
    tracep->declQuad(c+95,"cond_data", false,-1, 63,0);
    tracep->declBit(c+100,"pc_b_jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_controller ");
    tracep->declBus(c+358,"instr", false,-1, 31,0);
    tracep->declQuad(c+33,"imm", false,-1, 63,0);
    tracep->declBit(c+370,"reg_wen", false,-1);
    tracep->declBus(c+372,"reg_src1", false,-1, 4,0);
    tracep->declBus(c+373,"reg_src2", false,-1, 4,0);
    tracep->declBus(c+371,"reg_dst", false,-1, 4,0);
    tracep->declBus(c+29,"reg_input_sel", false,-1, 1,0);
    tracep->declBus(c+32,"alu_op", false,-1, 3,0);
    tracep->declBit(c+30,"alu_a_sel", false,-1);
    tracep->declBit(c+31,"alu_b_sel", false,-1);
    tracep->declBit(c+369,"mem_wen", false,-1);
    tracep->declBit(c+378,"pc_j_jump", false,-1);
    tracep->declBit(c+35,"pc_b_jump_cond", false,-1);
    tracep->declBus(c+389,"opcode", false,-1, 6,0);
    tracep->declBus(c+390,"funct3", false,-1, 2,0);
    tracep->declBus(c+391,"funct7", false,-1, 6,0);
    tracep->declBit(c+39,"is_u_type", false,-1);
    tracep->declBit(c+392,"is_j_type", false,-1);
    tracep->declBit(c+40,"is_i_type", false,-1);
    tracep->declBit(c+460,"is_i_arith_type", false,-1);
    tracep->declBit(c+461,"is_i_jump_type", false,-1);
    tracep->declBit(c+462,"is_i_load_type", false,-1);
    tracep->declBit(c+393,"is_b_type", false,-1);
    tracep->declBit(c+369,"is_s_type", false,-1);
    tracep->declBit(c+394,"is_r_type", false,-1);
    tracep->declBit(c+395,"is_lui_op", false,-1);
    tracep->declBit(c+396,"is_auipc_op", false,-1);
    tracep->declBit(c+392,"is_jal_op", false,-1);
    tracep->declBit(c+41,"is_jalr_op", false,-1);
    tracep->declBit(c+397,"is_beq_op", false,-1);
    tracep->declBit(c+42,"is_bne_op", false,-1);
    tracep->declBit(c+43,"is_blt_op", false,-1);
    tracep->declBit(c+44,"is_bge_op", false,-1);
    tracep->declBit(c+45,"is_bltu_op", false,-1);
    tracep->declBit(c+46,"is_bgeu_op", false,-1);
    tracep->declBit(c+398,"is_lb_op", false,-1);
    tracep->declBit(c+399,"is_lh_op", false,-1);
    tracep->declBit(c+400,"is_lw_op", false,-1);
    tracep->declBit(c+401,"is_ld_op", false,-1);
    tracep->declBit(c+402,"is_lbu_op", false,-1);
    tracep->declBit(c+403,"is_lhu_op", false,-1);
    tracep->declBit(c+404,"is_lwu_op", false,-1);
    tracep->declBit(c+405,"is_sb_op", false,-1);
    tracep->declBit(c+406,"is_sh_op", false,-1);
    tracep->declBit(c+407,"is_sw_op", false,-1);
    tracep->declBit(c+408,"is_sd_op", false,-1);
    tracep->declBit(c+409,"is_addi_op", false,-1);
    tracep->declBit(c+47,"is_slti_op", false,-1);
    tracep->declBit(c+48,"is_sltiu_op", false,-1);
    tracep->declBit(c+49,"is_xori_op", false,-1);
    tracep->declBit(c+410,"is_ori_op", false,-1);
    tracep->declBit(c+50,"is_andi_op", false,-1);
    tracep->declBit(c+51,"is_slli_op", false,-1);
    tracep->declBit(c+52,"is_srli_op", false,-1);
    tracep->declBit(c+411,"is_srai_op", false,-1);
    tracep->declBit(c+412,"is_add_op", false,-1);
    tracep->declBit(c+413,"is_sub_op", false,-1);
    tracep->declBit(c+53,"is_sll_op", false,-1);
    tracep->declBit(c+54,"is_slt_op", false,-1);
    tracep->declBit(c+55,"is_sltu_op", false,-1);
    tracep->declBit(c+56,"is_xor_op", false,-1);
    tracep->declBit(c+57,"is_srl_op", false,-1);
    tracep->declBit(c+414,"is_sra_op", false,-1);
    tracep->declBit(c+58,"is_and_op", false,-1);
    tracep->declBit(c+415,"is_or_op", false,-1);
    tracep->declBit(c+463,"is_ebreak_op", false,-1);
    tracep->declQuad(c+416,"u_type_imm", false,-1, 63,0);
    tracep->declQuad(c+418,"j_type_imm", false,-1, 63,0);
    tracep->declQuad(c+420,"i_type_imm", false,-1, 63,0);
    tracep->declQuad(c+422,"b_type_imm", false,-1, 63,0);
    tracep->declQuad(c+424,"s_type_imm", false,-1, 63,0);
    tracep->declBus(c+59,"imm_type_code", false,-1, 2,0);
    tracep->pushNamePrefix("program_counter_mux21 ");
    tracep->declBus(c+464,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+465,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+33,"out", false,-1, 63,0);
    tracep->declBus(c+59,"key", false,-1, 2,0);
    tracep->declArray(c+426,"lut", false,-1, 334,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+464,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+465,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+33,"out", false,-1, 63,0);
    tracep->declBus(c+59,"key", false,-1, 2,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+426,"lut", false,-1, 334,0);
    tracep->declBus(c+466,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+60+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+75+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+85,"lut_out", false,-1, 63,0);
    tracep->declBit(c+87,"hit", false,-1);
    tracep->declBus(c+467,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBit(c+356,"clk", false,-1);
    tracep->declBit(c+357,"rst", false,-1);
    tracep->declBit(c+97,"jump", false,-1);
    tracep->declQuad(c+98,"jump_addr", false,-1, 63,0);
    tracep->declQuad(c+350,"pc", false,-1, 63,0);
    tracep->declQuad(c+352,"pc_add4", false,-1, 63,0);
    tracep->declQuad(c+242,"npc", false,-1, 63,0);
    tracep->pushNamePrefix("program_counter_mux21 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+242,"out", false,-1, 63,0);
    tracep->declBus(c+97,"key", false,-1, 0,0);
    tracep->declArray(c+244,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+242,"out", false,-1, 63,0);
    tracep->declBus(c+97,"key", false,-1, 0,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+244,"lut", false,-1, 129,0);
    tracep->declBus(c+454,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+249+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+255+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+259,"lut_out", false,-1, 63,0);
    tracep->declBit(c+261,"hit", false,-1);
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("program_counter_reg_lo ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+468,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+356,"clk", false,-1);
    tracep->declBit(c+357,"rst", false,-1);
    tracep->declQuad(c+242,"din", false,-1, 63,0);
    tracep->declQuad(c+350,"dout", false,-1, 63,0);
    tracep->declBit(c+470,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_reg_heap ");
    tracep->declBit(c+356,"clk", false,-1);
    tracep->declBit(c+357,"rst", false,-1);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->declBus(c+371,"waddr", false,-1, 4,0);
    tracep->declBus(c+372,"raddr1", false,-1, 4,0);
    tracep->declBus(c+373,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+89,"wdata", false,-1, 63,0);
    tracep->declQuad(c+374,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+376,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+262+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBus(c+471,"i", false,-1, 31,0);
    tracep->pushNamePrefix("reg_heap_reg ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+452,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+356,"clk", false,-1);
    tracep->declBit(c+357,"rst", false,-1);
    tracep->declQuad(c+89,"din", false,-1, 63,0);
    tracep->declQuad(c+354,"dout", false,-1, 63,0);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_input_mux41 ");
    tracep->declBus(c+457,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+448,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+89,"out", false,-1, 63,0);
    tracep->declBus(c+29,"key", false,-1, 1,0);
    tracep->declArray(c+437,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+457,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+448,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+451,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+89,"out", false,-1, 63,0);
    tracep->declBus(c+29,"key", false,-1, 1,0);
    tracep->declQuad(c+452,"default_out", false,-1, 63,0);
    tracep->declArray(c+437,"lut", false,-1, 263,0);
    tracep->declBus(c+472,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+326+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+338+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+346,"lut_out", false,-1, 63,0);
    tracep->declBit(c+88,"hit", false,-1);
    tracep->declBus(c+473,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vmy_cpu___024root__trace_init_sub__TOP____024unit__0(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+348,"less_than__Vstatic__temp", false,-1, 63,0);
}

VL_ATTR_COLD void Vmy_cpu___024root__trace_init_top(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_init_top\n"); );
    // Body
    Vmy_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vmy_cpu___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmy_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmy_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmy_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmy_cpu___024root__trace_register(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmy_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmy_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmy_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmy_cpu___024root__trace_full_sub_0(Vmy_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmy_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vmy_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmy_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmy_cpu___024root__trace_full_sub_0(Vmy_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_hb4ef33b0__0;
    VlWide<24>/*767:0*/ __Vtemp_h52e5427d__0;
    VlWide<5>/*159:0*/ __Vtemp_h736f97b8__0;
    VlWide<5>/*159:0*/ __Vtemp_h0a9e5d89__0;
    VlWide<5>/*159:0*/ __Vtemp_h73a6fc68__0;
    VlWide<5>/*159:0*/ __Vtemp_h066e2f0f__0;
    VlWide<7>/*223:0*/ __Vtemp_h90f5a640__0;
    VlWide<9>/*287:0*/ __Vtemp_hf2789951__0;
    VlWide<11>/*351:0*/ __Vtemp_ha7af71ad__0;
    VlWide<9>/*287:0*/ __Vtemp_h750abc89__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+7,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+8,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+9,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+10,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+11,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+12,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+13,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+14,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+15,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+16,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+17,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+18,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+19,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+20,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+21,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+22,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+23,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+24,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+25,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+26,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+27,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+28,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+29,(vlSelf->my_cpu__DOT__reg_input_sel),2);
    bufp->fullBit(oldp+30,(vlSelf->my_cpu__DOT__alu_a_sel));
    bufp->fullBit(oldp+31,(vlSelf->my_cpu__DOT__alu_b_sel));
    bufp->fullCData(oldp+32,(vlSelf->my_cpu__DOT__alu_op),4);
    bufp->fullQData(oldp+33,(vlSelf->my_cpu__DOT__imm),64);
    bufp->fullBit(oldp+35,(vlSelf->my_cpu__DOT__pc_b_jump_cond));
    bufp->fullBit(oldp+36,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+37,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+38,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+39,(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type));
    bufp->fullBit(oldp+40,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type));
    bufp->fullBit(oldp+41,(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op));
    bufp->fullBit(oldp+42,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bne_op));
    bufp->fullBit(oldp+43,(vlSelf->my_cpu__DOT__my_controller__DOT__is_blt_op));
    bufp->fullBit(oldp+44,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bge_op));
    bufp->fullBit(oldp+45,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bltu_op));
    bufp->fullBit(oldp+46,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bgeu_op));
    bufp->fullBit(oldp+47,(vlSelf->my_cpu__DOT__my_controller__DOT__is_slti_op));
    bufp->fullBit(oldp+48,(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltiu_op));
    bufp->fullBit(oldp+49,(vlSelf->my_cpu__DOT__my_controller__DOT__is_xori_op));
    bufp->fullBit(oldp+50,(vlSelf->my_cpu__DOT__my_controller__DOT__is_andi_op));
    bufp->fullBit(oldp+51,(vlSelf->my_cpu__DOT__my_controller__DOT__is_slli_op));
    bufp->fullBit(oldp+52,(vlSelf->my_cpu__DOT__my_controller__DOT__is_srli_op));
    bufp->fullBit(oldp+53,(vlSelf->my_cpu__DOT__my_controller__DOT__is_sll_op));
    bufp->fullBit(oldp+54,(vlSelf->my_cpu__DOT__my_controller__DOT__is_slt_op));
    bufp->fullBit(oldp+55,(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltu_op));
    bufp->fullBit(oldp+56,(vlSelf->my_cpu__DOT__my_controller__DOT__is_xor_op));
    bufp->fullBit(oldp+57,(vlSelf->my_cpu__DOT__my_controller__DOT__is_srl_op));
    bufp->fullBit(oldp+58,(vlSelf->my_cpu__DOT__my_controller__DOT__is_and_op));
    bufp->fullCData(oldp+59,(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code),3);
    bufp->fullWData(oldp+60,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+63,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+66,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+69,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+72,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+75,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+77,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+79,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+81,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+83,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+85,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+87,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+88,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+89,(vlSelf->my_cpu__DOT__reg_wdata),64);
    bufp->fullQData(oldp+91,(vlSelf->my_cpu__DOT__alu_src1),64);
    bufp->fullQData(oldp+93,(vlSelf->my_cpu__DOT__alu_src2),64);
    bufp->fullQData(oldp+95,(vlSelf->my_cpu__DOT__alu_dst),64);
    bufp->fullBit(oldp+97,(vlSelf->my_cpu__DOT__pc_jump));
    bufp->fullQData(oldp+98,(vlSelf->my_cpu__DOT__pc_jump_addr),64);
    bufp->fullBit(oldp+100,(vlSelf->my_cpu__DOT__pc_b_jump));
    bufp->fullWData(oldp+101,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+104,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+107,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+109,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+111,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullWData(oldp+113,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+116,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+119,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+121,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+123,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),64);
    __Vtemp_hb4ef33b0__0[0U] = (IData)(vlSelf->my_cpu__DOT__b_jump_addr);
    __Vtemp_hb4ef33b0__0[1U] = (IData)((vlSelf->my_cpu__DOT__b_jump_addr 
                                        >> 0x20U));
    __Vtemp_hb4ef33b0__0[2U] = (1U | ((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                      << 1U));
    __Vtemp_hb4ef33b0__0[3U] = (((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__alu_dst 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_hb4ef33b0__0[4U] = ((IData)((vlSelf->my_cpu__DOT__alu_dst 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->fullWData(oldp+125,(__Vtemp_hb4ef33b0__0),130);
    bufp->fullWData(oldp+130,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+133,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+136,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+138,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+140,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+142,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+143,((vlSelf->my_cpu__DOT__alu_src1 
                               + vlSelf->my_cpu__DOT__alu_src2)),64);
    bufp->fullQData(oldp+145,((vlSelf->my_cpu__DOT__alu_src1 
                               - vlSelf->my_cpu__DOT__alu_src2)),64);
    bufp->fullQData(oldp+147,((vlSelf->my_cpu__DOT__alu_src1 
                               & vlSelf->my_cpu__DOT__alu_src2)),64);
    bufp->fullQData(oldp+149,((vlSelf->my_cpu__DOT__alu_src1 
                               | vlSelf->my_cpu__DOT__alu_src2)),64);
    bufp->fullQData(oldp+151,((vlSelf->my_cpu__DOT__alu_src1 
                               ^ vlSelf->my_cpu__DOT__alu_src2)),64);
    bufp->fullQData(oldp+153,(VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2)),64);
    bufp->fullQData(oldp+155,(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst),64);
    bufp->fullQData(oldp+157,(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst),64);
    bufp->fullQData(oldp+159,(((vlSelf->my_cpu__DOT__alu_src1 
                                < vlSelf->my_cpu__DOT__alu_src2)
                                ? 1ULL : 0ULL)),64);
    __Vtemp_h52e5427d__0[0U] = (IData)(((vlSelf->my_cpu__DOT__alu_src1 
                                         < vlSelf->my_cpu__DOT__alu_src2)
                                         ? 1ULL : 0ULL));
    __Vtemp_h52e5427d__0[1U] = (IData)((((vlSelf->my_cpu__DOT__alu_src1 
                                          < vlSelf->my_cpu__DOT__alu_src2)
                                          ? 1ULL : 0ULL) 
                                        >> 0x20U));
    __Vtemp_h52e5427d__0[2U] = (0xaU | ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst) 
                                        << 4U));
    __Vtemp_h52e5427d__0[3U] = (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h52e5427d__0[4U] = (0x90U | (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                          << 8U) | 
                                         ((IData)((vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_h52e5427d__0[5U] = (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h52e5427d__0[6U] = (0x800U | (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                      >> 0x20U)) 
                                             >> 0x18U)));
    __Vtemp_h52e5427d__0[7U] = (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                 >> 0x14U) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h52e5427d__0[8U] = (0x7000U | (((IData)(
                                                    VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2)) 
                                            << 0x10U) 
                                           | ((IData)(
                                                      (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                       >> 0x20U)) 
                                              >> 0x14U)));
    __Vtemp_h52e5427d__0[9U] = (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2)) 
                                 >> 0x10U) | ((IData)(
                                                      (VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h52e5427d__0[0xaU] = (0x60000U | (((IData)(
                                                       (vlSelf->my_cpu__DOT__alu_src1 
                                                        ^ vlSelf->my_cpu__DOT__alu_src2)) 
                                               << 0x14U) 
                                              | ((IData)(
                                                         (VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2) 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h52e5427d__0[0xbU] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                            ^ vlSelf->my_cpu__DOT__alu_src2)) 
                                   >> 0xcU) | ((IData)(
                                                       ((vlSelf->my_cpu__DOT__alu_src1 
                                                         ^ vlSelf->my_cpu__DOT__alu_src2) 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_h52e5427d__0[0xcU] = (0x500000U | (((IData)(
                                                        (vlSelf->my_cpu__DOT__alu_src1 
                                                         | vlSelf->my_cpu__DOT__alu_src2)) 
                                                << 0x18U) 
                                               | ((IData)(
                                                          ((vlSelf->my_cpu__DOT__alu_src1 
                                                            ^ vlSelf->my_cpu__DOT__alu_src2) 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp_h52e5427d__0[0xdU] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                            | vlSelf->my_cpu__DOT__alu_src2)) 
                                   >> 8U) | ((IData)(
                                                     ((vlSelf->my_cpu__DOT__alu_src1 
                                                       | vlSelf->my_cpu__DOT__alu_src2) 
                                                      >> 0x20U)) 
                                             << 0x18U));
    __Vtemp_h52e5427d__0[0xeU] = (0x4000000U | (((IData)(
                                                         (vlSelf->my_cpu__DOT__alu_src1 
                                                          & vlSelf->my_cpu__DOT__alu_src2)) 
                                                 << 0x1cU) 
                                                | ((IData)(
                                                           ((vlSelf->my_cpu__DOT__alu_src1 
                                                             | vlSelf->my_cpu__DOT__alu_src2) 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_h52e5427d__0[0xfU] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                            & vlSelf->my_cpu__DOT__alu_src2)) 
                                   >> 4U) | ((IData)(
                                                     ((vlSelf->my_cpu__DOT__alu_src1 
                                                       & vlSelf->my_cpu__DOT__alu_src2) 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h52e5427d__0[0x10U] = (0x30000000U | ((IData)(
                                                          ((vlSelf->my_cpu__DOT__alu_src1 
                                                            & vlSelf->my_cpu__DOT__alu_src2) 
                                                           >> 0x20U)) 
                                                  >> 4U));
    __Vtemp_h52e5427d__0[0x11U] = (IData)((vlSelf->my_cpu__DOT__alu_src1 
                                           - vlSelf->my_cpu__DOT__alu_src2));
    __Vtemp_h52e5427d__0[0x12U] = (IData)(((vlSelf->my_cpu__DOT__alu_src1 
                                            - vlSelf->my_cpu__DOT__alu_src2) 
                                           >> 0x20U));
    __Vtemp_h52e5427d__0[0x13U] = (2U | ((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                                  + vlSelf->my_cpu__DOT__alu_src2)) 
                                         << 4U));
    __Vtemp_h52e5427d__0[0x14U] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                             + vlSelf->my_cpu__DOT__alu_src2)) 
                                    >> 0x1cU) | ((IData)(
                                                         ((vlSelf->my_cpu__DOT__alu_src1 
                                                           + vlSelf->my_cpu__DOT__alu_src2) 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h52e5427d__0[0x15U] = (0x10U | (((IData)(vlSelf->my_cpu__DOT__alu_src2) 
                                             << 8U) 
                                            | ((IData)(
                                                       ((vlSelf->my_cpu__DOT__alu_src1 
                                                         + vlSelf->my_cpu__DOT__alu_src2) 
                                                        >> 0x20U)) 
                                               >> 0x1cU)));
    __Vtemp_h52e5427d__0[0x16U] = (((IData)(vlSelf->my_cpu__DOT__alu_src2) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->my_cpu__DOT__alu_src2 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h52e5427d__0[0x17U] = ((IData)((vlSelf->my_cpu__DOT__alu_src2 
                                            >> 0x20U)) 
                                   >> 0x18U);
    bufp->fullWData(oldp+161,(__Vtemp_h52e5427d__0),748);
    bufp->fullWData(oldp+185,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+188,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+191,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+194,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+197,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+200,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+203,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+206,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+209,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+212,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+215,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[10]),68);
    bufp->fullQData(oldp+218,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+220,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+222,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+224,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+226,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+228,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+230,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+232,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+234,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+236,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+238,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+240,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out),64);
    bufp->fullQData(oldp+242,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),64);
    __Vtemp_h736f97b8__0[0U] = (IData)(vlSelf->my_cpu__DOT__pc_jump_addr);
    __Vtemp_h736f97b8__0[1U] = (IData)((vlSelf->my_cpu__DOT__pc_jump_addr 
                                        >> 0x20U));
    __Vtemp_h736f97b8__0[2U] = (1U | ((IData)((4ULL 
                                               + vlSelf->my_cpu__DOT__pc)) 
                                      << 1U));
    __Vtemp_h736f97b8__0[3U] = (((IData)((4ULL + vlSelf->my_cpu__DOT__pc)) 
                                 >> 0x1fU) | ((IData)(
                                                      ((4ULL 
                                                        + vlSelf->my_cpu__DOT__pc) 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h736f97b8__0[4U] = ((IData)(((4ULL + vlSelf->my_cpu__DOT__pc) 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->fullWData(oldp+244,(__Vtemp_h736f97b8__0),130);
    bufp->fullWData(oldp+249,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+252,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+255,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+257,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+259,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+261,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+262,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),64);
    bufp->fullQData(oldp+264,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),64);
    bufp->fullQData(oldp+266,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),64);
    bufp->fullQData(oldp+268,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),64);
    bufp->fullQData(oldp+270,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),64);
    bufp->fullQData(oldp+272,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),64);
    bufp->fullQData(oldp+274,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),64);
    bufp->fullQData(oldp+276,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),64);
    bufp->fullQData(oldp+278,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),64);
    bufp->fullQData(oldp+280,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),64);
    bufp->fullQData(oldp+282,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),64);
    bufp->fullQData(oldp+284,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),64);
    bufp->fullQData(oldp+286,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),64);
    bufp->fullQData(oldp+288,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),64);
    bufp->fullQData(oldp+290,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),64);
    bufp->fullQData(oldp+292,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),64);
    bufp->fullQData(oldp+294,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),64);
    bufp->fullQData(oldp+296,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),64);
    bufp->fullQData(oldp+298,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),64);
    bufp->fullQData(oldp+300,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),64);
    bufp->fullQData(oldp+302,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),64);
    bufp->fullQData(oldp+304,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),64);
    bufp->fullQData(oldp+306,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),64);
    bufp->fullQData(oldp+308,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),64);
    bufp->fullQData(oldp+310,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),64);
    bufp->fullQData(oldp+312,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),64);
    bufp->fullQData(oldp+314,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),64);
    bufp->fullQData(oldp+316,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),64);
    bufp->fullQData(oldp+318,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),64);
    bufp->fullQData(oldp+320,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),64);
    bufp->fullQData(oldp+322,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),64);
    bufp->fullQData(oldp+324,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),64);
    bufp->fullWData(oldp+326,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+329,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+332,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+335,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+338,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+340,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+342,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+344,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+346,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out),64);
    bufp->fullQData(oldp+348,(vlSymsp->TOP____024unit.less_than__Vstatic__temp),64);
    bufp->fullQData(oldp+350,(vlSelf->my_cpu__DOT__pc),64);
    bufp->fullQData(oldp+352,((4ULL + vlSelf->my_cpu__DOT__pc)),64);
    bufp->fullQData(oldp+354,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),64);
    bufp->fullBit(oldp+356,(vlSelf->clk));
    bufp->fullBit(oldp+357,(vlSelf->rst));
    bufp->fullIData(oldp+358,(vlSelf->instr),32);
    bufp->fullQData(oldp+359,(vlSelf->rdata),64);
    bufp->fullQData(oldp+361,(vlSelf->wdata),64);
    bufp->fullQData(oldp+363,(vlSelf->instr_raddr),64);
    bufp->fullQData(oldp+365,(vlSelf->data_raddr),64);
    bufp->fullQData(oldp+367,(vlSelf->data_waddr),64);
    bufp->fullBit(oldp+369,(vlSelf->mem_wen));
    bufp->fullBit(oldp+370,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->instr)) 
                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
                                   | (0x33U == (0x7fU 
                                                & vlSelf->instr)))))));
    bufp->fullCData(oldp+371,((0x1fU & (vlSelf->instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+372,((0x1fU & (vlSelf->instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+373,((0x1fU & (vlSelf->instr 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+374,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                              [(0x1fU & (vlSelf->instr 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+376,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                              [(0x1fU & (vlSelf->instr 
                                         >> 0x14U))]),64);
    bufp->fullBit(oldp+378,(((0x6fU == (0x7fU & vlSelf->instr)) 
                             | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op))));
    __Vtemp_h0a9e5d89__0[0U] = (IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                       [(0x1fU & (vlSelf->instr 
                                                  >> 0xfU))]);
    __Vtemp_h0a9e5d89__0[1U] = (IData)((vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                        [(0x1fU & (vlSelf->instr 
                                                   >> 0xfU))] 
                                        >> 0x20U));
    __Vtemp_h0a9e5d89__0[2U] = (1U | ((IData)(vlSelf->my_cpu__DOT__pc) 
                                      << 1U));
    __Vtemp_h0a9e5d89__0[3U] = (((IData)(vlSelf->my_cpu__DOT__pc) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__pc 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h0a9e5d89__0[4U] = ((IData)((vlSelf->my_cpu__DOT__pc 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->fullWData(oldp+379,(__Vtemp_h0a9e5d89__0),130);
    __Vtemp_h73a6fc68__0[0U] = (IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                       [(0x1fU & (vlSelf->instr 
                                                  >> 0x14U))]);
    __Vtemp_h73a6fc68__0[1U] = (IData)((vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                        [(0x1fU & (vlSelf->instr 
                                                   >> 0x14U))] 
                                        >> 0x20U));
    __Vtemp_h73a6fc68__0[2U] = (1U | ((IData)(vlSelf->my_cpu__DOT__imm) 
                                      << 1U));
    __Vtemp_h73a6fc68__0[3U] = (((IData)(vlSelf->my_cpu__DOT__imm) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__imm 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h73a6fc68__0[4U] = ((IData)((vlSelf->my_cpu__DOT__imm 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->fullWData(oldp+384,(__Vtemp_h73a6fc68__0),130);
    bufp->fullCData(oldp+389,((0x7fU & vlSelf->instr)),7);
    bufp->fullCData(oldp+390,((7U & (vlSelf->instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+391,((vlSelf->instr >> 0x19U)),7);
    bufp->fullBit(oldp+392,((0x6fU == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+393,((0x63U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+394,((0x33U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+395,((0x37U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+396,((0x17U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+397,((IData)((0x63U == (0x707fU 
                                               & vlSelf->instr)))));
    bufp->fullBit(oldp+398,((IData)((3U == (0x707fU 
                                            & vlSelf->instr)))));
    bufp->fullBit(oldp+399,((IData)((0x1003U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+400,((IData)((0x2003U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+401,((IData)((0x3003U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+402,((IData)((0x4003U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+403,((IData)((0x5003U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+404,((IData)((0x6003U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+405,(((IData)(vlSelf->mem_wen) 
                             & (0U == (0x7000U & vlSelf->instr)))));
    bufp->fullBit(oldp+406,(((IData)(vlSelf->mem_wen) 
                             & (0x1000U == (0x7000U 
                                            & vlSelf->instr)))));
    bufp->fullBit(oldp+407,(((IData)(vlSelf->mem_wen) 
                             & (0x2000U == (0x7000U 
                                            & vlSelf->instr)))));
    bufp->fullBit(oldp+408,(((IData)(vlSelf->mem_wen) 
                             & (0x3000U == (0x7000U 
                                            & vlSelf->instr)))));
    bufp->fullBit(oldp+409,((IData)((0x13U == (0x707fU 
                                               & vlSelf->instr)))));
    bufp->fullBit(oldp+410,((IData)((0x6013U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+411,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h461735d1__0) 
                             & (0x20U == (vlSelf->instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+412,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0) 
                             & (0U == (vlSelf->instr 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+413,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0) 
                             & (0x20U == (vlSelf->instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+414,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hbbe11d3c__0) 
                             & (0x20U == (vlSelf->instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+415,((IData)((0x7033U == (0xfe00707fU 
                                                 & vlSelf->instr)))));
    bufp->fullQData(oldp+416,((((QData)((IData)((- (IData)(
                                                           (vlSelf->instr 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->instr))))),64);
    bufp->fullQData(oldp+418,((((- (QData)((IData)(
                                                   (vlSelf->instr 
                                                    >> 0x1fU)))) 
                                << 0x15U) | (QData)((IData)(
                                                            ((0x100000U 
                                                              & (vlSelf->instr 
                                                                 >> 0xbU)) 
                                                             | ((0xff000U 
                                                                 & vlSelf->instr) 
                                                                | ((0x800U 
                                                                    & (vlSelf->instr 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->instr 
                                                                         >> 0x14U))))))))),64);
    bufp->fullQData(oldp+420,((((- (QData)((IData)(
                                                   (vlSelf->instr 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xffeU 
                                                             & (vlSelf->instr 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                  & (vlSelf->instr 
                                                                     >> 0x14U)))))))),64);
    bufp->fullQData(oldp+422,((((- (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->instr 
                                                       >> 0xcU))))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & vlSelf->instr) 
                                                            | ((0x800U 
                                                                & (vlSelf->instr 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->instr 
                                                                        >> 7U))))))))),64);
    bufp->fullQData(oldp+424,((((- (QData)((IData)(
                                                   (vlSelf->instr 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->instr 
                                                                  >> 7U))))))),64);
    __Vtemp_h066e2f0f__0[3U] = (((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->instr 
                                                                  >> 0xcU))))) 
                                           << 0xdU) 
                                          | (QData)((IData)(
                                                            ((0x1000U 
                                                              & vlSelf->instr) 
                                                             | ((0x800U 
                                                                 & (vlSelf->instr 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->instr 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->instr 
                                                                         >> 7U))))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->instr 
                                                                                >> 0xcU))))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          ((0x1000U 
                                                                            & vlSelf->instr) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->instr 
                                                                                << 4U)) 
                                                                              | ((0x7e0U 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->instr 
                                                                                >> 7U)))))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h90f5a640__0[4U] = (0x10U | (((IData)((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->instr 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xffeU 
                                                                       & (vlSelf->instr 
                                                                          >> 0x14U)) 
                                                                      | (1U 
                                                                         & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                            & (vlSelf->instr 
                                                                               >> 0x14U)))))))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->instr 
                                                                            >> 0xcU))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & vlSelf->instr) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->instr 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->instr 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->instr 
                                                                                >> 7U)))))))) 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp_hf2789951__0[6U] = (0xc0U | (((IData)((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->instr 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->instr 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->instr) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->instr 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->instr 
                                                                                >> 0x14U))))))))) 
                                          << 9U) | 
                                         ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->instr 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xffeU 
                                                                        & (vlSelf->instr 
                                                                           >> 0x14U)) 
                                                                       | (1U 
                                                                          & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                             & (vlSelf->instr 
                                                                                >> 0x14U))))))) 
                                                   >> 0x20U)) 
                                          >> 0x1aU)));
    __Vtemp_hf2789951__0[7U] = (((IData)((((- (QData)((IData)(
                                                              (vlSelf->instr 
                                                               >> 0x1fU)))) 
                                           << 0x15U) 
                                          | (QData)((IData)(
                                                            ((0x100000U 
                                                              & (vlSelf->instr 
                                                                 >> 0xbU)) 
                                                             | ((0xff000U 
                                                                 & vlSelf->instr) 
                                                                | ((0x800U 
                                                                    & (vlSelf->instr 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->instr 
                                                                         >> 0x14U))))))))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSelf->instr 
                                                                             >> 0x1fU)))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x100000U 
                                                                            & (vlSelf->instr 
                                                                               >> 0xbU)) 
                                                                           | ((0xff000U 
                                                                               & vlSelf->instr) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->instr 
                                                                                >> 9U)) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U)))))))) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_ha7af71ad__0[0U] = (IData)((((- (QData)((IData)(
                                                            (vlSelf->instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->instr 
                                                                           >> 7U)))))));
    __Vtemp_ha7af71ad__0[1U] = (IData)(((((- (QData)((IData)(
                                                             (vlSelf->instr 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->instr 
                                                                  >> 7U)))))) 
                                        >> 0x20U));
    __Vtemp_ha7af71ad__0[2U] = (6U | ((IData)((((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->instr 
                                                                       >> 0xcU))))) 
                                                << 0xdU) 
                                               | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & vlSelf->instr) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->instr 
                                                                              >> 7U))))))))) 
                                      << 3U));
    __Vtemp_ha7af71ad__0[3U] = __Vtemp_h066e2f0f__0[3U];
    __Vtemp_ha7af71ad__0[4U] = __Vtemp_h90f5a640__0[4U];
    __Vtemp_ha7af71ad__0[5U] = (((IData)((((- (QData)((IData)(
                                                              (vlSelf->instr 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0xffeU 
                                                              & (vlSelf->instr 
                                                                 >> 0x14U)) 
                                                             | (1U 
                                                                & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                   & (vlSelf->instr 
                                                                      >> 0x14U)))))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSelf->instr 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xffeU 
                                                                            & (vlSelf->instr 
                                                                               >> 0x14U)) 
                                                                           | (1U 
                                                                              & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U))))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_ha7af71ad__0[6U] = __Vtemp_hf2789951__0[6U];
    __Vtemp_ha7af71ad__0[7U] = __Vtemp_hf2789951__0[7U];
    __Vtemp_ha7af71ad__0[8U] = (0x200U | (((IData)(
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->instr 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->instr))))) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (vlSelf->instr 
                                                                            >> 0x1fU)))) 
                                                        << 0x15U) 
                                                       | (QData)((IData)(
                                                                         ((0x100000U 
                                                                           & (vlSelf->instr 
                                                                              >> 0xbU)) 
                                                                          | ((0xff000U 
                                                                              & vlSelf->instr) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->instr 
                                                                                >> 9U)) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_ha7af71ad__0[9U] = (((IData)((((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->instr 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->instr))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->instr 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->instr)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_ha7af71ad__0[0xaU] = ((IData)(((((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->instr 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->instr)))) 
                                           >> 0x20U)) 
                                  >> 0x14U);
    bufp->fullWData(oldp+426,(__Vtemp_ha7af71ad__0),335);
    __Vtemp_h750abc89__0[0U] = (IData)(vlSelf->rdata);
    __Vtemp_h750abc89__0[1U] = (IData)((vlSelf->rdata 
                                        >> 0x20U));
    __Vtemp_h750abc89__0[2U] = (3U | ((IData)((4ULL 
                                               + vlSelf->my_cpu__DOT__pc)) 
                                      << 2U));
    __Vtemp_h750abc89__0[3U] = (((IData)((4ULL + vlSelf->my_cpu__DOT__pc)) 
                                 >> 0x1eU) | ((IData)(
                                                      ((4ULL 
                                                        + vlSelf->my_cpu__DOT__pc) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h750abc89__0[4U] = (8U | (((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                       << 4U) | ((IData)(
                                                         ((4ULL 
                                                           + vlSelf->my_cpu__DOT__pc) 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_h750abc89__0[5U] = (((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__alu_dst 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h750abc89__0[6U] = (0x10U | ((IData)((vlSelf->my_cpu__DOT__alu_dst 
                                                  >> 0x20U)) 
                                         >> 0x1cU));
    __Vtemp_h750abc89__0[7U] = 0U;
    __Vtemp_h750abc89__0[8U] = 0U;
    bufp->fullWData(oldp+437,(__Vtemp_h750abc89__0),264);
    bufp->fullQData(oldp+446,(vlSelf->my_cpu__DOT__b_jump_addr),64);
    bufp->fullIData(oldp+448,(2U),32);
    bufp->fullIData(oldp+449,(1U),32);
    bufp->fullIData(oldp+450,(0x40U),32);
    bufp->fullIData(oldp+451,(0U),32);
    bufp->fullQData(oldp+452,(0ULL),64);
    bufp->fullIData(oldp+454,(0x41U),32);
    bufp->fullIData(oldp+455,(2U),32);
    bufp->fullIData(oldp+456,(0xbU),32);
    bufp->fullIData(oldp+457,(4U),32);
    bufp->fullIData(oldp+458,(0x44U),32);
    bufp->fullIData(oldp+459,(0xbU),32);
    bufp->fullBit(oldp+460,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_arith_type));
    bufp->fullBit(oldp+461,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_jump_type));
    bufp->fullBit(oldp+462,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_load_type));
    bufp->fullBit(oldp+463,(vlSelf->my_cpu__DOT__my_controller__DOT__is_ebreak_op));
    bufp->fullIData(oldp+464,(5U),32);
    bufp->fullIData(oldp+465,(3U),32);
    bufp->fullIData(oldp+466,(0x43U),32);
    bufp->fullIData(oldp+467,(5U),32);
    bufp->fullQData(oldp+468,(0x80000000ULL),64);
    bufp->fullBit(oldp+470,(1U));
    bufp->fullIData(oldp+471,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__i),32);
    bufp->fullIData(oldp+472,(0x42U),32);
    bufp->fullIData(oldp+473,(4U),32);
}
