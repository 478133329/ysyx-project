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
    VlWide<5>/*159:0*/ __Vtemp_hb4ef33b0__0;
    VlWide<24>/*767:0*/ __Vtemp_h52e5427d__0;
    VlWide<5>/*159:0*/ __Vtemp_h736f97b8__0;
    VlWide<5>/*159:0*/ __Vtemp_h0a9e5d89__0;
    VlWide<5>/*159:0*/ __Vtemp_h73a6fc68__0;
    VlWide<5>/*159:0*/ __Vtemp_h066e2f0f__0;
    VlWide<7>/*223:0*/ __Vtemp_h90f5a640__0;
    VlWide<9>/*287:0*/ __Vtemp_hf2789951__0;
    VlWide<11>/*351:0*/ __Vtemp_ha7af71ad__0;
    VlWide<9>/*287:0*/ __Vtemp_h750abc89__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+6,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+7,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+8,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+9,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+10,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+11,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+12,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+13,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+14,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+15,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+16,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+17,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+18,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+19,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+20,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+21,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[4]),3);
        bufp->chgBit(oldp+22,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+23,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+24,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+25,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+26,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+27,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+28,(vlSelf->my_cpu__DOT__reg_input_sel),2);
        bufp->chgBit(oldp+29,(vlSelf->my_cpu__DOT__alu_a_sel));
        bufp->chgBit(oldp+30,(vlSelf->my_cpu__DOT__alu_b_sel));
        bufp->chgCData(oldp+31,(vlSelf->my_cpu__DOT__alu_op),4);
        bufp->chgQData(oldp+32,(vlSelf->my_cpu__DOT__imm),64);
        bufp->chgBit(oldp+34,(vlSelf->my_cpu__DOT__pc_b_jump_cond));
        bufp->chgBit(oldp+35,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+36,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+37,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+38,(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type));
        bufp->chgBit(oldp+39,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type));
        bufp->chgBit(oldp+40,(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op));
        bufp->chgBit(oldp+41,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bne_op));
        bufp->chgBit(oldp+42,(vlSelf->my_cpu__DOT__my_controller__DOT__is_blt_op));
        bufp->chgBit(oldp+43,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bge_op));
        bufp->chgBit(oldp+44,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bltu_op));
        bufp->chgBit(oldp+45,(vlSelf->my_cpu__DOT__my_controller__DOT__is_bgeu_op));
        bufp->chgBit(oldp+46,(vlSelf->my_cpu__DOT__my_controller__DOT__is_slti_op));
        bufp->chgBit(oldp+47,(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltiu_op));
        bufp->chgBit(oldp+48,(vlSelf->my_cpu__DOT__my_controller__DOT__is_xori_op));
        bufp->chgBit(oldp+49,(vlSelf->my_cpu__DOT__my_controller__DOT__is_andi_op));
        bufp->chgBit(oldp+50,(vlSelf->my_cpu__DOT__my_controller__DOT__is_slli_op));
        bufp->chgBit(oldp+51,(vlSelf->my_cpu__DOT__my_controller__DOT__is_srli_op));
        bufp->chgBit(oldp+52,(vlSelf->my_cpu__DOT__my_controller__DOT__is_sll_op));
        bufp->chgBit(oldp+53,(vlSelf->my_cpu__DOT__my_controller__DOT__is_slt_op));
        bufp->chgBit(oldp+54,(vlSelf->my_cpu__DOT__my_controller__DOT__is_sltu_op));
        bufp->chgBit(oldp+55,(vlSelf->my_cpu__DOT__my_controller__DOT__is_xor_op));
        bufp->chgBit(oldp+56,(vlSelf->my_cpu__DOT__my_controller__DOT__is_srl_op));
        bufp->chgBit(oldp+57,(vlSelf->my_cpu__DOT__my_controller__DOT__is_and_op));
        bufp->chgCData(oldp+58,(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code),3);
        bufp->chgWData(oldp+59,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+62,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+65,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+68,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+71,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+74,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+76,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+78,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+80,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+82,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+84,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+86,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+87,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+88,(vlSelf->my_cpu__DOT__reg_wdata),64);
        bufp->chgQData(oldp+90,(vlSelf->my_cpu__DOT__alu_src1),64);
        bufp->chgQData(oldp+92,(vlSelf->my_cpu__DOT__alu_src2),64);
        bufp->chgQData(oldp+94,(vlSelf->my_cpu__DOT__alu_dst),64);
        bufp->chgBit(oldp+96,(vlSelf->my_cpu__DOT__pc_jump));
        bufp->chgQData(oldp+97,(vlSelf->my_cpu__DOT__pc_jump_addr),64);
        bufp->chgBit(oldp+99,(vlSelf->my_cpu__DOT__pc_b_jump));
        bufp->chgWData(oldp+100,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+103,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+106,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+108,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+110,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgWData(oldp+112,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+115,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+118,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+120,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+122,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),64);
        __Vtemp_hb4ef33b0__0[0U] = (IData)(vlSelf->my_cpu__DOT__b_jump_addr);
        __Vtemp_hb4ef33b0__0[1U] = (IData)((vlSelf->my_cpu__DOT__b_jump_addr 
                                            >> 0x20U));
        __Vtemp_hb4ef33b0__0[2U] = (1U | ((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                          << 1U));
        __Vtemp_hb4ef33b0__0[3U] = (((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                     >> 0x1fU) | ((IData)(
                                                          (vlSelf->my_cpu__DOT__alu_dst 
                                                           >> 0x20U)) 
                                                  << 1U));
        __Vtemp_hb4ef33b0__0[4U] = ((IData)((vlSelf->my_cpu__DOT__alu_dst 
                                             >> 0x20U)) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+124,(__Vtemp_hb4ef33b0__0),130);
        bufp->chgWData(oldp+129,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+132,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+135,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+137,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+139,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+141,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+142,((vlSelf->my_cpu__DOT__alu_src1 
                                  + vlSelf->my_cpu__DOT__alu_src2)),64);
        bufp->chgQData(oldp+144,((vlSelf->my_cpu__DOT__alu_src1 
                                  - vlSelf->my_cpu__DOT__alu_src2)),64);
        bufp->chgQData(oldp+146,((vlSelf->my_cpu__DOT__alu_src1 
                                  & vlSelf->my_cpu__DOT__alu_src2)),64);
        bufp->chgQData(oldp+148,((vlSelf->my_cpu__DOT__alu_src1 
                                  | vlSelf->my_cpu__DOT__alu_src2)),64);
        bufp->chgQData(oldp+150,((vlSelf->my_cpu__DOT__alu_src1 
                                  ^ vlSelf->my_cpu__DOT__alu_src2)),64);
        bufp->chgQData(oldp+152,(VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2)),64);
        bufp->chgQData(oldp+154,(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst),64);
        bufp->chgQData(oldp+156,(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst),64);
        bufp->chgQData(oldp+158,(((vlSelf->my_cpu__DOT__alu_src1 
                                   < vlSelf->my_cpu__DOT__alu_src2)
                                   ? 1ULL : 0ULL)),64);
        __Vtemp_h52e5427d__0[0U] = (IData)(((vlSelf->my_cpu__DOT__alu_src1 
                                             < vlSelf->my_cpu__DOT__alu_src2)
                                             ? 1ULL
                                             : 0ULL));
        __Vtemp_h52e5427d__0[1U] = (IData)((((vlSelf->my_cpu__DOT__alu_src1 
                                              < vlSelf->my_cpu__DOT__alu_src2)
                                              ? 1ULL
                                              : 0ULL) 
                                            >> 0x20U));
        __Vtemp_h52e5427d__0[2U] = (0xaU | ((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst) 
                                            << 4U));
        __Vtemp_h52e5427d__0[3U] = (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h52e5427d__0[4U] = (0x90U | (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                              << 8U) 
                                             | ((IData)(
                                                        (vlSelf->my_cpu__DOT__my_alu__DOT__lt_dst 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_h52e5427d__0[5U] = (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h52e5427d__0[6U] = (0x800U | (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
        __Vtemp_h52e5427d__0[7U] = (((IData)(vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h52e5427d__0[8U] = (0x7000U | (((IData)(
                                                        VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2)) 
                                                << 0x10U) 
                                               | ((IData)(
                                                          (vlSelf->my_cpu__DOT__my_alu__DOT__srl_dst 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
        __Vtemp_h52e5427d__0[9U] = (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2)) 
                                     >> 0x10U) | ((IData)(
                                                          (VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h52e5427d__0[0xaU] = (0x60000U | (((IData)(
                                                           (vlSelf->my_cpu__DOT__alu_src1 
                                                            ^ vlSelf->my_cpu__DOT__alu_src2)) 
                                                   << 0x14U) 
                                                  | ((IData)(
                                                             (VL_SHIFTL_QQQ(64,64,64, vlSelf->my_cpu__DOT__alu_src1, vlSelf->my_cpu__DOT__alu_src2) 
                                                              >> 0x20U)) 
                                                     >> 0x10U)));
        __Vtemp_h52e5427d__0[0xbU] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                                ^ vlSelf->my_cpu__DOT__alu_src2)) 
                                       >> 0xcU) | ((IData)(
                                                           ((vlSelf->my_cpu__DOT__alu_src1 
                                                             ^ vlSelf->my_cpu__DOT__alu_src2) 
                                                            >> 0x20U)) 
                                                   << 0x14U));
        __Vtemp_h52e5427d__0[0xcU] = (0x500000U | (
                                                   ((IData)(
                                                            (vlSelf->my_cpu__DOT__alu_src1 
                                                             | vlSelf->my_cpu__DOT__alu_src2)) 
                                                    << 0x18U) 
                                                   | ((IData)(
                                                              ((vlSelf->my_cpu__DOT__alu_src1 
                                                                ^ vlSelf->my_cpu__DOT__alu_src2) 
                                                               >> 0x20U)) 
                                                      >> 0xcU)));
        __Vtemp_h52e5427d__0[0xdU] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                                | vlSelf->my_cpu__DOT__alu_src2)) 
                                       >> 8U) | ((IData)(
                                                         ((vlSelf->my_cpu__DOT__alu_src1 
                                                           | vlSelf->my_cpu__DOT__alu_src2) 
                                                          >> 0x20U)) 
                                                 << 0x18U));
        __Vtemp_h52e5427d__0[0xeU] = (0x4000000U | 
                                      (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                                 & vlSelf->my_cpu__DOT__alu_src2)) 
                                        << 0x1cU) | 
                                       ((IData)(((vlSelf->my_cpu__DOT__alu_src1 
                                                  | vlSelf->my_cpu__DOT__alu_src2) 
                                                 >> 0x20U)) 
                                        >> 8U)));
        __Vtemp_h52e5427d__0[0xfU] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                                & vlSelf->my_cpu__DOT__alu_src2)) 
                                       >> 4U) | ((IData)(
                                                         ((vlSelf->my_cpu__DOT__alu_src1 
                                                           & vlSelf->my_cpu__DOT__alu_src2) 
                                                          >> 0x20U)) 
                                                 << 0x1cU));
        __Vtemp_h52e5427d__0[0x10U] = (0x30000000U 
                                       | ((IData)((
                                                   (vlSelf->my_cpu__DOT__alu_src1 
                                                    & vlSelf->my_cpu__DOT__alu_src2) 
                                                   >> 0x20U)) 
                                          >> 4U));
        __Vtemp_h52e5427d__0[0x11U] = (IData)((vlSelf->my_cpu__DOT__alu_src1 
                                               - vlSelf->my_cpu__DOT__alu_src2));
        __Vtemp_h52e5427d__0[0x12U] = (IData)(((vlSelf->my_cpu__DOT__alu_src1 
                                                - vlSelf->my_cpu__DOT__alu_src2) 
                                               >> 0x20U));
        __Vtemp_h52e5427d__0[0x13U] = (2U | ((IData)(
                                                     (vlSelf->my_cpu__DOT__alu_src1 
                                                      + vlSelf->my_cpu__DOT__alu_src2)) 
                                             << 4U));
        __Vtemp_h52e5427d__0[0x14U] = (((IData)((vlSelf->my_cpu__DOT__alu_src1 
                                                 + vlSelf->my_cpu__DOT__alu_src2)) 
                                        >> 0x1cU) | 
                                       ((IData)(((vlSelf->my_cpu__DOT__alu_src1 
                                                  + vlSelf->my_cpu__DOT__alu_src2) 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp_h52e5427d__0[0x15U] = (0x10U | (((IData)(vlSelf->my_cpu__DOT__alu_src2) 
                                                 << 8U) 
                                                | ((IData)(
                                                           ((vlSelf->my_cpu__DOT__alu_src1 
                                                             + vlSelf->my_cpu__DOT__alu_src2) 
                                                            >> 0x20U)) 
                                                   >> 0x1cU)));
        __Vtemp_h52e5427d__0[0x16U] = (((IData)(vlSelf->my_cpu__DOT__alu_src2) 
                                        >> 0x18U) | 
                                       ((IData)((vlSelf->my_cpu__DOT__alu_src2 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_h52e5427d__0[0x17U] = ((IData)((vlSelf->my_cpu__DOT__alu_src2 
                                                >> 0x20U)) 
                                       >> 0x18U);
        bufp->chgWData(oldp+160,(__Vtemp_h52e5427d__0),748);
        bufp->chgWData(oldp+184,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[0]),68);
        bufp->chgWData(oldp+187,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[1]),68);
        bufp->chgWData(oldp+190,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[2]),68);
        bufp->chgWData(oldp+193,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[3]),68);
        bufp->chgWData(oldp+196,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[4]),68);
        bufp->chgWData(oldp+199,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[5]),68);
        bufp->chgWData(oldp+202,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[6]),68);
        bufp->chgWData(oldp+205,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[7]),68);
        bufp->chgWData(oldp+208,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[8]),68);
        bufp->chgWData(oldp+211,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[9]),68);
        bufp->chgWData(oldp+214,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__pair_list[10]),68);
        bufp->chgQData(oldp+217,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+219,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+221,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+223,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+225,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+227,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[5]),64);
        bufp->chgQData(oldp+229,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[6]),64);
        bufp->chgQData(oldp+231,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[7]),64);
        bufp->chgQData(oldp+233,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[8]),64);
        bufp->chgQData(oldp+235,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[9]),64);
        bufp->chgQData(oldp+237,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__data_list[10]),64);
        bufp->chgQData(oldp+239,(vlSelf->my_cpu__DOT__my_alu__DOT__alu_dst_muxb1__DOT__i0__DOT__lut_out),64);
        bufp->chgQData(oldp+241,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),64);
        __Vtemp_h736f97b8__0[0U] = (IData)(vlSelf->my_cpu__DOT__pc_jump_addr);
        __Vtemp_h736f97b8__0[1U] = (IData)((vlSelf->my_cpu__DOT__pc_jump_addr 
                                            >> 0x20U));
        __Vtemp_h736f97b8__0[2U] = (1U | ((IData)((4ULL 
                                                   + vlSelf->my_cpu__DOT__pc)) 
                                          << 1U));
        __Vtemp_h736f97b8__0[3U] = (((IData)((4ULL 
                                              + vlSelf->my_cpu__DOT__pc)) 
                                     >> 0x1fU) | ((IData)(
                                                          ((4ULL 
                                                            + vlSelf->my_cpu__DOT__pc) 
                                                           >> 0x20U)) 
                                                  << 1U));
        __Vtemp_h736f97b8__0[4U] = ((IData)(((4ULL 
                                              + vlSelf->my_cpu__DOT__pc) 
                                             >> 0x20U)) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+243,(__Vtemp_h736f97b8__0),130);
        bufp->chgWData(oldp+248,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+251,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+254,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+256,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+258,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+260,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+261,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),64);
        bufp->chgQData(oldp+263,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),64);
        bufp->chgQData(oldp+265,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),64);
        bufp->chgQData(oldp+267,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),64);
        bufp->chgQData(oldp+269,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),64);
        bufp->chgQData(oldp+271,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),64);
        bufp->chgQData(oldp+273,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),64);
        bufp->chgQData(oldp+275,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),64);
        bufp->chgQData(oldp+277,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),64);
        bufp->chgQData(oldp+279,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),64);
        bufp->chgQData(oldp+281,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),64);
        bufp->chgQData(oldp+283,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),64);
        bufp->chgQData(oldp+285,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),64);
        bufp->chgQData(oldp+287,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),64);
        bufp->chgQData(oldp+289,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),64);
        bufp->chgQData(oldp+291,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),64);
        bufp->chgQData(oldp+293,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),64);
        bufp->chgQData(oldp+295,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),64);
        bufp->chgQData(oldp+297,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),64);
        bufp->chgQData(oldp+299,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),64);
        bufp->chgQData(oldp+301,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),64);
        bufp->chgQData(oldp+303,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),64);
        bufp->chgQData(oldp+305,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),64);
        bufp->chgQData(oldp+307,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),64);
        bufp->chgQData(oldp+309,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),64);
        bufp->chgQData(oldp+311,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),64);
        bufp->chgQData(oldp+313,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),64);
        bufp->chgQData(oldp+315,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),64);
        bufp->chgQData(oldp+317,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),64);
        bufp->chgQData(oldp+319,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),64);
        bufp->chgQData(oldp+321,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),64);
        bufp->chgQData(oldp+323,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),64);
        bufp->chgWData(oldp+325,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+328,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+331,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+334,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+337,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+339,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+341,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+343,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+345,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out),64);
        bufp->chgQData(oldp+347,(vlSymsp->TOP____024unit.less_than__Vstatic__temp),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+349,(vlSelf->my_cpu__DOT__pc),64);
        bufp->chgQData(oldp+351,((4ULL + vlSelf->my_cpu__DOT__pc)),64);
        bufp->chgQData(oldp+353,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),64);
    }
    bufp->chgBit(oldp+355,(vlSelf->clk));
    bufp->chgBit(oldp+356,(vlSelf->rst));
    bufp->chgIData(oldp+357,(vlSelf->instr),32);
    bufp->chgQData(oldp+358,(vlSelf->rdata),64);
    bufp->chgQData(oldp+360,(vlSelf->wdata),64);
    bufp->chgQData(oldp+362,(vlSelf->instr_raddr),64);
    bufp->chgQData(oldp+364,(vlSelf->data_raddr),64);
    bufp->chgQData(oldp+366,(vlSelf->data_waddr),64);
    bufp->chgBit(oldp+368,(vlSelf->mem_wen));
    bufp->chgBit(oldp+369,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
                            | ((0x6fU == (0x7fU & vlSelf->instr)) 
                               | ((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type) 
                                  | (0x33U == (0x7fU 
                                               & vlSelf->instr)))))));
    bufp->chgCData(oldp+370,((0x1fU & (vlSelf->instr 
                                       >> 7U))),5);
    bufp->chgCData(oldp+371,((0x1fU & (vlSelf->instr 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+372,((0x1fU & (vlSelf->instr 
                                       >> 0x14U))),5);
    bufp->chgQData(oldp+373,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->instr 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+375,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->instr 
                                        >> 0x14U))]),64);
    bufp->chgBit(oldp+377,(((0x6fU == (0x7fU & vlSelf->instr)) 
                            | (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op))));
    __Vtemp_h0a9e5d89__0[0U] = (IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                       [(0x1fU & (vlSelf->instr 
                                                  >> 0xfU))]);
    __Vtemp_h0a9e5d89__0[1U] = (IData)((vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                        [(0x1fU & (vlSelf->instr 
                                                   >> 0xfU))] 
                                        >> 0x20U));
    __Vtemp_h0a9e5d89__0[2U] = (1U | ((IData)(vlSelf->my_cpu__DOT__pc) 
                                      << 1U));
    __Vtemp_h0a9e5d89__0[3U] = (((IData)(vlSelf->my_cpu__DOT__pc) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__pc 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h0a9e5d89__0[4U] = ((IData)((vlSelf->my_cpu__DOT__pc 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->chgWData(oldp+378,(__Vtemp_h0a9e5d89__0),130);
    __Vtemp_h73a6fc68__0[0U] = (IData)(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                       [(0x1fU & (vlSelf->instr 
                                                  >> 0x14U))]);
    __Vtemp_h73a6fc68__0[1U] = (IData)((vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                                        [(0x1fU & (vlSelf->instr 
                                                   >> 0x14U))] 
                                        >> 0x20U));
    __Vtemp_h73a6fc68__0[2U] = (1U | ((IData)(vlSelf->my_cpu__DOT__imm) 
                                      << 1U));
    __Vtemp_h73a6fc68__0[3U] = (((IData)(vlSelf->my_cpu__DOT__imm) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__imm 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h73a6fc68__0[4U] = ((IData)((vlSelf->my_cpu__DOT__imm 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->chgWData(oldp+383,(__Vtemp_h73a6fc68__0),130);
    bufp->chgCData(oldp+388,((0x7fU & vlSelf->instr)),7);
    bufp->chgCData(oldp+389,((7U & (vlSelf->instr >> 0xcU))),3);
    bufp->chgCData(oldp+390,((vlSelf->instr >> 0x19U)),7);
    bufp->chgBit(oldp+391,((0x6fU == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+392,((0x63U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+393,((0x33U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+394,((0x37U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+395,((0x17U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+396,((IData)((0x63U == (0x707fU 
                                              & vlSelf->instr)))));
    bufp->chgBit(oldp+397,((IData)((3U == (0x707fU 
                                           & vlSelf->instr)))));
    bufp->chgBit(oldp+398,((IData)((0x1003U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+399,((IData)((0x2003U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+400,((IData)((0x3003U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+401,((IData)((0x4003U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+402,((IData)((0x5003U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+403,((IData)((0x6003U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+404,(((IData)(vlSelf->mem_wen) 
                            & (0U == (0x7000U & vlSelf->instr)))));
    bufp->chgBit(oldp+405,(((IData)(vlSelf->mem_wen) 
                            & (0x1000U == (0x7000U 
                                           & vlSelf->instr)))));
    bufp->chgBit(oldp+406,(((IData)(vlSelf->mem_wen) 
                            & (0x2000U == (0x7000U 
                                           & vlSelf->instr)))));
    bufp->chgBit(oldp+407,(((IData)(vlSelf->mem_wen) 
                            & (0x3000U == (0x7000U 
                                           & vlSelf->instr)))));
    bufp->chgBit(oldp+408,((IData)((0x13U == (0x707fU 
                                              & vlSelf->instr)))));
    bufp->chgBit(oldp+409,((IData)((0x6013U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+410,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_h461735d1__0) 
                            & (0x20U == (vlSelf->instr 
                                         >> 0x19U)))));
    bufp->chgBit(oldp+411,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0) 
                            & (0U == (vlSelf->instr 
                                      >> 0x19U)))));
    bufp->chgBit(oldp+412,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hf3a06314__0) 
                            & (0x20U == (vlSelf->instr 
                                         >> 0x19U)))));
    bufp->chgBit(oldp+413,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT____VdfgTmp_hbbe11d3c__0) 
                            & (0x20U == (vlSelf->instr 
                                         >> 0x19U)))));
    bufp->chgBit(oldp+414,((IData)((0x7033U == (0xfe00707fU 
                                                & vlSelf->instr)))));
    bufp->chgQData(oldp+415,((((QData)((IData)((- (IData)(
                                                          (vlSelf->instr 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->instr))))),64);
    bufp->chgQData(oldp+417,((((- (QData)((IData)((vlSelf->instr 
                                                   >> 0x1fU)))) 
                               << 0x15U) | (QData)((IData)(
                                                           ((0x100000U 
                                                             & (vlSelf->instr 
                                                                >> 0xbU)) 
                                                            | ((0xff000U 
                                                                & vlSelf->instr) 
                                                               | ((0x800U 
                                                                   & (vlSelf->instr 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->instr 
                                                                        >> 0x14U))))))))),64);
    bufp->chgQData(oldp+419,((((- (QData)((IData)((vlSelf->instr 
                                                   >> 0x1fU)))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((0xffeU 
                                                            & (vlSelf->instr 
                                                               >> 0x14U)) 
                                                           | (1U 
                                                              & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                 & (vlSelf->instr 
                                                                    >> 0x14U)))))))),64);
    bufp->chgQData(oldp+421,((((- (QData)((IData)((1U 
                                                   & (vlSelf->instr 
                                                      >> 0xcU))))) 
                               << 0xdU) | (QData)((IData)(
                                                          ((0x1000U 
                                                            & vlSelf->instr) 
                                                           | ((0x800U 
                                                               & (vlSelf->instr 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->instr 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->instr 
                                                                       >> 7U))))))))),64);
    bufp->chgQData(oldp+423,((((- (QData)((IData)((vlSelf->instr 
                                                   >> 0x1fU)))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((0xfe0U 
                                                            & (vlSelf->instr 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->instr 
                                                                 >> 7U))))))),64);
    __Vtemp_h066e2f0f__0[3U] = (((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->instr 
                                                                  >> 0xcU))))) 
                                           << 0xdU) 
                                          | (QData)((IData)(
                                                            ((0x1000U 
                                                              & vlSelf->instr) 
                                                             | ((0x800U 
                                                                 & (vlSelf->instr 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->instr 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->instr 
                                                                         >> 7U))))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->instr 
                                                                                >> 0xcU))))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          ((0x1000U 
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
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h90f5a640__0[4U] = (0x10U | (((IData)((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->instr 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xffeU 
                                                                       & (vlSelf->instr 
                                                                          >> 0x14U)) 
                                                                      | (1U 
                                                                         & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                            & (vlSelf->instr 
                                                                               >> 0x14U)))))))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->instr 
                                                                            >> 0xcU))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
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
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp_hf2789951__0[6U] = (0xc0U | (((IData)((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->instr 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->instr 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->instr) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->instr 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->instr 
                                                                                >> 0x14U))))))))) 
                                          << 9U) | 
                                         ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->instr 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xffeU 
                                                                        & (vlSelf->instr 
                                                                           >> 0x14U)) 
                                                                       | (1U 
                                                                          & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                             & (vlSelf->instr 
                                                                                >> 0x14U))))))) 
                                                   >> 0x20U)) 
                                          >> 0x1aU)));
    __Vtemp_hf2789951__0[7U] = (((IData)((((- (QData)((IData)(
                                                              (vlSelf->instr 
                                                               >> 0x1fU)))) 
                                           << 0x15U) 
                                          | (QData)((IData)(
                                                            ((0x100000U 
                                                              & (vlSelf->instr 
                                                                 >> 0xbU)) 
                                                             | ((0xff000U 
                                                                 & vlSelf->instr) 
                                                                | ((0x800U 
                                                                    & (vlSelf->instr 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->instr 
                                                                         >> 0x14U))))))))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSelf->instr 
                                                                             >> 0x1fU)))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x100000U 
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
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_ha7af71ad__0[0U] = (IData)((((- (QData)((IData)(
                                                            (vlSelf->instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->instr 
                                                                           >> 7U)))))));
    __Vtemp_ha7af71ad__0[1U] = (IData)(((((- (QData)((IData)(
                                                             (vlSelf->instr 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->instr 
                                                                  >> 7U)))))) 
                                        >> 0x20U));
    __Vtemp_ha7af71ad__0[2U] = (6U | ((IData)((((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->instr 
                                                                       >> 0xcU))))) 
                                                << 0xdU) 
                                               | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & vlSelf->instr) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->instr 
                                                                              >> 7U))))))))) 
                                      << 3U));
    __Vtemp_ha7af71ad__0[3U] = __Vtemp_h066e2f0f__0[3U];
    __Vtemp_ha7af71ad__0[4U] = __Vtemp_h90f5a640__0[4U];
    __Vtemp_ha7af71ad__0[5U] = (((IData)((((- (QData)((IData)(
                                                              (vlSelf->instr 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0xffeU 
                                                              & (vlSelf->instr 
                                                                 >> 0x14U)) 
                                                             | (1U 
                                                                & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                   & (vlSelf->instr 
                                                                      >> 0x14U)))))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSelf->instr 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xffeU 
                                                                            & (vlSelf->instr 
                                                                               >> 0x14U)) 
                                                                           | (1U 
                                                                              & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U))))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_ha7af71ad__0[6U] = __Vtemp_hf2789951__0[6U];
    __Vtemp_ha7af71ad__0[7U] = __Vtemp_hf2789951__0[7U];
    __Vtemp_ha7af71ad__0[8U] = (0x200U | (((IData)(
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->instr 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->instr))))) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (vlSelf->instr 
                                                                            >> 0x1fU)))) 
                                                        << 0x15U) 
                                                       | (QData)((IData)(
                                                                         ((0x100000U 
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
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_ha7af71ad__0[9U] = (((IData)((((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->instr 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->instr))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->instr 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->instr)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_ha7af71ad__0[0xaU] = ((IData)(((((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->instr 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->instr)))) 
                                           >> 0x20U)) 
                                  >> 0x14U);
    bufp->chgWData(oldp+425,(__Vtemp_ha7af71ad__0),335);
    __Vtemp_h750abc89__0[0U] = (IData)(vlSelf->rdata);
    __Vtemp_h750abc89__0[1U] = (IData)((vlSelf->rdata 
                                        >> 0x20U));
    __Vtemp_h750abc89__0[2U] = (3U | ((IData)((4ULL 
                                               + vlSelf->my_cpu__DOT__pc)) 
                                      << 2U));
    __Vtemp_h750abc89__0[3U] = (((IData)((4ULL + vlSelf->my_cpu__DOT__pc)) 
                                 >> 0x1eU) | ((IData)(
                                                      ((4ULL 
                                                        + vlSelf->my_cpu__DOT__pc) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h750abc89__0[4U] = (8U | (((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                       << 4U) | ((IData)(
                                                         ((4ULL 
                                                           + vlSelf->my_cpu__DOT__pc) 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_h750abc89__0[5U] = (((IData)(vlSelf->my_cpu__DOT__alu_dst) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSelf->my_cpu__DOT__alu_dst 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h750abc89__0[6U] = (0x10U | ((IData)((vlSelf->my_cpu__DOT__alu_dst 
                                                  >> 0x20U)) 
                                         >> 0x1cU));
    __Vtemp_h750abc89__0[7U] = 0U;
    __Vtemp_h750abc89__0[8U] = 0U;
    bufp->chgWData(oldp+436,(__Vtemp_h750abc89__0),264);
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
