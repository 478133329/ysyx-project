// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKey__Syms.h"


VL_ATTR_COLD void VMuxKey___024root__trace_init_sub__TOP__0(VMuxKey___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+83,"out", false,-1, 0,0);
    tracep->declBus(c+84,"key", false,-1, 0,0);
    tracep->declBus(c+85,"default_out", false,-1, 0,0);
    tracep->declBus(c+86,"lut", false,-1, 3,0);
    tracep->declBit(c+87,"memory.clk", false,-1);
    tracep->declBus(c+88,"memory.instr_raddr", false,-1, 31,0);
    tracep->declBus(c+89,"memory.data_raddr", false,-1, 31,0);
    tracep->declBus(c+90,"memory.data_waddr", false,-1, 31,0);
    tracep->declBus(c+91,"memory.wdata", false,-1, 31,0);
    tracep->declBit(c+92,"wen", false,-1);
    tracep->declBus(c+93,"memory.instr", false,-1, 31,0);
    tracep->declBus(c+94,"memory.rdata", false,-1, 31,0);
    tracep->declBit(c+95,"my_cpu.clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+97,"my_cpu.instr", false,-1, 31,0);
    tracep->declBus(c+98,"my_cpu.rdata", false,-1, 31,0);
    tracep->declBus(c+99,"my_cpu.wdata", false,-1, 31,0);
    tracep->declBus(c+100,"my_cpu.instr_raddr", false,-1, 31,0);
    tracep->declBus(c+101,"my_cpu.data_raddr", false,-1, 31,0);
    tracep->declBus(c+102,"my_cpu.data_waddr", false,-1, 31,0);
    tracep->declBit(c+103,"mem_wen", false,-1);
    tracep->pushNamePrefix("MuxKeyWithDefault ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+122,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 0,0);
    tracep->declBus(c+84,"key", false,-1, 0,0);
    tracep->declBus(c+85,"default_out", false,-1, 0,0);
    tracep->declBus(c+86,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+122,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+122,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 0,0);
    tracep->declBus(c+84,"key", false,-1, 0,0);
    tracep->declBus(c+85,"default_out", false,-1, 0,0);
    tracep->declBus(c+86,"lut", false,-1, 3,0);
    tracep->declBus(c+121,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+8+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+12+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+14,"lut_out", false,-1, 0,0);
    tracep->declBit(c+15,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBus(c+88,"instr_raddr", false,-1, 31,0);
    tracep->declBus(c+89,"data_raddr", false,-1, 31,0);
    tracep->declBus(c+90,"data_waddr", false,-1, 31,0);
    tracep->declBus(c+91,"wdata", false,-1, 31,0);
    tracep->declBit(c+92,"wen", false,-1);
    tracep->declBus(c+93,"instr", false,-1, 31,0);
    tracep->declBus(c+94,"rdata", false,-1, 31,0);
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+127,"rst", false,-1);
    tracep->declBus(c+91,"din", false,-1, 31,0);
    tracep->declBus(c+104,"dout", false,-1, 31,0);
    tracep->declBit(c+92,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_cpu ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+97,"instr", false,-1, 31,0);
    tracep->declBus(c+98,"rdata", false,-1, 31,0);
    tracep->declBus(c+99,"wdata", false,-1, 31,0);
    tracep->declBus(c+100,"instr_raddr", false,-1, 31,0);
    tracep->declBus(c+101,"data_raddr", false,-1, 31,0);
    tracep->declBus(c+102,"data_waddr", false,-1, 31,0);
    tracep->declBit(c+103,"mem_wen", false,-1);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBit(c+16,"reg_wen", false,-1);
    tracep->declBus(c+105,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+106,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+107,"reg_raddr2", false,-1, 4,0);
    tracep->declBus(c+20,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+108,"reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+109,"reg_rdata2", false,-1, 31,0);
    tracep->declBit(c+16,"alu_a_sel", false,-1);
    tracep->declBit(c+17,"alu_b_sel", false,-1);
    tracep->declBit(c+16,"alu_op", false,-1);
    tracep->declBus(c+21,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+22,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+110,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("alu_src1_mux21 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 31,0);
    tracep->declBus(c+16,"key", false,-1, 0,0);
    tracep->declArray(c+111,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 31,0);
    tracep->declBus(c+16,"key", false,-1, 0,0);
    tracep->declBus(c+126,"default_out", false,-1, 31,0);
    tracep->declArray(c+111,"lut", false,-1, 65,0);
    tracep->declBus(c+129,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+23+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+27+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+29,"lut_out", false,-1, 31,0);
    tracep->declBit(c+18,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_src2_mux21 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+22,"out", false,-1, 31,0);
    tracep->declBus(c+17,"key", false,-1, 0,0);
    tracep->declArray(c+114,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+22,"out", false,-1, 31,0);
    tracep->declBus(c+17,"key", false,-1, 0,0);
    tracep->declBus(c+126,"default_out", false,-1, 31,0);
    tracep->declArray(c+114,"lut", false,-1, 65,0);
    tracep->declBus(c+129,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+30+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+34+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+36,"lut_out", false,-1, 31,0);
    tracep->declBit(c+19,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBit(c+16,"op", false,-1);
    tracep->declBus(c+21,"src1", false,-1, 31,0);
    tracep->declBus(c+22,"src2", false,-1, 31,0);
    tracep->declBus(c+20,"dst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_controller ");
    tracep->declBus(c+97,"instr", false,-1, 31,0);
    tracep->declBus(c+110,"imm", false,-1, 31,0);
    tracep->declBit(c+16,"reg_wen", false,-1);
    tracep->declBus(c+106,"reg_src1", false,-1, 4,0);
    tracep->declBus(c+107,"reg_src2", false,-1, 4,0);
    tracep->declBus(c+105,"reg_dst", false,-1, 4,0);
    tracep->declBit(c+16,"alu_op", false,-1);
    tracep->declBit(c+16,"alu_a_sel", false,-1);
    tracep->declBit(c+17,"alu_b_sel", false,-1);
    tracep->declBit(c+103,"mem_wen", false,-1);
    tracep->declBit(c+127,"pc_jump", false,-1);
    tracep->declBus(c+117,"opcode", false,-1, 6,0);
    tracep->declBus(c+118,"funct3", false,-1, 2,0);
    tracep->declBus(c+119,"funct7", false,-1, 6,0);
    tracep->declBit(c+17,"is_add_op", false,-1);
    tracep->declBit(c+120,"is_addi_op", false,-1);
    tracep->declBit(c+17,"is_r_type", false,-1);
    tracep->declBit(c+120,"is_i_type", false,-1);
    tracep->declBit(c+130,"is_s_type", false,-1);
    tracep->declBit(c+131,"is_b_type", false,-1);
    tracep->declBit(c+132,"is_u_type", false,-1);
    tracep->declBit(c+133,"is_j_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+134,"jump", false,-1);
    tracep->declBus(c+135,"jump_addr", false,-1, 31,0);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"pc_add4", false,-1, 31,0);
    tracep->declBus(c+71,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("program_counter_mux21 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->declBus(c+134,"key", false,-1, 0,0);
    tracep->declArray(c+72,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+122,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->declBus(c+134,"key", false,-1, 0,0);
    tracep->declBus(c+126,"default_out", false,-1, 31,0);
    tracep->declArray(c+72,"lut", false,-1, 65,0);
    tracep->declBus(c+129,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+75+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+79+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+81,"lut_out", false,-1, 31,0);
    tracep->declBit(c+7,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("program_counter_reg ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+136,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+137,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_reg_heap ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+16,"wen", false,-1);
    tracep->declBus(c+105,"waddr", false,-1, 4,0);
    tracep->declBus(c+106,"raddr1", false,-1, 4,0);
    tracep->declBus(c+107,"raddr2", false,-1, 4,0);
    tracep->declBus(c+20,"wdata", false,-1, 31,0);
    tracep->declBus(c+108,"rdata1", false,-1, 31,0);
    tracep->declBus(c+109,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+37+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->declBus(c+138,"i", false,-1, 31,0);
    tracep->pushNamePrefix("reg_heap_reg ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+16,"wen", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VMuxKey___024root__trace_init_top(VMuxKey___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_init_top\n"); );
    // Body
    VMuxKey___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMuxKey___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMuxKey___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMuxKey___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMuxKey___024root__trace_register(VMuxKey___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMuxKey___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMuxKey___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMuxKey___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMuxKey___024root__trace_full_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMuxKey___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_full_top_0\n"); );
    // Init
    VMuxKey___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKey___024root*>(voidSelf);
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMuxKey___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMuxKey___024root__trace_full_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hdbe8b79c__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2dfcd1b__0;
    VlWide<3>/*95:0*/ __Vtemp_h0a42c16f__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+13,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+14,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+15,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+16,(vlSelf->my_cpu__DOT__reg_wen));
    bufp->fullBit(oldp+17,(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op));
    bufp->fullBit(oldp+18,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+19,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+20,(((IData)(vlSelf->my_cpu__DOT__reg_wen)
                               ? (vlSelf->my_cpu__DOT__alu_src1 
                                  + vlSelf->my_cpu__DOT__alu_src2)
                               : vlSelf->my_cpu__DOT__alu_src1)),32);
    bufp->fullIData(oldp+21,(vlSelf->my_cpu__DOT__alu_src1),32);
    bufp->fullIData(oldp+22,(vlSelf->my_cpu__DOT__alu_src2),32);
    bufp->fullQData(oldp+23,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+25,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+27,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+30,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+32,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+34,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+35,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+36,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+37,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),32);
    bufp->fullIData(oldp+38,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),32);
    bufp->fullIData(oldp+39,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),32);
    bufp->fullIData(oldp+40,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),32);
    bufp->fullIData(oldp+41,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),32);
    bufp->fullIData(oldp+42,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),32);
    bufp->fullIData(oldp+43,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),32);
    bufp->fullIData(oldp+44,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),32);
    bufp->fullIData(oldp+45,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),32);
    bufp->fullIData(oldp+46,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),32);
    bufp->fullIData(oldp+47,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),32);
    bufp->fullIData(oldp+48,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),32);
    bufp->fullIData(oldp+49,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),32);
    bufp->fullIData(oldp+50,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),32);
    bufp->fullIData(oldp+51,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),32);
    bufp->fullIData(oldp+52,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),32);
    bufp->fullIData(oldp+53,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),32);
    bufp->fullIData(oldp+54,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),32);
    bufp->fullIData(oldp+55,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),32);
    bufp->fullIData(oldp+56,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),32);
    bufp->fullIData(oldp+57,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),32);
    bufp->fullIData(oldp+58,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),32);
    bufp->fullIData(oldp+59,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),32);
    bufp->fullIData(oldp+60,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),32);
    bufp->fullIData(oldp+61,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),32);
    bufp->fullIData(oldp+62,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),32);
    bufp->fullIData(oldp+63,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),32);
    bufp->fullIData(oldp+64,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),32);
    bufp->fullIData(oldp+65,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),32);
    bufp->fullIData(oldp+66,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),32);
    bufp->fullIData(oldp+67,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),32);
    bufp->fullIData(oldp+68,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),32);
    bufp->fullIData(oldp+69,(vlSelf->my_cpu__DOT__pc),32);
    bufp->fullIData(oldp+70,(((IData)(4U) + vlSelf->my_cpu__DOT__pc)),32);
    bufp->fullIData(oldp+71,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),32);
    __Vtemp_hdbe8b79c__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))));
    __Vtemp_hdbe8b79c__0[1U] = ((((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))) 
                                                   >> 0x20U)));
    __Vtemp_hdbe8b79c__0[2U] = (((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                >> 0x1fU);
    bufp->fullWData(oldp+72,(__Vtemp_hdbe8b79c__0),66);
    bufp->fullQData(oldp+75,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+77,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+79,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+80,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+81,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+82,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),32);
    bufp->fullBit(oldp+83,(vlSelf->out));
    bufp->fullBit(oldp+84,(vlSelf->key));
    bufp->fullBit(oldp+85,(vlSelf->default_out));
    bufp->fullCData(oldp+86,(vlSelf->lut),4);
    bufp->fullBit(oldp+87,(vlSelf->memory__02Eclk));
    bufp->fullIData(oldp+88,(vlSelf->memory__02Einstr_raddr),32);
    bufp->fullIData(oldp+89,(vlSelf->memory__02Edata_raddr),32);
    bufp->fullIData(oldp+90,(vlSelf->memory__02Edata_waddr),32);
    bufp->fullIData(oldp+91,(vlSelf->memory__02Ewdata),32);
    bufp->fullBit(oldp+92,(vlSelf->wen));
    bufp->fullIData(oldp+93,(vlSelf->memory__02Einstr),32);
    bufp->fullIData(oldp+94,(vlSelf->memory__02Erdata),32);
    bufp->fullBit(oldp+95,(vlSelf->my_cpu__02Eclk));
    bufp->fullBit(oldp+96,(vlSelf->rst));
    bufp->fullIData(oldp+97,(vlSelf->my_cpu__02Einstr),32);
    bufp->fullIData(oldp+98,(vlSelf->my_cpu__02Erdata),32);
    bufp->fullIData(oldp+99,(vlSelf->my_cpu__02Ewdata),32);
    bufp->fullIData(oldp+100,(vlSelf->my_cpu__02Einstr_raddr),32);
    bufp->fullIData(oldp+101,(vlSelf->my_cpu__02Edata_raddr),32);
    bufp->fullIData(oldp+102,(vlSelf->my_cpu__02Edata_waddr),32);
    bufp->fullBit(oldp+103,(vlSelf->mem_wen));
    bufp->fullIData(oldp+104,(vlSelf->memory__DOT____Vcellout__memory__dout),32);
    bufp->fullCData(oldp+105,((0x1fU & (vlSelf->my_cpu__02Einstr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+106,((0x1fU & (vlSelf->my_cpu__02Einstr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+107,((0x1fU & (vlSelf->my_cpu__02Einstr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+108,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                              [(0x1fU & (vlSelf->my_cpu__02Einstr 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+109,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                              [(0x1fU & (vlSelf->my_cpu__02Einstr 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->my_cpu__02Einstr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->my_cpu__02Einstr 
                                            >> 0x14U))),32);
    __Vtemp_ha2dfcd1b__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->my_cpu__02Einstr 
                                                              >> 0xfU))]))));
    __Vtemp_ha2dfcd1b__0[1U] = ((vlSelf->my_cpu__DOT__pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                                      [
                                                                      (0x1fU 
                                                                       & (vlSelf->my_cpu__02Einstr 
                                                                          >> 0xfU))]))) 
                                                   >> 0x20U)));
    __Vtemp_ha2dfcd1b__0[2U] = (vlSelf->my_cpu__DOT__pc 
                                >> 0x1fU);
    bufp->fullWData(oldp+111,(__Vtemp_ha2dfcd1b__0),66);
    __Vtemp_h0a42c16f__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                          [
                                                          (0x1fU 
                                                           & (vlSelf->my_cpu__02Einstr 
                                                              >> 0x14U))]))));
    __Vtemp_h0a42c16f__0[1U] = ((0xfffffffeU & (((- (IData)(
                                                            (vlSelf->my_cpu__02Einstr 
                                                             >> 0x1fU))) 
                                                 << 0xdU) 
                                                | (0x1ffeU 
                                                   & (vlSelf->my_cpu__02Einstr 
                                                      >> 0x13U)))) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(
                                                              vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                                              [
                                                              (0x1fU 
                                                               & (vlSelf->my_cpu__02Einstr 
                                                                  >> 0x14U))]))) 
                                           >> 0x20U)));
    __Vtemp_h0a42c16f__0[2U] = (1U & ((- (IData)((vlSelf->my_cpu__02Einstr 
                                                  >> 0x1fU))) 
                                      >> 0x13U));
    bufp->fullWData(oldp+114,(__Vtemp_h0a42c16f__0),66);
    bufp->fullCData(oldp+117,((0x7fU & vlSelf->my_cpu__02Einstr)),7);
    bufp->fullCData(oldp+118,((7U & (vlSelf->my_cpu__02Einstr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+119,((vlSelf->my_cpu__02Einstr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+120,((IData)((0x13U == (0x707fU 
                                               & vlSelf->my_cpu__02Einstr)))));
    bufp->fullIData(oldp+121,(2U),32);
    bufp->fullIData(oldp+122,(1U),32);
    bufp->fullIData(oldp+123,(2U),32);
    bufp->fullIData(oldp+124,(vlSelf->memory__DOT__i),32);
    bufp->fullIData(oldp+125,(0x20U),32);
    bufp->fullIData(oldp+126,(0U),32);
    bufp->fullBit(oldp+127,(0U));
    bufp->fullIData(oldp+128,(0U),32);
    bufp->fullIData(oldp+129,(0x21U),32);
    bufp->fullBit(oldp+130,(vlSelf->my_cpu__DOT__my_controller__DOT__is_s_type));
    bufp->fullBit(oldp+131,(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type));
    bufp->fullBit(oldp+132,(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type));
    bufp->fullBit(oldp+133,(vlSelf->my_cpu__DOT__my_controller__DOT__is_j_type));
    bufp->fullBit(oldp+134,(vlSelf->my_cpu__DOT__my_pc__DOT__jump));
    bufp->fullIData(oldp+135,(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr),32);
    bufp->fullIData(oldp+136,(0x80000000U),32);
    bufp->fullBit(oldp+137,(1U));
    bufp->fullIData(oldp+138,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__i),32);
}
