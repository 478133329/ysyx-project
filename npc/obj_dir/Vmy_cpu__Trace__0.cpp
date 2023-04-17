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
        bufp->chgBit(oldp+6,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+7,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+8,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+9,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+10,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+11,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list[4]),3);
        bufp->chgBit(oldp+12,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+13,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+14,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+15,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+16,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+17,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+18,(vlSelf->my_cpu__DOT__reg_input_sel),2);
        bufp->chgBit(oldp+19,(vlSelf->my_cpu__DOT__alu_a_sel));
        bufp->chgBit(oldp+20,(vlSelf->my_cpu__DOT__alu_op));
        bufp->chgQData(oldp+21,(vlSelf->my_cpu__DOT__imm),64);
        bufp->chgBit(oldp+23,(vlSelf->my_cpu__DOT__pc_jump));
        bufp->chgBit(oldp+24,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+25,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+26,(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type));
        bufp->chgBit(oldp+27,(vlSelf->my_cpu__DOT__my_controller__DOT__is_i_type));
        bufp->chgBit(oldp+28,(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op));
        bufp->chgCData(oldp+29,(vlSelf->my_cpu__DOT__my_controller__DOT__imm_type_code),3);
        bufp->chgWData(oldp+30,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+33,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+36,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+39,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+42,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+45,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+47,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+49,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+51,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+53,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+55,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+57,(vlSelf->my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+58,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+59,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+60,(vlSelf->my_cpu__DOT__reg_wdata),64);
        bufp->chgQData(oldp+62,(vlSelf->my_cpu__DOT__alu_src1),64);
        bufp->chgQData(oldp+64,(vlSelf->my_cpu__DOT__alu_src2),64);
        bufp->chgQData(oldp+66,(vlSelf->my_cpu__DOT__alu_dst),64);
        bufp->chgQData(oldp+68,(vlSelf->my_cpu__DOT__pc_jump_addr),64);
        bufp->chgWData(oldp+70,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+73,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+76,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+78,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+80,(vlSelf->my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgWData(oldp+82,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+85,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+88,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+90,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+92,(vlSelf->my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out),64);
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
        bufp->chgWData(oldp+94,(__Vtemp_hb4ef33b0__0),130);
        bufp->chgWData(oldp+99,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+102,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+105,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+107,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+109,(vlSelf->my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgQData(oldp+111,(vlSelf->my_cpu__DOT__my_pc__DOT__npc),64);
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
        bufp->chgWData(oldp+113,(__Vtemp_h736f97b8__0),130);
        bufp->chgWData(oldp+118,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+121,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+124,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+126,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+128,(vlSelf->my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out),64);
        bufp->chgQData(oldp+130,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[0]),64);
        bufp->chgQData(oldp+132,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[1]),64);
        bufp->chgQData(oldp+134,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[2]),64);
        bufp->chgQData(oldp+136,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[3]),64);
        bufp->chgQData(oldp+138,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[4]),64);
        bufp->chgQData(oldp+140,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[5]),64);
        bufp->chgQData(oldp+142,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[6]),64);
        bufp->chgQData(oldp+144,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[7]),64);
        bufp->chgQData(oldp+146,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[8]),64);
        bufp->chgQData(oldp+148,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[9]),64);
        bufp->chgQData(oldp+150,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[10]),64);
        bufp->chgQData(oldp+152,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[11]),64);
        bufp->chgQData(oldp+154,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[12]),64);
        bufp->chgQData(oldp+156,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[13]),64);
        bufp->chgQData(oldp+158,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[14]),64);
        bufp->chgQData(oldp+160,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[15]),64);
        bufp->chgQData(oldp+162,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[16]),64);
        bufp->chgQData(oldp+164,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[17]),64);
        bufp->chgQData(oldp+166,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[18]),64);
        bufp->chgQData(oldp+168,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[19]),64);
        bufp->chgQData(oldp+170,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[20]),64);
        bufp->chgQData(oldp+172,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[21]),64);
        bufp->chgQData(oldp+174,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[22]),64);
        bufp->chgQData(oldp+176,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[23]),64);
        bufp->chgQData(oldp+178,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[24]),64);
        bufp->chgQData(oldp+180,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[25]),64);
        bufp->chgQData(oldp+182,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[26]),64);
        bufp->chgQData(oldp+184,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[27]),64);
        bufp->chgQData(oldp+186,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[28]),64);
        bufp->chgQData(oldp+188,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[29]),64);
        bufp->chgQData(oldp+190,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[30]),64);
        bufp->chgQData(oldp+192,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers[31]),64);
        bufp->chgWData(oldp+194,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+197,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+200,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+203,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+206,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+208,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+210,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+212,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+214,(vlSelf->my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+216,(vlSelf->my_cpu__DOT__pc),64);
        bufp->chgQData(oldp+218,((4ULL + vlSelf->my_cpu__DOT__pc)),64);
        bufp->chgQData(oldp+220,(vlSelf->my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout),64);
    }
    bufp->chgBit(oldp+222,(vlSelf->clk));
    bufp->chgBit(oldp+223,(vlSelf->rst));
    bufp->chgIData(oldp+224,(vlSelf->instr),32);
    bufp->chgQData(oldp+225,(vlSelf->rdata),64);
    bufp->chgQData(oldp+227,(vlSelf->wdata),64);
    bufp->chgQData(oldp+229,(vlSelf->instr_raddr),64);
    bufp->chgQData(oldp+231,(vlSelf->data_raddr),64);
    bufp->chgQData(oldp+233,(vlSelf->data_waddr),64);
    bufp->chgBit(oldp+235,(vlSelf->mem_wen));
    bufp->chgBit(oldp+236,(((IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_u_type) 
                            | ((0x6fU == (0x7fU & vlSelf->instr)) 
                               | (IData)(vlSelf->my_cpu__DOT__alu_a_sel)))));
    bufp->chgCData(oldp+237,((0x1fU & (vlSelf->instr 
                                       >> 7U))),5);
    bufp->chgCData(oldp+238,((0x1fU & (vlSelf->instr 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+239,((0x1fU & (vlSelf->instr 
                                       >> 0x14U))),5);
    bufp->chgQData(oldp+240,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->instr 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+242,(vlSelf->my_cpu__DOT__my_reg_heap__DOT__registers
                             [(0x1fU & (vlSelf->instr 
                                        >> 0x14U))]),64);
    bufp->chgBit(oldp+244,((0x33U == (0x7fU & vlSelf->instr))));
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
    bufp->chgWData(oldp+245,(__Vtemp_h0a9e5d89__0),130);
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
    bufp->chgWData(oldp+250,(__Vtemp_h73a6fc68__0),130);
    bufp->chgCData(oldp+255,((0x7fU & vlSelf->instr)),7);
    bufp->chgCData(oldp+256,((7U & (vlSelf->instr >> 0xcU))),3);
    bufp->chgCData(oldp+257,((vlSelf->instr >> 0x19U)),7);
    bufp->chgBit(oldp+258,((0x6fU == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+259,((0x23U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+260,((0x37U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+261,((0x17U == (0x7fU & vlSelf->instr))));
    bufp->chgBit(oldp+262,((IData)((0x13U == (0x707fU 
                                              & vlSelf->instr)))));
    bufp->chgBit(oldp+263,((IData)((0x3023U == (0x707fU 
                                                & vlSelf->instr)))));
    bufp->chgBit(oldp+264,((IData)((0x33U == (0xfe00707fU 
                                              & vlSelf->instr)))));
    bufp->chgQData(oldp+265,((((QData)((IData)((- (IData)(
                                                          (vlSelf->instr 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->instr))))),64);
    bufp->chgQData(oldp+267,((((- (QData)((IData)((vlSelf->instr 
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
    bufp->chgQData(oldp+269,((((- (QData)((IData)((vlSelf->instr 
                                                   >> 0x1fU)))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((0xffeU 
                                                            & (vlSelf->instr 
                                                               >> 0x14U)) 
                                                           | (1U 
                                                              & ((~ (IData)(vlSelf->my_cpu__DOT__my_controller__DOT__is_jalr_op)) 
                                                                 & (vlSelf->instr 
                                                                    >> 0x14U)))))))),64);
    bufp->chgQData(oldp+271,((((- (QData)((IData)((1U 
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
    bufp->chgQData(oldp+273,((((- (QData)((IData)((vlSelf->instr 
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
    bufp->chgWData(oldp+275,(__Vtemp_ha7af71ad__0),335);
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
    bufp->chgWData(oldp+286,(__Vtemp_h750abc89__0),264);
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
