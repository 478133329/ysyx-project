// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmy_cpu__Syms.h"
#include "Vmy_cpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__stl(Vmy_cpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmy_cpu___024root___eval_triggers__stl(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmy_cpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vmy_cpu___024unit____Vdpiimwrap_call_break_TOP____024unit(CData/*0:0*/ call);

VL_ATTR_COLD void Vmy_cpu___024root___stl_sequent__TOP__0(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x100073U == vlSelf->instr)) {
        Vmy_cpu___024unit____Vdpiimwrap_call_break_TOP____024unit(1U);
    }
    vlSelf->instr_raddr = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump) 
           == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump) 
              == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->my_cpu__DOT__pc));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)((((- (IData)((vlSelf->instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->instr 
                                        >> 0x14U))));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr)));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->my_cpu__DOT__pc)));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->instr >> 0x1fU))) << 0xcU) 
           | (vlSelf->instr >> 0x14U));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_pc__DOT__jump_addr;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__alu_b_sel = (IData)((0x33U 
                                              == (0xfe00707fU 
                                                  & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[(0x1fU 
                                                      & (vlSelf->instr 
                                                         >> 7U))] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump) 
                       == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__jump) 
                          == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__my_pc__DOT__npc = vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
           == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
              == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__reg_wen = ((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
                                    | (IData)((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->instr))));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                            [(0x1fU 
                                              & (vlSelf->instr 
                                                 >> 0xfU))])));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                            [(0x1fU 
                                              & (vlSelf->instr 
                                                 >> 0x14U))])));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->instr >> 0x14U))];
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__reg_wen) == 
           vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__reg_wen) 
              == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->my_cpu__DOT__reg_wen) 
                       == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->my_cpu__DOT__reg_wen) 
                          == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src1 = vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
                       == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
                          == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src2 = vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
}
