// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKey__Syms.h"


void VMuxKey___024root__trace_chg_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMuxKey___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_chg_top_0\n"); );
    // Init
    VMuxKey___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKey___024root*>(voidSelf);
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMuxKey___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VMuxKey___024root__trace_chg_sub_0(VMuxKey___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hdbe8b79c__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2dfcd1b__0;
    VlWide<3>/*95:0*/ __Vtemp_h0a42c16f__0;
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
        bufp->chgCData(oldp+7,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+13,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+14,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+15,(vlSelf->my_cpu__DOT__reg_wen));
        bufp->chgBit(oldp+16,(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op));
        bufp->chgBit(oldp+17,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+18,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+19,(((IData)(vlSelf->my_cpu__DOT__reg_wen)
                                  ? (vlSelf->my_cpu__DOT__alu_src1 
                                     + vlSelf->my_cpu__DOT__alu_src2)
                                  : vlSelf->my_cpu__DOT__alu_src1)),32);
        bufp->chgIData(oldp+20,(vlSelf->my_cpu__DOT__alu_src1),32);
        bufp->chgIData(oldp+21,(vlSelf->my_cpu__DOT__alu_src2),32);
        bufp->chgQData(oldp+22,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+24,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+26,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+27,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+28,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+29,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+31,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+33,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+34,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+35,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+36,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),32);
        bufp->chgIData(oldp+37,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),32);
        bufp->chgIData(oldp+38,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),32);
        bufp->chgIData(oldp+39,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),32);
        bufp->chgIData(oldp+40,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),32);
        bufp->chgIData(oldp+41,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),32);
        bufp->chgIData(oldp+42,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),32);
        bufp->chgIData(oldp+43,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),32);
        bufp->chgIData(oldp+44,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),32);
        bufp->chgIData(oldp+45,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),32);
        bufp->chgIData(oldp+46,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),32);
        bufp->chgIData(oldp+47,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),32);
        bufp->chgIData(oldp+48,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),32);
        bufp->chgIData(oldp+49,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),32);
        bufp->chgIData(oldp+50,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),32);
        bufp->chgIData(oldp+51,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),32);
        bufp->chgIData(oldp+52,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),32);
        bufp->chgIData(oldp+53,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),32);
        bufp->chgIData(oldp+54,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),32);
        bufp->chgIData(oldp+55,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),32);
        bufp->chgIData(oldp+56,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),32);
        bufp->chgIData(oldp+57,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),32);
        bufp->chgIData(oldp+58,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),32);
        bufp->chgIData(oldp+59,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),32);
        bufp->chgIData(oldp+60,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),32);
        bufp->chgIData(oldp+61,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),32);
        bufp->chgIData(oldp+62,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),32);
        bufp->chgIData(oldp+63,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),32);
        bufp->chgIData(oldp+64,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),32);
        bufp->chgIData(oldp+65,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),32);
        bufp->chgIData(oldp+66,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),32);
        bufp->chgIData(oldp+67,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+68,(vlSelf->my_cpu__DOT__pc),32);
        bufp->chgIData(oldp+69,(((IData)(4U) + vlSelf->my_cpu__DOT__pc)),32);
        bufp->chgIData(oldp+70,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),32);
        __Vtemp_hdbe8b79c__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))));
        __Vtemp_hdbe8b79c__0[1U] = ((((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr))) 
                                                       >> 0x20U)));
        __Vtemp_hdbe8b79c__0[2U] = (((IData)(4U) + vlSelf->my_cpu__DOT__pc) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+71,(__Vtemp_hdbe8b79c__0),66);
        bufp->chgQData(oldp+74,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+76,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+78,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+79,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+80,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+81,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),32);
    }
    bufp->chgBit(oldp+82,(vlSelf->out));
    bufp->chgBit(oldp+83,(vlSelf->key));
    bufp->chgBit(oldp+84,(vlSelf->default_out));
    bufp->chgCData(oldp+85,(vlSelf->lut),4);
    bufp->chgBit(oldp+86,(vlSelf->memory__02Eclk));
    bufp->chgIData(oldp+87,(vlSelf->memory__02Einstr_raddr),32);
    bufp->chgIData(oldp+88,(vlSelf->memory__02Edata_raddr),32);
    bufp->chgIData(oldp+89,(vlSelf->memory__02Edata_waddr),32);
    bufp->chgIData(oldp+90,(vlSelf->memory__02Ewdata),32);
    bufp->chgBit(oldp+91,(vlSelf->wen));
    bufp->chgIData(oldp+92,(vlSelf->memory__02Einstr),32);
    bufp->chgIData(oldp+93,(vlSelf->memory__02Erdata),32);
    bufp->chgBit(oldp+94,(vlSelf->my_cpu__02Eclk));
    bufp->chgBit(oldp+95,(vlSelf->rst));
    bufp->chgIData(oldp+96,(vlSelf->my_cpu__02Einstr),32);
    bufp->chgIData(oldp+97,(vlSelf->my_cpu__02Erdata),32);
    bufp->chgIData(oldp+98,(vlSelf->my_cpu__02Ewdata),32);
    bufp->chgIData(oldp+99,(vlSelf->my_cpu__02Einstr_raddr),32);
    bufp->chgIData(oldp+100,(vlSelf->my_cpu__02Edata_raddr),32);
    bufp->chgIData(oldp+101,(vlSelf->my_cpu__02Edata_waddr),32);
    bufp->chgBit(oldp+102,(vlSelf->mem_wen));
    bufp->chgIData(oldp+103,(vlSelf->memory__DOT____Vcellout__memory__dout),32);
    bufp->chgCData(oldp+104,((0x1fU & (vlSelf->my_cpu__02Einstr 
                                       >> 7U))),5);
    bufp->chgCData(oldp+105,((0x1fU & (vlSelf->my_cpu__02Einstr 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+106,((0x1fU & (vlSelf->my_cpu__02Einstr 
                                       >> 0x14U))),5);
    bufp->chgIData(oldp+107,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->my_cpu__02Einstr 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+108,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->my_cpu__02Einstr 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+109,((((- (IData)((vlSelf->my_cpu__02Einstr 
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
    bufp->chgWData(oldp+110,(__Vtemp_ha2dfcd1b__0),66);
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
    bufp->chgWData(oldp+113,(__Vtemp_h0a42c16f__0),66);
    bufp->chgCData(oldp+116,((0x7fU & vlSelf->my_cpu__02Einstr)),7);
    bufp->chgCData(oldp+117,((7U & (vlSelf->my_cpu__02Einstr 
                                    >> 0xcU))),3);
    bufp->chgCData(oldp+118,((vlSelf->my_cpu__02Einstr 
                              >> 0x19U)),7);
    bufp->chgBit(oldp+119,((IData)((0x13U == (0x707fU 
                                              & vlSelf->my_cpu__02Einstr)))));
}

void VMuxKey___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root__trace_cleanup\n"); );
    // Init
    VMuxKey___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKey___024root*>(voidSelf);
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
