// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmy_cpu___024root.h"

VL_ATTR_COLD void Vmy_cpu___024root___eval_static(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmy_cpu___024root___eval_initial__TOP(Vmy_cpu___024root* vlSelf);

VL_ATTR_COLD void Vmy_cpu___024root___eval_initial(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_initial\n"); );
    // Body
    Vmy_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vmy_cpu___024root___eval_initial__TOP(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[3U] = 0ULL;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3U][0U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3U][1U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3U][2U] = 0U;
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0U] = 0ULL;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0U] = 6U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->mem_wen = 0U;
}

VL_ATTR_COLD void Vmy_cpu___024root___eval_final(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmy_cpu___024root___eval_triggers__stl(Vmy_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__stl(Vmy_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___eval_stl(Vmy_cpu___024root* vlSelf);

VL_ATTR_COLD void Vmy_cpu___024root___eval_settle(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmy_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmy_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/my_cpu.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmy_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__stl(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmy_cpu___024root___stl_sequent__TOP__0(Vmy_cpu___024root* vlSelf);

VL_ATTR_COLD void Vmy_cpu___024root___eval_stl(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vmy_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__ico(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__act(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmy_cpu___024root___dump_triggers__nba(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmy_cpu___024root___ctor_var_reset(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->rdata = VL_RAND_RESET_Q(64);
    vlSelf->wdata = VL_RAND_RESET_Q(64);
    vlSelf->instr_raddr = VL_RAND_RESET_Q(64);
    vlSelf->data_raddr = VL_RAND_RESET_Q(64);
    vlSelf->data_waddr = VL_RAND_RESET_Q(64);
    vlSelf->mem_wen = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__reg_input_sel = VL_RAND_RESET_I(2);
    vlSelf->my_cpu__DOT__alu_a_sel = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__alu_op = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__alu_dst = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__pc_jump = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__pc_jump_addr = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__b_jump_addr = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__my_pc__DOT__npc = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op = VL_RAND_RESET_I(1);
    vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
