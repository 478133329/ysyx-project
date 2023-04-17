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
    tracep->declBit(c+223,"clk", false,-1);
    tracep->declBit(c+224,"rst", false,-1);
    tracep->declBus(c+225,"instr", false,-1, 31,0);
    tracep->declQuad(c+226,"rdata", false,-1, 63,0);
    tracep->declQuad(c+228,"wdata", false,-1, 63,0);
    tracep->declQuad(c+230,"instr_raddr", false,-1, 63,0);
    tracep->declQuad(c+232,"data_raddr", false,-1, 63,0);
    tracep->declQuad(c+234,"data_waddr", false,-1, 63,0);
    tracep->declBit(c+236,"mem_wen", false,-1);
    tracep->pushNamePrefix("my_cpu ");
    tracep->declBit(c+223,"clk", false,-1);
    tracep->declBit(c+224,"rst", false,-1);
    tracep->declBus(c+225,"instr", false,-1, 31,0);
    tracep->declQuad(c+226,"rdata", false,-1, 63,0);
    tracep->declQuad(c+228,"wdata", false,-1, 63,0);
    tracep->declQuad(c+230,"instr_raddr", false,-1, 63,0);
    tracep->declQuad(c+232,"data_raddr", false,-1, 63,0);
    tracep->declQuad(c+234,"data_waddr", false,-1, 63,0);
    tracep->declBit(c+236,"mem_wen", false,-1);
    tracep->declQuad(c+217,"pc", false,-1, 63,0);
    tracep->declQuad(c+219,"pc_add4", false,-1, 63,0);
    tracep->declBit(c+237,"reg_wen", false,-1);
    tracep->declBus(c+238,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+239,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+240,"reg_raddr2", false,-1, 4,0);
    tracep->declQuad(c+61,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"reg_input_sel", false,-1, 1,0);
    tracep->declQuad(c+241,"reg_rdata1", false,-1, 63,0);
    tracep->declQuad(c+243,"reg_rdata2", false,-1, 63,0);
    tracep->declBit(c+20,"alu_a_sel", false,-1);
    tracep->declBit(c+245,"alu_b_sel", false,-1);
    tracep->declBit(c+21,"alu_op", false,-1);
    tracep->declQuad(c+63,"alu_src1", false,-1, 63,0);
    tracep->declQuad(c+65,"alu_src2", false,-1, 63,0);
    tracep->declQuad(c+67,"alu_dst", false,-1, 63,0);
    tracep->declQuad(c+22,"imm", false,-1, 63,0);
    tracep->declBit(c+24,"pc_jump", false,-1);
    tracep->declQuad(c+69,"pc_jump_addr", false,-1, 63,0);
    tracep->declBit(c+296,"pc_jump_sel", false,-1);
    tracep->declQuad(c+297,"b_jump_addr", false,-1, 63,0);
    tracep->pushNamePrefix("alu_src1_mux21 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+63,"out", false,-1, 63,0);
    tracep->declBus(c+20,"key", false,-1, 0,0);
    tracep->declArray(c+246,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+302,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+63,"out", false,-1, 63,0);
    tracep->declBus(c+20,"key", false,-1, 0,0);
    tracep->declQuad(c+303,"default_out", false,-1, 63,0);
    tracep->declArray(c+246,"lut", false,-1, 129,0);
    tracep->declBus(c+305,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+71+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+77+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+81,"lut_out", false,-1, 63,0);
    tracep->declBit(c+25,"hit", false,-1);
    tracep->declBus(c+306,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_src2_mux21 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+65,"out", false,-1, 63,0);
    tracep->declBus(c+245,"key", false,-1, 0,0);
    tracep->declArray(c+251,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+302,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+65,"out", false,-1, 63,0);
    tracep->declBus(c+245,"key", false,-1, 0,0);
    tracep->declQuad(c+303,"default_out", false,-1, 63,0);
    tracep->declArray(c+251,"lut", false,-1, 129,0);
    tracep->declBus(c+305,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+83+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+89+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+93,"lut_out", false,-1, 63,0);
    tracep->declBit(c+26,"hit", false,-1);
    tracep->declBus(c+306,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("jump_sel_mux21 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+69,"out", false,-1, 63,0);
    tracep->declBus(c+296,"key", false,-1, 0,0);
    tracep->declArray(c+95,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+302,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+69,"out", false,-1, 63,0);
    tracep->declBus(c+296,"key", false,-1, 0,0);
    tracep->declQuad(c+303,"default_out", false,-1, 63,0);
    tracep->declArray(c+95,"lut", false,-1, 129,0);
    tracep->declBus(c+305,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+100+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+106+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+110,"lut_out", false,-1, 63,0);
    tracep->declBit(c+7,"hit", false,-1);
    tracep->declBus(c+306,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBit(c+21,"op", false,-1);
    tracep->declQuad(c+63,"src1", false,-1, 63,0);
    tracep->declQuad(c+65,"src2", false,-1, 63,0);
    tracep->declQuad(c+67,"dst", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_controller ");
    tracep->declBus(c+225,"instr", false,-1, 31,0);
    tracep->declQuad(c+22,"imm", false,-1, 63,0);
    tracep->declBit(c+237,"reg_wen", false,-1);
    tracep->declBus(c+239,"reg_src1", false,-1, 4,0);
    tracep->declBus(c+240,"reg_src2", false,-1, 4,0);
    tracep->declBus(c+238,"reg_dst", false,-1, 4,0);
    tracep->declBus(c+19,"reg_input_sel", false,-1, 1,0);
    tracep->declBit(c+21,"alu_op", false,-1);
    tracep->declBit(c+20,"alu_a_sel", false,-1);
    tracep->declBit(c+245,"alu_b_sel", false,-1);
    tracep->declBit(c+236,"mem_wen", false,-1);
    tracep->declBit(c+24,"pc_jump", false,-1);
    tracep->declBit(c+296,"pc_jump_sel", false,-1);
    tracep->declBus(c+256,"opcode", false,-1, 6,0);
    tracep->declBus(c+257,"funct3", false,-1, 2,0);
    tracep->declBus(c+258,"funct7", false,-1, 6,0);
    tracep->declBit(c+27,"is_u_type", false,-1);
    tracep->declBit(c+259,"is_j_type", false,-1);
    tracep->declBit(c+28,"is_i_type", false,-1);
    tracep->declBit(c+296,"is_b_type", false,-1);
    tracep->declBit(c+260,"is_s_type", false,-1);
    tracep->declBit(c+245,"is_r_type", false,-1);
    tracep->declBit(c+261,"is_lui_op", false,-1);
    tracep->declBit(c+262,"is_auipc_op", false,-1);
    tracep->declBit(c+259,"is_jal_op", false,-1);
    tracep->declBit(c+29,"is_jalr_op", false,-1);
    tracep->declBit(c+263,"is_addi_op", false,-1);
    tracep->declBit(c+264,"is_sd_op", false,-1);
    tracep->declBit(c+265,"is_add_op", false,-1);
    tracep->declQuad(c+266,"u_type_imm", false,-1, 63,0);
    tracep->declQuad(c+268,"j_type_imm", false,-1, 63,0);
    tracep->declQuad(c+270,"i_type_imm", false,-1, 63,0);
    tracep->declQuad(c+272,"b_type_imm", false,-1, 63,0);
    tracep->declQuad(c+274,"s_type_imm", false,-1, 63,0);
    tracep->declBus(c+30,"imm_type_code", false,-1, 2,0);
    tracep->pushNamePrefix("program_counter_mux21 ");
    tracep->declBus(c+307,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+22,"out", false,-1, 63,0);
    tracep->declBus(c+30,"key", false,-1, 2,0);
    tracep->declArray(c+276,"lut", false,-1, 334,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+307,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+302,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+22,"out", false,-1, 63,0);
    tracep->declBus(c+30,"key", false,-1, 2,0);
    tracep->declQuad(c+303,"default_out", false,-1, 63,0);
    tracep->declArray(c+276,"lut", false,-1, 334,0);
    tracep->declBus(c+309,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+31+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+46+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+56,"lut_out", false,-1, 63,0);
    tracep->declBit(c+58,"hit", false,-1);
    tracep->declBus(c+310,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBit(c+223,"clk", false,-1);
    tracep->declBit(c+224,"rst", false,-1);
    tracep->declBit(c+24,"jump", false,-1);
    tracep->declQuad(c+69,"jump_addr", false,-1, 63,0);
    tracep->declQuad(c+217,"pc", false,-1, 63,0);
    tracep->declQuad(c+219,"pc_add4", false,-1, 63,0);
    tracep->declQuad(c+112,"npc", false,-1, 63,0);
    tracep->pushNamePrefix("program_counter_mux21 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+112,"out", false,-1, 63,0);
    tracep->declBus(c+24,"key", false,-1, 0,0);
    tracep->declArray(c+114,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+299,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+302,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+112,"out", false,-1, 63,0);
    tracep->declBus(c+24,"key", false,-1, 0,0);
    tracep->declQuad(c+303,"default_out", false,-1, 63,0);
    tracep->declArray(c+114,"lut", false,-1, 129,0);
    tracep->declBus(c+305,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+119+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+125+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+129,"lut_out", false,-1, 63,0);
    tracep->declBit(c+59,"hit", false,-1);
    tracep->declBus(c+306,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("program_counter_reg_lo ");
    tracep->declBus(c+301,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+311,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+223,"clk", false,-1);
    tracep->declBit(c+224,"rst", false,-1);
    tracep->declQuad(c+112,"din", false,-1, 63,0);
    tracep->declQuad(c+217,"dout", false,-1, 63,0);
    tracep->declBit(c+313,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_reg_heap ");
    tracep->declBit(c+223,"clk", false,-1);
    tracep->declBit(c+224,"rst", false,-1);
    tracep->declBit(c+237,"wen", false,-1);
    tracep->declBus(c+238,"waddr", false,-1, 4,0);
    tracep->declBus(c+239,"raddr1", false,-1, 4,0);
    tracep->declBus(c+240,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+61,"wdata", false,-1, 63,0);
    tracep->declQuad(c+241,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+243,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+131+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBus(c+314,"i", false,-1, 31,0);
    tracep->pushNamePrefix("reg_heap_reg ");
    tracep->declBus(c+301,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+303,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+223,"clk", false,-1);
    tracep->declBit(c+224,"rst", false,-1);
    tracep->declQuad(c+61,"din", false,-1, 63,0);
    tracep->declQuad(c+221,"dout", false,-1, 63,0);
    tracep->declBit(c+237,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_input_mux41 ");
    tracep->declBus(c+315,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+299,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+61,"out", false,-1, 63,0);
    tracep->declBus(c+19,"key", false,-1, 1,0);
    tracep->declArray(c+287,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+315,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+299,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+302,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+61,"out", false,-1, 63,0);
    tracep->declBus(c+19,"key", false,-1, 1,0);
    tracep->declQuad(c+303,"default_out", false,-1, 63,0);
    tracep->declArray(c+287,"lut", false,-1, 263,0);
    tracep->declBus(c+316,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+195+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+207+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+215,"lut_out", false,-1, 63,0);
    tracep->declBit(c+60,"hit", false,-1);
    tracep->declBus(c+317,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vmy_cpu___024root__trace_init_top(Vmy_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_init_top\n"); );
    // Body
    Vmy_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
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
    bufp->fullBit(oldp+7,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+8,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+9,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+10,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+11,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+12,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+13,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+14,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+15,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+16,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+17,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+18,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+19,(vlSelf->my_cpu__DOT__reg_input_sel),2);
    bufp->fullBit(oldp+20,(vlSelf->my_cpu__DOT__alu_a_sel));
    bufp->fullBit(oldp+21,(vlSelf->my_cpu__DOT__alu_op));
    bufp->fullQData(oldp+22,(vlSelf->my_cpu__DOT__imm),64);
    bufp->fullBit(oldp+24,(vlSelf->my_cpu__DOT__pc_jump));
    bufp->fullBit(oldp+25,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+26,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+27,(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type));
    bufp->fullBit(oldp+28,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type));
    bufp->fullBit(oldp+29,(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op));
    bufp->fullCData(oldp+30,(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code),3);
    bufp->fullWData(oldp+31,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+34,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+37,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+40,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+43,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+46,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+48,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+50,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+52,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+54,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+56,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+58,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+59,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+60,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+61,(vlSelf->my_cpu__DOT__reg_wdata),64);
    bufp->fullQData(oldp+63,(vlSelf->my_cpu__DOT__alu_src1),64);
    bufp->fullQData(oldp+65,(vlSelf->my_cpu__DOT__alu_src2),64);
    bufp->fullQData(oldp+67,(vlSelf->my_cpu__DOT__alu_dst),64);
    bufp->fullQData(oldp+69,(vlSelf->my_cpu__DOT__pc_jump_addr),64);
    bufp->fullWData(oldp+71,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+74,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+77,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+79,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+81,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullWData(oldp+83,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+86,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+89,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+91,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+93,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),64);
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
    bufp->fullWData(oldp+95,(__Vtemp_hb4ef33b0__0),130);
    bufp->fullWData(oldp+100,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+103,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+106,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+108,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+110,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullQData(oldp+112,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),64);
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
    bufp->fullWData(oldp+114,(__Vtemp_h736f97b8__0),130);
    bufp->fullWData(oldp+119,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+122,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+125,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+127,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+129,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
    bufp->fullQData(oldp+131,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),64);
    bufp->fullQData(oldp+133,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),64);
    bufp->fullQData(oldp+135,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),64);
    bufp->fullQData(oldp+137,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),64);
    bufp->fullQData(oldp+139,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),64);
    bufp->fullQData(oldp+141,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),64);
    bufp->fullQData(oldp+143,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),64);
    bufp->fullQData(oldp+145,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),64);
    bufp->fullQData(oldp+147,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),64);
    bufp->fullQData(oldp+149,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),64);
    bufp->fullQData(oldp+151,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),64);
    bufp->fullQData(oldp+153,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),64);
    bufp->fullQData(oldp+155,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),64);
    bufp->fullQData(oldp+157,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),64);
    bufp->fullQData(oldp+159,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),64);
    bufp->fullQData(oldp+161,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),64);
    bufp->fullQData(oldp+163,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),64);
    bufp->fullQData(oldp+165,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),64);
    bufp->fullQData(oldp+167,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),64);
    bufp->fullQData(oldp+169,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),64);
    bufp->fullQData(oldp+171,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),64);
    bufp->fullQData(oldp+173,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),64);
    bufp->fullQData(oldp+175,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),64);
    bufp->fullQData(oldp+177,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),64);
    bufp->fullQData(oldp+179,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),64);
    bufp->fullQData(oldp+181,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),64);
    bufp->fullQData(oldp+183,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),64);
    bufp->fullQData(oldp+185,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),64);
    bufp->fullQData(oldp+187,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),64);
    bufp->fullQData(oldp+189,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),64);
    bufp->fullQData(oldp+191,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),64);
    bufp->fullQData(oldp+193,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),64);
    bufp->fullWData(oldp+195,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+198,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+201,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+204,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+207,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+209,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+211,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+213,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+215,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out),64);
    bufp->fullQData(oldp+217,(vlSelf->my_cpu__DOT__pc),64);
    bufp->fullQData(oldp+219,((4ULL + vlSelf->my_cpu__DOT__pc)),64);
    bufp->fullQData(oldp+221,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),64);
    bufp->fullBit(oldp+223,(vlSelf->clk));
    bufp->fullBit(oldp+224,(vlSelf->rst));
    bufp->fullIData(oldp+225,(vlSelf->instr),32);
    bufp->fullQData(oldp+226,(vlSelf->rdata),64);
    bufp->fullQData(oldp+228,(vlSelf->wdata),64);
    bufp->fullQData(oldp+230,(vlSelf->instr_raddr),64);
    bufp->fullQData(oldp+232,(vlSelf->data_raddr),64);
    bufp->fullQData(oldp+234,(vlSelf->data_waddr),64);
    bufp->fullBit(oldp+236,(vlSelf->mem_wen));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->instr)) 
                                | (IData)(vlSelf->my_cpu__DOT__alu_a_sel)))));
    bufp->fullCData(oldp+238,((0x1fU & (vlSelf->instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+239,((0x1fU & (vlSelf->instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+240,((0x1fU & (vlSelf->instr 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+241,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                              [(0x1fU & (vlSelf->instr 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+243,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                              [(0x1fU & (vlSelf->instr 
                                         >> 0x14U))]),64);
    bufp->fullBit(oldp+245,((0x33U == (0x7fU & vlSelf->instr))));
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
    bufp->fullWData(oldp+246,(__Vtemp_h0a9e5d89__0),130);
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
    bufp->fullWData(oldp+251,(__Vtemp_h73a6fc68__0),130);
    bufp->fullCData(oldp+256,((0x7fU & vlSelf->instr)),7);
    bufp->fullCData(oldp+257,((7U & (vlSelf->instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+258,((vlSelf->instr >> 0x19U)),7);
    bufp->fullBit(oldp+259,((0x6fU == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+260,((0x23U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+261,((0x37U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+262,((0x17U == (0x7fU & vlSelf->instr))));
    bufp->fullBit(oldp+263,((IData)((0x13U == (0x707fU 
                                               & vlSelf->instr)))));
    bufp->fullBit(oldp+264,((IData)((0x3023U == (0x707fU 
                                                 & vlSelf->instr)))));
    bufp->fullBit(oldp+265,((IData)((0x33U == (0xfe00707fU 
                                               & vlSelf->instr)))));
    bufp->fullQData(oldp+266,((((QData)((IData)((- (IData)(
                                                           (vlSelf->instr 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->instr))))),64);
    bufp->fullQData(oldp+268,((((- (QData)((IData)(
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
    bufp->fullQData(oldp+270,((((- (QData)((IData)(
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
    bufp->fullQData(oldp+272,((((- (QData)((IData)(
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
    bufp->fullQData(oldp+274,((((- (QData)((IData)(
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
    bufp->fullWData(oldp+276,(__Vtemp_ha7af71ad__0),335);
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
    bufp->fullWData(oldp+287,(__Vtemp_h750abc89__0),264);
    bufp->fullBit(oldp+296,(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type));
    bufp->fullQData(oldp+297,(vlSelf->my_cpu__DOT__b_jump_addr),64);
    bufp->fullIData(oldp+299,(2U),32);
    bufp->fullIData(oldp+300,(1U),32);
    bufp->fullIData(oldp+301,(0x40U),32);
    bufp->fullIData(oldp+302,(0U),32);
    bufp->fullQData(oldp+303,(0ULL),64);
    bufp->fullIData(oldp+305,(0x41U),32);
    bufp->fullIData(oldp+306,(2U),32);
    bufp->fullIData(oldp+307,(5U),32);
    bufp->fullIData(oldp+308,(3U),32);
    bufp->fullIData(oldp+309,(0x43U),32);
    bufp->fullIData(oldp+310,(5U),32);
    bufp->fullQData(oldp+311,(0x80000000ULL),64);
    bufp->fullBit(oldp+313,(1U));
    bufp->fullIData(oldp+314,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__i),32);
    bufp->fullIData(oldp+315,(4U),32);
    bufp->fullIData(oldp+316,(0x42U),32);
    bufp->fullIData(oldp+317,(4U),32);
}
