// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmy_cpu___024root.h"

void Vmy_cpu___024root___ico_sequent__TOP__0(Vmy_cpu___024root* vlSelf);

void Vmy_cpu___024root___eval_ico(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmy_cpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmy_cpu___024root___eval_act(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmy_cpu___024root___nba_sequent__TOP__0(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->my_cpu__DOT__pc = 0x80000000ULL;
        vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout = 0ULL;
    } else {
        vlSelf->my_cpu__DOT__pc = vlSelf->my_cpu__DOT__my_pc__DOT__npc;
        if (((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
             | ((0x6fU == (0x7fU & vlSelf->instr)) 
                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
                   | (0x33U == (0x7fU & vlSelf->instr)))))) {
            vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout 
                = vlSelf->my_cpu__DOT__reg_wdata;
        }
    }
    vlSelf->instr_raddr = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__pc >> 0x20U));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)((4ULL + vlSelf->my_cpu__DOT__pc));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL + vlSelf->my_cpu__DOT__pc) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)((4ULL + vlSelf->my_cpu__DOT__pc));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL + vlSelf->my_cpu__DOT__pc) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1U][2U] = 2U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1U] 
        = (4ULL + vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[1U] 
        = (4ULL + vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[(0x1fU 
                                                      & (vlSelf->instr 
                                                         >> 7U))] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                  [(0x1fU & (vlSelf->instr >> 0xfU))]);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                   [(0x1fU & (vlSelf->instr >> 0xfU))] 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                  [(0x1fU & (vlSelf->instr >> 0x14U))]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                   [(0x1fU & (vlSelf->instr >> 0x14U))] 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
        [(0x1fU & (vlSelf->instr >> 0x14U))];
}

void Vmy_cpu___024root___nba_sequent__TOP__1(Vmy_cpu___024root* vlSelf);

void Vmy_cpu___024root___eval_nba(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmy_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vmy_cpu___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vmy_cpu___024root___eval_triggers__ico(Vmy_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__ico(Vmy_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vmy_cpu___024root___eval_triggers__act(Vmy_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__act(Vmy_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__nba(Vmy_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vmy_cpu___024root___eval(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmy_cpu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmy_cpu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wangsijie/workspace/ysyx-workbench/npc/vsrc/my_cpu.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmy_cpu___024root___eval_ico(vlSelf);
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
            Vmy_cpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmy_cpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wangsijie/workspace/ysyx-workbench/npc/vsrc/my_cpu.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmy_cpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmy_cpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wangsijie/workspace/ysyx-workbench/npc/vsrc/my_cpu.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmy_cpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmy_cpu___024root___eval_debug_assertions(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
