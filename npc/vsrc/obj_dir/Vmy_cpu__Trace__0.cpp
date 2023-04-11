// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmy_cpu__Syms.h"


void Vmy_cpu___024root__trace_chg_sub_0(Vmy_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmy_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vmy_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmy_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmy_cpu___024root__trace_chg_sub_0(Vmy_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hdbe8b79c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6b43ee5d__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa387cfa__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+6,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+7,(vlSelf->my_cpu__DOT__reg_wen));
        bufp->chgBit(oldp+8,(vlSelf->my_cpu__DOT__alu_b_sel));
        bufp->chgBit(oldp+9,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+10,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+11,(((IData)(vlSelf->my_cpu__DOT__reg_wen)
                                  ? (vlSelf->my_cpu__DOT__alu_src1 
                                     + vlSelf->my_cpu__DOT__alu_src2)
                                  : vlSelf->my_cpu__DOT__alu_src1)),32);
        bufp->chgIData(oldp+12,(vlSelf->my_cpu__DOT__alu_src1),32);
        bufp->chgIData(oldp+13,(vlSelf->my_cpu__DOT__alu_src2),32);
        bufp->chgQData(oldp+14,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+16,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+18,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+21,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+23,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+25,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+26,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+27,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+28,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),32);
        bufp->chgIData(oldp+32,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),32);
        bufp->chgIData(oldp+33,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),32);
        bufp->chgIData(oldp+34,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),32);
        bufp->chgIData(oldp+35,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),32);
        bufp->chgIData(oldp+36,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),32);
        bufp->chgIData(oldp+37,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),32);
        bufp->chgIData(oldp+38,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),32);
        bufp->chgIData(oldp+39,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),32);
        bufp->chgIData(oldp+40,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),32);
        bufp->chgIData(oldp+41,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),32);
        bufp->chgIData(oldp+42,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),32);
        bufp->chgIData(oldp+43,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),32);
        bufp->chgIData(oldp+44,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),32);
        bufp->chgIData(oldp+45,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),32);
        bufp->chgIData(oldp+46,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),32);
        bufp->chgIData(oldp+47,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),32);
        bufp->chgIData(oldp+48,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),32);
        bufp->chgIData(oldp+49,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),32);
        bufp->chgIData(oldp+50,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),32);
        bufp->chgIData(oldp+51,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),32);
        bufp->chgIData(oldp+52,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),32);
        bufp->chgIData(oldp+53,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),32);
        bufp->chgIData(oldp+54,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),32);
        bufp->chgIData(oldp+55,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),32);
        bufp->chgIData(oldp+56,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),32);
        bufp->chgIData(oldp+57,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),32);
        bufp->chgIData(oldp+58,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),32);
        bufp->chgIData(oldp+59,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+60,(vlSelf->my_cpu__DOT__pc),32);
        bufp->chgIData(oldp+61,(((IData)(4U) + vlSelf->my_cpu__DOT__pc)),32);
        bufp->chgIData(oldp+62,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),32);
        __Vtemp_hdbe8b79c__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))));
        __Vtemp_hdbe8b79c__0[1U] = ((((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))) 
                                                       >> 0x20U)));
        __Vtemp_hdbe8b79c__0[2U] = (((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+63,(__Vtemp_hdbe8b79c__0),66);
        bufp->chgQData(oldp+66,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+68,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+70,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+71,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+72,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+73,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),32);
    }
    bufp->chgBit(oldp+74,(vlSelf->clk));
    bufp->chgBit(oldp+75,(vlSelf->rst));
    bufp->chgIData(oldp+76,(vlSelf->instr),32);
    bufp->chgIData(oldp+77,(vlSelf->rdata),32);
    bufp->chgIData(oldp+78,(vlSelf->wdata),32);
    bufp->chgIData(oldp+79,(vlSelf->instr_raddr),32);
    bufp->chgIData(oldp+80,(vlSelf->data_raddr),32);
    bufp->chgIData(oldp+81,(vlSelf->data_waddr),32);
    bufp->chgBit(oldp+82,(vlSelf->mem_wen));
    bufp->chgCData(oldp+83,((0x1fU & (vlSelf->instr 
                                      >> 7U))),5);
    bufp->chgCData(oldp+84,((0x1fU & (vlSelf->instr 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+85,((0x1fU & (vlSelf->instr 
                                      >> 0x14U))),5);
    bufp->chgIData(oldp+86,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                            [(0x1fU & (vlSelf->instr 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+87,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                            [(0x1fU & (vlSelf->instr 
                                       >> 0x14U))]),32);
    bufp->chgIData(oldp+88,((((- (IData)((vlSelf->instr 
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
    bufp->chgWData(oldp+89,(__Vtemp_h6b43ee5d__0),66);
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
    bufp->chgWData(oldp+92,(__Vtemp_hfa387cfa__0),66);
    bufp->chgCData(oldp+95,((0x7fU & vlSelf->instr)),7);
    bufp->chgCData(oldp+96,((7U & (vlSelf->instr >> 0xcU))),3);
    bufp->chgCData(oldp+97,((vlSelf->instr >> 0x19U)),7);
    bufp->chgBit(oldp+98,((IData)((0x13U == (0x707fU 
                                             & vlSelf->instr)))));
}

void Vmy_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root__trace_cleanup\n"); );
    // Init
    Vmy_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmy_cpu___024root*>(voidSelf);
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
