// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKey.h for the primary calling header

#include "verilated.h"

#include "VMuxKey___024root.h"

VL_INLINE_OPT void VMuxKey___024root___ico_sequent__TOP__0(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x100073U == vlSelf->my_cpu__02Einstr))) {
        VL_FINISH_MT("vsrc/my_cpu.v", 41, "");
    }
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelf->lut));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)((((- (IData)((vlSelf->my_cpu__02Einstr 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->my_cpu__02Einstr 
                                        >> 0x14U))));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->my_cpu__02Einstr >> 0x1fU))) 
            << 0xcU) | (vlSelf->my_cpu__02Einstr >> 0x14U));
    vlSelf->memory__DOT__mem[(0x7fU & vlSelf->memory__02Edata_waddr)] 
        = vlSelf->memory__DOT____Vcellout__memory__dout;
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (1U & ((IData)(vlSelf->lut) >> 1U));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (1U & ((IData)(vlSelf->lut) >> 3U));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (1U & (IData)(vlSelf->lut));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (1U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->my_cpu__02Einstr)));
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[(0x1fU 
                                                      & (vlSelf->my_cpu__02Einstr 
                                                         >> 7U))] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
    vlSelf->memory__02Einstr = vlSelf->memory__DOT__mem
        [(0x7fU & vlSelf->memory__02Einstr_raddr)];
    vlSelf->memory__02Erdata = vlSelf->memory__DOT__mem
        [(0x7fU & vlSelf->memory__02Edata_raddr)];
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
            [0U]) & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
               [1U]) & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->out = ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit)
                    ? (IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out)
                    : (IData)(vlSelf->default_out));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
           == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
              == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__reg_wen = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
                                    | (IData)((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->my_cpu__02Einstr))));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                            [(0x1fU 
                                              & (vlSelf->my_cpu__02Einstr 
                                                 >> 0xfU))])));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                            [(0x1fU 
                                              & (vlSelf->my_cpu__02Einstr 
                                                 >> 0x14U))])));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->my_cpu__02Einstr >> 0xfU))];
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->my_cpu__02Einstr >> 0x14U))];
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
        = ((- (IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
                       == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
                          == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src2 = vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
}

void VMuxKey___024root___eval_ico(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VMuxKey___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VMuxKey___024root___eval_act(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___eval_act\n"); );
}

VL_INLINE_OPT void VMuxKey___024root___nba_sequent__TOP__0(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->wen) {
        vlSelf->memory__DOT____Vcellout__memory__dout 
            = vlSelf->memory__02Ewdata;
    }
    vlSelf->memory__DOT__mem[(0x7fU & vlSelf->memory__02Edata_waddr)] 
        = vlSelf->memory__DOT____Vcellout__memory__dout;
    vlSelf->memory__02Einstr = vlSelf->memory__DOT__mem
        [(0x7fU & vlSelf->memory__02Einstr_raddr)];
    vlSelf->memory__02Erdata = vlSelf->memory__DOT__mem
        [(0x7fU & vlSelf->memory__02Edata_raddr)];
}

VL_INLINE_OPT void VMuxKey___024root___nba_sequent__TOP__1(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__pc = 0x80000000U;
        vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout = 0U;
    } else {
        vlSelf->my_cpu__DOT__pc = vlSelf->my_cpu__DOT__my_pc__DOT__npc;
        if (vlSelf->my_cpu__DOT__reg_wen) {
            vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout 
                = ((IData)(vlSelf->my_cpu__DOT__reg_wen)
                    ? (vlSelf->my_cpu__DOT__alu_src1 
                       + vlSelf->my_cpu__DOT__alu_src2)
                    : vlSelf->my_cpu__DOT__alu_src1);
        }
    }
    vlSelf->my_cpu__02Einstr_raddr = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->my_cpu__DOT__pc));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->my_cpu__DOT__pc)));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[(0x1fU 
                                                      & (vlSelf->my_cpu__02Einstr 
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
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                            [(0x1fU 
                                              & (vlSelf->my_cpu__02Einstr 
                                                 >> 0xfU))])));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                            [(0x1fU 
                                              & (vlSelf->my_cpu__02Einstr 
                                                 >> 0x14U))])));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->my_cpu__02Einstr >> 0xfU))];
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->my_cpu__02Einstr >> 0x14U))];
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
                       == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_add_op) 
                          == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src2 = vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void VMuxKey___024root___nba_sequent__TOP__2(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___nba_sequent__TOP__2\n"); );
    // Body
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
}

void VMuxKey___024root___eval_nba(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VMuxKey___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VMuxKey___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VMuxKey___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void VMuxKey___024root___eval_triggers__ico(VMuxKey___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMuxKey___024root___dump_triggers__ico(VMuxKey___024root* vlSelf);
#endif  // VL_DEBUG
void VMuxKey___024root___eval_triggers__act(VMuxKey___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMuxKey___024root___dump_triggers__act(VMuxKey___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMuxKey___024root___dump_triggers__nba(VMuxKey___024root* vlSelf);
#endif  // VL_DEBUG

void VMuxKey___024root___eval(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VMuxKey___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VMuxKey___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/example.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VMuxKey___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VMuxKey___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VMuxKey___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/example.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VMuxKey___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VMuxKey___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/example.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VMuxKey___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VMuxKey___024root___eval_debug_assertions(VMuxKey___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKey__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKey___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->key & 0xfeU))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->default_out & 0xfeU))) {
        Verilated::overWidthError("default_out");}
    if (VL_UNLIKELY((vlSelf->lut & 0xf0U))) {
        Verilated::overWidthError("lut");}
    if (VL_UNLIKELY((vlSelf->memory__02Eclk & 0xfeU))) {
        Verilated::overWidthError("memory.clk");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((vlSelf->my_cpu__02Eclk & 0xfeU))) {
        Verilated::overWidthError("my_cpu.clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
