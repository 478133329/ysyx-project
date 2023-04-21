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

void Vmy_cpu___024unit____Vdpiimwrap_npc_trap_TOP____024unit(QData/*63:0*/ halt_pc);

VL_ATTR_COLD void Vmy_cpu___024root___stl_sequent__TOP__0(Vmy_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmy_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmy_cpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x100073U == vlSelf->instr)) {
        Vmy_cpu___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelf->my_cpu__DOT__pc);
    }
    vlSelf->instr_raddr = vlSelf->my_cpu__DOT__pc;
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
    vlSelf->my_cpu__DOT__my_controller__DOT__is_slt_op 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_sltu_op 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_slti_op 
        = (IData)((0x2013U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_sltiu_op 
        = (IData)((0x3013U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_bge_op 
        = (IData)((0x5063U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_bgeu_op 
        = (IData)((0x7063U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_xori_op 
        = (IData)((0x4013U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_xor_op 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_andi_op 
        = (IData)((0x7013U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_and_op 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0 
        = (IData)((0x33U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_blt_op 
        = (IData)((0x4063U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_bltu_op 
        = (IData)((0x6063U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_bne_op 
        = (IData)((0x1063U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h461735d1__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hbbe11d3c__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf39d8f1a__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->instr)));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__pc;
    vlSelf->my_cpu__DOT__alu_b_sel = ((0x63U == (0x7fU 
                                                 & vlSelf->instr)) 
                                      | (0x33U == (0x7fU 
                                                   & vlSelf->instr)));
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
    vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op 
        = (IData)((0x67U == (0x707fU & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[(0x1fU 
                                                      & (vlSelf->instr 
                                                         >> 7U))] 
        = vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
    vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type 
        = ((0x67U == (0x7fU & vlSelf->instr)) | ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->instr)) 
                                                 | ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->instr)) 
                                                    | (0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->instr)))));
    vlSelf->mem_wen = (0x23U == (0x7fU & vlSelf->instr));
    vlSelf->my_cpu__DOT__reg_input_sel = ((((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->instr)) 
                                            | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_jump_type) 
                                               | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_load_type))) 
                                           << 1U) | 
                                          ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
                                           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_arith_type) 
                                              | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_load_type) 
                                                 | (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instr))))));
    vlSelf->my_cpu__DOT__pc_b_jump_cond = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bne_op) 
                                           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_blt_op) 
                                              | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bltu_op)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_srli_op 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h461735d1__0) 
           & (0U == (vlSelf->instr >> 0x19U)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_srl_op 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hbbe11d3c__0) 
           & (0U == (vlSelf->instr >> 0x19U)));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_slli_op 
        = ((0x13U == (0x7fU & vlSelf->instr)) & (IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf39d8f1a__0));
    vlSelf->my_cpu__DOT__my_controller__DOT__is_sll_op 
        = ((0x33U == (0x7fU & vlSelf->instr)) & (IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf39d8f1a__0));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
           == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
              == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
              [1U]));
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
    vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[2U] 
        = (((- (QData)((IData)((vlSelf->instr >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)(((0xffeU & (vlSelf->instr 
                                                   >> 0x14U)) 
                                        | (1U & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                 & (vlSelf->instr 
                                                    >> 0x14U)))))));
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
    vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h2e1ef291__0 
        = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
           | ((0x63U == (0x7fU & vlSelf->instr)) | (IData)(vlSelf->mem_wen)));
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
    vlSelf->my_cpu__DOT__alu_op = (((((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h461735d1__0) 
                                      & (0x20U == (vlSelf->instr 
                                                   >> 0x19U))) 
                                     | (((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hbbe11d3c__0) 
                                         & (0x20U == 
                                            (vlSelf->instr 
                                             >> 0x19U))) 
                                        | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_slt_op) 
                                           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltu_op) 
                                              | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_slti_op) 
                                                 | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltiu_op) 
                                                    | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_blt_op) 
                                                       | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bltu_op) 
                                                          | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bge_op) 
                                                             | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bgeu_op)))))))))) 
                                    << 3U) | ((((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_xori_op) 
                                                | ((IData)(
                                                           (0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->instr))) 
                                                   | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_slli_op) 
                                                      | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_srli_op) 
                                                         | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_sll_op) 
                                                            | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_xor_op) 
                                                               | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_srl_op) 
                                                                  | (IData)(
                                                                            (0x7033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->instr)))))))))) 
                                               << 2U) 
                                              | ((((IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->instr))) 
                                                   | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bne_op) 
                                                      | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_andi_op) 
                                                         | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_slli_op) 
                                                            | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_srli_op) 
                                                               | (((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelf->instr 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_sll_op) 
                                                                     | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_srl_op) 
                                                                        | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_and_op) 
                                                                           | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltu_op) 
                                                                              | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltiu_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bltu_op) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bgeu_op))))))))))))) 
                                                  << 1U) 
                                                 | ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->instr)) 
                                                    | ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->instr)) 
                                                       | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op) 
                                                          | ((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->instr))) 
                                                             | ((IData)(
                                                                        (0x1003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->instr))) 
                                                                | ((IData)(
                                                                           (0x2003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->instr))) 
                                                                   | ((IData)(
                                                                              (0x3003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->instr))) 
                                                                      | ((IData)(
                                                                                (0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr))) 
                                                                         | ((IData)(
                                                                                (0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr))) 
                                                                            | ((IData)(
                                                                                (0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr))) 
                                                                               | (((IData)(vlSelf->mem_wen) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->instr))) 
                                                                                | (((IData)(vlSelf->mem_wen) 
                                                                                & (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->instr))) 
                                                                                | (((IData)(vlSelf->mem_wen) 
                                                                                & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->instr))) 
                                                                                | (((IData)(vlSelf->mem_wen) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->instr))) 
                                                                                | ((IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->instr))) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_xori_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_andi_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_srli_op) 
                                                                                | (((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->instr 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_xor_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_srl_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_and_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_slt_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_slti_op) 
                                                                                | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_blt_op) 
                                                                                | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_bge_op)))))))))))))))))))))))))))));
    vlSelf->my_cpu__DOT__alu_a_sel = ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h2e1ef291__0) 
                                      | (0x33U == (0x7fU 
                                                   & vlSelf->instr)));
    vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code 
        = (((IData)(vlSelf->mem_wen) << 2U) | (((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h2e1ef291__0) 
                                                << 1U) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->instr)) 
                                                  | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type))));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_op) == 
           vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_op) 
              == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_a_sel) 
           == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__alu_a_sel) 
              == vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list
              [1U]));
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
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__imm);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__imm >> 0x20U));
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__imm;
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
                               == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_b_sel) 
                                  == vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__alu_src2 = vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0xaU][0U] 
        = (IData)(vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0xaU][1U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_src2 >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0xaU][2U] = 0U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(((vlSelf->my_cpu__DOT__alu_src1 < vlSelf->my_cpu__DOT__alu_src2)
                    ? 1ULL : 0ULL));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((((vlSelf->my_cpu__DOT__alu_src1 
                     < vlSelf->my_cpu__DOT__alu_src2)
                     ? 1ULL : 0ULL) >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0U][2U] = 0xaU;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[4U][0U] 
        = (IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[4U][1U] 
        = (IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[4U][2U] = 6U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[5U][0U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_src1 ^ vlSelf->my_cpu__DOT__alu_src2));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[5U][1U] 
        = (IData)(((vlSelf->my_cpu__DOT__alu_src1 ^ vlSelf->my_cpu__DOT__alu_src2) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[5U][2U] = 5U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[6U][0U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_src1 | vlSelf->my_cpu__DOT__alu_src2));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[6U][1U] 
        = (IData)(((vlSelf->my_cpu__DOT__alu_src1 | vlSelf->my_cpu__DOT__alu_src2) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[6U][2U] = 4U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[7U][0U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_src1 & vlSelf->my_cpu__DOT__alu_src2));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[7U][1U] 
        = (IData)(((vlSelf->my_cpu__DOT__alu_src1 & vlSelf->my_cpu__DOT__alu_src2) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[7U][2U] = 3U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[8U][0U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_src1 - vlSelf->my_cpu__DOT__alu_src2));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[8U][1U] 
        = (IData)(((vlSelf->my_cpu__DOT__alu_src1 - vlSelf->my_cpu__DOT__alu_src2) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[8U][2U] = 2U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[9U][0U] 
        = (IData)((vlSelf->my_cpu__DOT__alu_src1 + vlSelf->my_cpu__DOT__alu_src2));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[9U][1U] 
        = (IData)(((vlSelf->my_cpu__DOT__alu_src1 + vlSelf->my_cpu__DOT__alu_src2) 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[9U][2U] = 1U;
    vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst = VL_SHIFTR_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[0xaU] 
        = vlSelf->my_cpu__DOT__alu_src2;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[0U] 
        = ((vlSelf->my_cpu__DOT__alu_src1 < vlSelf->my_cpu__DOT__alu_src2)
            ? 1ULL : 0ULL);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[3U] 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[4U] 
        = VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->my_cpu__DOT__alu_src1 ^ vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->my_cpu__DOT__alu_src1 | vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->my_cpu__DOT__alu_src1 & vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->my_cpu__DOT__alu_src1 - vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->my_cpu__DOT__alu_src1 + vlSelf->my_cpu__DOT__alu_src2);
    vlSelf->__Vfunc_less_than__1__src2 = vlSelf->my_cpu__DOT__alu_src2;
    vlSelf->__Vfunc_less_than__1__src1 = vlSelf->my_cpu__DOT__alu_src1;
    vlSymsp->TOP____024unit.less_than__Vstatic__temp 
        = ((IData)(((~ (vlSelf->__Vfunc_less_than__1__src1 
                        >> 0x3fU)) & (vlSelf->__Vfunc_less_than__1__src2 
                                      >> 0x3fU))) ? 0ULL
            : ((IData)(((vlSelf->__Vfunc_less_than__1__src1 
                         >> 0x3fU) & (~ (vlSelf->__Vfunc_less_than__1__src2 
                                         >> 0x3fU))))
                ? 1ULL : (((0x7fffffffffffffffULL & vlSelf->__Vfunc_less_than__1__src1) 
                           < (0x7fffffffffffffffULL 
                              & vlSelf->__Vfunc_less_than__1__src2))
                           ? 1ULL : 0ULL)));
    vlSelf->__Vfunc_less_than__1__Vfuncout = vlSymsp->TOP____024unit.less_than__Vstatic__temp;
    vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst = vlSelf->__Vfunc_less_than__1__Vfuncout;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[2U][2U] = 8U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[3U][2U] = 7U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst 
                   >> 0x20U));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[1U][2U] = 9U;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst;
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                               == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__alu_op) 
                                  == vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->my_cpu__DOT__alu_dst = vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out;
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
    if (vlSelf->my_cpu__DOT__pc_b_jump_cond) {
        if (vlSelf->my_cpu__DOT__pc_b_jump_cond) {
            vlSelf->my_cpu__DOT__pc_b_jump = (0ULL 
                                              != vlSelf->my_cpu__DOT__alu_dst);
        }
    } else {
        vlSelf->my_cpu__DOT__pc_b_jump = (0ULL == vlSelf->my_cpu__DOT__alu_dst);
    }
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
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__pc_b_jump) 
           == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__pc_b_jump) 
              == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->my_cpu__DOT__pc_jump = ((IData)(vlSelf->my_cpu__DOT__pc_b_jump) 
                                    | ((0x6fU == (0x7fU 
                                                  & vlSelf->instr)) 
                                       | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)));
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__pc_b_jump) 
                               == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out 
        = (vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->my_cpu__DOT__pc_b_jump) 
                                  == vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->my_cpu__DOT__pc_jump_addr = vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out;
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__pc_jump) == 
           vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->my_cpu__DOT__pc_jump) 
              == vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list
              [1U]));
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
