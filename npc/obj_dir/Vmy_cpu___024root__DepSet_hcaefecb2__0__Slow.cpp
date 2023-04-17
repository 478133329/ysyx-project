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
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((0x33U == (0x7fU & vlSelf->instr)) == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit) 
           | ((0x33U == (0x7fU & vlSelf->instr)) == 
              vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type) 
           == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type) 
              == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__pc >> 0x20U));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__b_jump_addr);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__b_jump_addr 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)((4ULL + vlSelf->my_cpu__DOT__pc));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL + vlSelf->my_cpu__DOT__pc) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->rdata);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->rdata >> 0x20U));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0U][2U] = 3U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)((4ULL + vlSelf->my_cpu__DOT__pc));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL + vlSelf->my_cpu__DOT__pc) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1U][2U] = 2U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->instr 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->instr 
                                                      >> 7U)))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->instr 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->instr 
                                                       >> 7U)))))) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U][2U] = 6U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)((((- (QData)((IData)((1U & (vlSelf->instr 
                                              >> 0xcU))))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & vlSelf->instr) 
                                                | ((0x800U 
                                                    & (vlSelf->instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->instr 
                                                            >> 7U)))))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)(((((- (QData)((IData)((1U & (vlSelf->instr 
                                               >> 0xcU))))) 
                     << 0xdU) | (QData)((IData)(((0x1000U 
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
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1U][2U] = 2U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->instr 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->instr 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->instr 
                                                             >> 0x14U)))))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->instr 
                                         >> 0x1fU)))) 
                     << 0x15U) | (QData)((IData)(((0x100000U 
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
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3U][2U] = 1U;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4U][0U] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->instr 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->instr)))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4U][1U] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->instr 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->instr)))) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4U][2U] = 0U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1U] 
        = (4ULL + vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[0U] 
        = vlSelf->rdata;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[1U] 
        = (4ULL + vlSelf->my_cpu__DOT__pc);
    vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type 
        = ((0x37U == (0x7fU & vlSelf->instr)) | (0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->instr)));
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__b_jump_addr;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0U] 
        = (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)(((0xfe0U & (vlSelf->instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->instr 
                                            >> 7U))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1U] 
        = (((- (QData)((IData)((1U & (vlSelf->instr 
                                      >> 0xcU))))) 
            << 0xdU) | (QData)((IData)(((0x1000U & vlSelf->instr) 
                                        | ((0x800U 
                                            & (vlSelf->instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->instr 
                                                    >> 7U))))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[3U] 
        = (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
            << 0x15U) | (QData)((IData)(((0x100000U 
                                          & (vlSelf->instr 
                                             >> 0xbU)) 
                                         | ((0xff000U 
                                             & vlSelf->instr) 
                                            | ((0x800U 
                                                & (vlSelf->instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->instr 
                                                     >> 0x14U))))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)((- (IData)((vlSelf->instr 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->instr))));
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[(0x1fU 
                                                      & (vlSelf->instr 
                                                         >> 7U))] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
    vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op 
        = (IData)((0x67U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type 
        = ((0x67U == (0x7fU & vlSelf->instr)) | (0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->instr)));
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
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->instr 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xffeU 
                                                 & (vlSelf->instr 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                      & (vlSelf->instr 
                                                         >> 0x14U))))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->instr 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xffeU 
                                                  & (vlSelf->instr 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                       & (vlSelf->instr 
                                                          >> 0x14U))))))) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2U][2U] = 3U;
    vlSelf->my_cpu__DOT__pc_jump = ((0x6fU == (0x7fU 
                                               & vlSelf->instr)) 
                                    | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op));
    vlSelf->my_cpu__DOT__alu_op = ((0x17U == (0x7fU 
                                              & vlSelf->instr)) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSelf->instr)) 
                                      | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op) 
                                         | ((IData)(
                                                    (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->instr))) 
                                            | (IData)(
                                                      (0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->instr)))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[2U] 
        = (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)(((0xffeU & (vlSelf->instr 
                                                   >> 0x14U)) 
                                        | (1U & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                 & (vlSelf->instr 
                                                    >> 0x14U)))))));
    vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code 
        = (((0x23U == (0x7fU & vlSelf->instr)) << 2U) 
           | ((((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type) 
                   | (0x23U == (0x7fU & vlSelf->instr)))) 
               << 1U) | ((0x6fU == (0x7fU & vlSelf->instr)) 
                         | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type))));
    vlSelf->my_cpu__DOT__alu_a_sel = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
                                      | (0x33U == (0x7fU 
                                                   & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__pc_jump) == 
           vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__pc_jump) 
              == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
           == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
              == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
              == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
              == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
              == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
                               == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
                                  == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
                                  == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
                                  == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code) 
                                  == vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->my_cpu__DOT__imm = vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_a_sel) 
           == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_a_sel) 
              == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__reg_input_sel = ((((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->instr)) 
                                            | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->instr)))) 
                                           << 1U) | 
                                          ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
                                           | (IData)(vlSelf->my_cpu__DOT__alu_a_sel)));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_a_sel) 
                               == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_a_sel) 
                                  == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src1 = vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__imm);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__imm >> 0x20U));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__imm;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
           == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
              == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
              == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
              == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x33U == (0x7fU & vlSelf->instr)) 
                               == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x33U == (0x7fU 
                                             & vlSelf->instr)) 
                                  == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src2 = vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__alu_dst = ((IData)(vlSelf->my_cpu__DOT__alu_op)
                                     ? ((IData)(vlSelf->my_cpu__DOT__alu_op)
                                         ? (vlSelf->my_cpu__DOT__alu_src1 
                                            + vlSelf->my_cpu__DOT__alu_src2)
                                         : vlSelf->my_cpu__DOT__alu_src2)
                                     : vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__alu_dst);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_dst >> 0x20U));
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__alu_dst);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_dst >> 0x20U));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2U][2U] = 1U;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[2U] 
        = vlSelf->my_cpu__DOT__alu_dst;
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__alu_dst;
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
                               == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
                                  == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
                                  == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__reg_input_sel) 
                                  == vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->my_cpu__DOT__reg_wdata = vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type) 
                               == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_b_type) 
                                  == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__pc_jump_addr = vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__pc_jump_addr);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__pc_jump_addr 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0U] 
        = vlSelf->my_cpu__DOT__pc_jump_addr;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__pc_jump) 
                               == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__pc_jump) 
                                  == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__my_pc__DOT__npc = vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out;
}
