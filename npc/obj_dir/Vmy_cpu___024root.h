// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmy_cpu.h for the primary calling header

#ifndef VERILATED_VMY_CPU___024ROOT_H_
#define VERILATED_VMY_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vmy_cpu__Syms;
class Vmy_cpu___024unit;


class Vmy_cpu___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmy_cpu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(mem_wen,0,0);
        CData/*1:0*/ my_cpu__DOT__reg_input_sel;
        CData/*0:0*/ my_cpu__DOT__alu_a_sel;
        CData/*0:0*/ my_cpu__DOT__alu_op;
        CData/*0:0*/ my_cpu__DOT__pc_jump;
        CData/*0:0*/ my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_u_type;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_i_type;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_b_type;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_jalr_op;
        CData/*2:0*/ my_cpu__DOT__my_controller__DOT__imm_type_code;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_IN(instr,31,0);
        IData/*31:0*/ my_cpu__DOT__my_reg_heap__DOT__i;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(rdata,63,0);
        VL_OUT64(wdata,63,0);
        VL_OUT64(instr_raddr,63,0);
        VL_OUT64(data_raddr,63,0);
        VL_OUT64(data_waddr,63,0);
        QData/*63:0*/ my_cpu__DOT__pc;
        QData/*63:0*/ my_cpu__DOT__reg_wdata;
        QData/*63:0*/ my_cpu__DOT__alu_src1;
        QData/*63:0*/ my_cpu__DOT__alu_src2;
        QData/*63:0*/ my_cpu__DOT__alu_dst;
        QData/*63:0*/ my_cpu__DOT__imm;
        QData/*63:0*/ my_cpu__DOT__pc_jump_addr;
        QData/*63:0*/ my_cpu__DOT__b_jump_addr;
        QData/*63:0*/ my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out;
        QData/*63:0*/ my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
        QData/*63:0*/ my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__lut_out;
        QData/*63:0*/ my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__lut_out;
        QData/*63:0*/ my_cpu__DOT__my_pc__DOT__npc;
        QData/*63:0*/ my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out;
        QData/*63:0*/ my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
        QData/*63:0*/ my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__lut_out;
        VlUnpacked<VlWide<3>/*64:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> my_cpu__DOT__reg_input_mux41__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> my_cpu__DOT__jump_sel_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> my_cpu__DOT__my_reg_heap__DOT__registers;
        VlUnpacked<VlWide<3>/*66:0*/, 5> my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 5> my_cpu__DOT__my_controller__DOT__program_counter_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmy_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmy_cpu___024root(Vmy_cpu__Syms* symsp, const char* v__name);
    ~Vmy_cpu___024root();
    VL_UNCOPYABLE(Vmy_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
