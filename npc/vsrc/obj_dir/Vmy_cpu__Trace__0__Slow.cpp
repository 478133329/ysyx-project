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
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+77,"instr", false,-1, 31,0);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBus(c+79,"wdata", false,-1, 31,0);
    tracep->declBus(c+80,"instr_raddr", false,-1, 31,0);
    tracep->declBus(c+81,"data_raddr", false,-1, 31,0);
    tracep->declBus(c+82,"data_waddr", false,-1, 31,0);
    tracep->declBit(c+83,"mem_wen", false,-1);
    tracep->pushNamePrefix("my_cpu ");
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+77,"instr", false,-1, 31,0);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBus(c+79,"wdata", false,-1, 31,0);
    tracep->declBus(c+80,"instr_raddr", false,-1, 31,0);
    tracep->declBus(c+81,"data_raddr", false,-1, 31,0);
    tracep->declBus(c+82,"data_waddr", false,-1, 31,0);
    tracep->declBit(c+83,"mem_wen", false,-1);
    tracep->declBus(c+61,"pc", false,-1, 31,0);
    tracep->declBit(c+8,"reg_wen", false,-1);
    tracep->declBus(c+84,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+85,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+86,"reg_raddr2", false,-1, 4,0);
    tracep->declBus(c+12,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+88,"reg_rdata2", false,-1, 31,0);
    tracep->declBit(c+8,"alu_a_sel", false,-1);
    tracep->declBit(c+9,"alu_b_sel", false,-1);
    tracep->declBit(c+8,"alu_op", false,-1);
    tracep->declBus(c+13,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+14,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+89,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("alu_src1_mux21 ");
    tracep->declBus(c+100,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+101,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+13,"out", false,-1, 31,0);
    tracep->declBus(c+8,"key", false,-1, 0,0);
    tracep->declArray(c+90,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+100,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+101,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+13,"out", false,-1, 31,0);
    tracep->declBus(c+8,"key", false,-1, 0,0);
    tracep->declBus(c+104,"default_out", false,-1, 31,0);
    tracep->declArray(c+90,"lut", false,-1, 65,0);
    tracep->declBus(c+105,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+15+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+21,"lut_out", false,-1, 31,0);
    tracep->declBit(c+10,"hit", false,-1);
    tracep->declBus(c+106,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_src2_mux21 ");
    tracep->declBus(c+100,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+101,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->declBus(c+9,"key", false,-1, 0,0);
    tracep->declArray(c+93,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+100,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+101,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->declBus(c+9,"key", false,-1, 0,0);
    tracep->declBus(c+104,"default_out", false,-1, 31,0);
    tracep->declArray(c+93,"lut", false,-1, 65,0);
    tracep->declBus(c+105,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+22+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+26+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+28,"lut_out", false,-1, 31,0);
    tracep->declBit(c+11,"hit", false,-1);
    tracep->declBus(c+106,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBit(c+8,"op", false,-1);
    tracep->declBus(c+13,"src1", false,-1, 31,0);
    tracep->declBus(c+14,"src2", false,-1, 31,0);
    tracep->declBus(c+12,"dst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_controller ");
    tracep->declBus(c+77,"instr", false,-1, 31,0);
    tracep->declBus(c+89,"imm", false,-1, 31,0);
    tracep->declBit(c+8,"reg_wen", false,-1);
    tracep->declBus(c+85,"reg_src1", false,-1, 4,0);
    tracep->declBus(c+86,"reg_src2", false,-1, 4,0);
    tracep->declBus(c+84,"reg_dst", false,-1, 4,0);
    tracep->declBit(c+8,"alu_op", false,-1);
    tracep->declBit(c+8,"alu_a_sel", false,-1);
    tracep->declBit(c+9,"alu_b_sel", false,-1);
    tracep->declBit(c+83,"mem_wen", false,-1);
    tracep->declBit(c+107,"pc_jump", false,-1);
    tracep->declBus(c+96,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"funct3", false,-1, 2,0);
    tracep->declBus(c+98,"funct7", false,-1, 6,0);
    tracep->declBit(c+9,"is_add_op", false,-1);
    tracep->declBit(c+99,"is_addi_op", false,-1);
    tracep->declBit(c+9,"is_r_type", false,-1);
    tracep->declBit(c+99,"is_i_type", false,-1);
    tracep->declBit(c+108,"is_s_type", false,-1);
    tracep->declBit(c+109,"is_b_type", false,-1);
    tracep->declBit(c+110,"is_u_type", false,-1);
    tracep->declBit(c+111,"is_j_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBit(c+112,"jump", false,-1);
    tracep->declBus(c+113,"jump_addr", false,-1, 31,0);
    tracep->declBus(c+61,"pc", false,-1, 31,0);
    tracep->declBus(c+62,"pc_add4", false,-1, 31,0);
    tracep->declBus(c+63,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("program_counter_mux21 ");
    tracep->declBus(c+100,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+101,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->declBus(c+112,"key", false,-1, 0,0);
    tracep->declArray(c+64,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+100,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+101,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->declBus(c+112,"key", false,-1, 0,0);
    tracep->declBus(c+104,"default_out", false,-1, 31,0);
    tracep->declArray(c+64,"lut", false,-1, 65,0);
    tracep->declBus(c+105,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+67+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+71+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+73,"lut_out", false,-1, 31,0);
    tracep->declBit(c+7,"hit", false,-1);
    tracep->declBus(c+106,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("program_counter_reg ");
    tracep->declBus(c+102,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 31,0);
    tracep->declBus(c+61,"dout", false,-1, 31,0);
    tracep->declBit(c+115,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_reg_heap ");
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBit(c+8,"wen", false,-1);
    tracep->declBus(c+84,"waddr", false,-1, 4,0);
    tracep->declBus(c+85,"raddr1", false,-1, 4,0);
    tracep->declBus(c+86,"raddr2", false,-1, 4,0);
    tracep->declBus(c+12,"wdata", false,-1, 31,0);
    tracep->declBus(c+87,"rdata1", false,-1, 31,0);
    tracep->declBus(c+88,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+29+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->declBus(c+116,"i", false,-1, 31,0);
    tracep->pushNamePrefix("reg_heap_reg ");
    tracep->declBus(c+102,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+8,"wen", false,-1);
    tracep->popNamePrefix(3);
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
    VlWide<3>/*95:0*/ __Vtemp_hdbe8b79c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6b43ee5d__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa387cfa__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+8,(vlSelf->my_cpu__DOT__reg_wen));
    bufp->fullBit(oldp+9,(vlSelf->my_cpu__DOT__alu_b_sel));
    bufp->fullBit(oldp+10,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+11,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+12,(((IData)(vlSelf->my_cpu__DOT__reg_wen)
                               ? (vlSelf->my_cpu__DOT__alu_src1 
                                  + vlSelf->my_cpu__DOT__alu_src2)
                               : vlSelf->my_cpu__DOT__alu_src1)),32);
    bufp->fullIData(oldp+13,(vlSelf->my_cpu__DOT__alu_src1),32);
    bufp->fullIData(oldp+14,(vlSelf->my_cpu__DOT__alu_src2),32);
    bufp->fullQData(oldp+15,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+17,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+19,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+22,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+24,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+26,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+27,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+28,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+29,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),32);
    bufp->fullIData(oldp+33,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),32);
    bufp->fullIData(oldp+34,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),32);
    bufp->fullIData(oldp+35,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),32);
    bufp->fullIData(oldp+36,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),32);
    bufp->fullIData(oldp+37,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),32);
    bufp->fullIData(oldp+38,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),32);
    bufp->fullIData(oldp+39,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),32);
    bufp->fullIData(oldp+40,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),32);
    bufp->fullIData(oldp+41,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),32);
    bufp->fullIData(oldp+42,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),32);
    bufp->fullIData(oldp+43,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),32);
    bufp->fullIData(oldp+44,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),32);
    bufp->fullIData(oldp+45,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),32);
    bufp->fullIData(oldp+46,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),32);
    bufp->fullIData(oldp+47,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),32);
    bufp->fullIData(oldp+48,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),32);
    bufp->fullIData(oldp+49,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),32);
    bufp->fullIData(oldp+50,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),32);
    bufp->fullIData(oldp+51,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),32);
    bufp->fullIData(oldp+52,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),32);
    bufp->fullIData(oldp+53,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),32);
    bufp->fullIData(oldp+54,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),32);
    bufp->fullIData(oldp+55,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),32);
    bufp->fullIData(oldp+56,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),32);
    bufp->fullIData(oldp+57,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),32);
    bufp->fullIData(oldp+58,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),32);
    bufp->fullIData(oldp+59,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),32);
    bufp->fullIData(oldp+60,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),32);
    bufp->fullIData(oldp+61,(vlSelf->my_cpu__DOT__pc),32);
    bufp->fullIData(oldp+62,(((IData)(4U) + vlSelf->my_cpu__DOT__pc)),32);
    bufp->fullIData(oldp+63,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),32);
    __Vtemp_hdbe8b79c__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))));
    __Vtemp_hdbe8b79c__0[1U] = ((((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))) 
                                                   >> 0x20U)));
    __Vtemp_hdbe8b79c__0[2U] = (((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                >> 0x1fU);
    bufp->fullWData(oldp+64,(__Vtemp_hdbe8b79c__0),66);
    bufp->fullQData(oldp+67,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+69,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+71,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+72,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+73,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+74,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),32);
    bufp->fullBit(oldp+75,(vlSelf->clk));
    bufp->fullBit(oldp+76,(vlSelf->rst));
    bufp->fullIData(oldp+77,(vlSelf->instr),32);
    bufp->fullIData(oldp+78,(vlSelf->rdata),32);
    bufp->fullIData(oldp+79,(vlSelf->wdata),32);
    bufp->fullIData(oldp+80,(vlSelf->instr_raddr),32);
    bufp->fullIData(oldp+81,(vlSelf->data_raddr),32);
    bufp->fullIData(oldp+82,(vlSelf->data_waddr),32);
    bufp->fullBit(oldp+83,(vlSelf->mem_wen));
    bufp->fullCData(oldp+84,((0x1fU & (vlSelf->instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+85,((0x1fU & (vlSelf->instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->instr 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+87,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->instr 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+88,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+89,((((- (IData)((vlSelf->instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->instr 
                                           >> 0x14U))),32);
    __Vtemp_h6b43ee5d__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->instr 
                                                              >> 0xfU))]))));
    __Vtemp_h6b43ee5d__0[1U] = ((vlSelf->my_cpu__DOT__pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                                      [
                                                                      (0x1fU 
                                                                       & (vlSelf->instr 
                                                                          >> 0xfU))]))) 
                                                   >> 0x20U)));
    __Vtemp_h6b43ee5d__0[2U] = (vlSelf->my_cpu__DOT__pc 
                                >> 0x1fU);
    bufp->fullWData(oldp+90,(__Vtemp_h6b43ee5d__0),66);
    __Vtemp_hfa387cfa__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->instr 
                                                              >> 0x14U))]))));
    __Vtemp_hfa387cfa__0[1U] = ((0xfffffffeU & (((- (IData)(
                                                            (vlSelf->instr 
                                                             >> 0x1fU))) 
                                                 << 0xdU) 
                                                | (0x1ffeU 
                                                   & (vlSelf->instr 
                                                      >> 0x13U)))) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(
                                                              vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                              [
                                                              (0x1fU 
                                                               & (vlSelf->instr 
                                                                  >> 0x14U))]))) 
                                           >> 0x20U)));
    __Vtemp_hfa387cfa__0[2U] = (1U & ((- (IData)((vlSelf->instr 
                                                  >> 0x1fU))) 
                                      >> 0x13U));
    bufp->fullWData(oldp+93,(__Vtemp_hfa387cfa__0),66);
    bufp->fullCData(oldp+96,((0x7fU & vlSelf->instr)),7);
    bufp->fullCData(oldp+97,((7U & (vlSelf->instr >> 0xcU))),3);
    bufp->fullCData(oldp+98,((vlSelf->instr >> 0x19U)),7);
    bufp->fullBit(oldp+99,((IData)((0x13U == (0x707fU 
                                              & vlSelf->instr)))));
    bufp->fullIData(oldp+100,(2U),32);
    bufp->fullIData(oldp+101,(1U),32);
    bufp->fullIData(oldp+102,(0x20U),32);
    bufp->fullIData(oldp+103,(0U),32);
    bufp->fullIData(oldp+104,(0U),32);
    bufp->fullIData(oldp+105,(0x21U),32);
    bufp->fullIData(oldp+106,(2U),32);
    bufp->fullBit(oldp+107,(0U));
    bufp->fullBit(oldp+108,(vlSelf->my_cpu__DOT__my_controller__DOT__is_s_type));
    bufp->fullBit(oldp+109,(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type));
    bufp->fullBit(oldp+110,(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type));
    bufp->fullBit(oldp+111,(vlSelf->my_cpu__DOT__my_controller__DOT__is_j_type));
    bufp->fullBit(oldp+112,(vlSelf->my_cpu__DOT__my_pc__DOT__jump));
    bufp->fullIData(oldp+113,(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr),32);
    bufp->fullIData(oldp+114,(0x80000000U),32);
    bufp->fullBit(oldp+115,(1U));
    bufp->fullIData(oldp+116,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__i),32);
}
