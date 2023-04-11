// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmy_cpu.h for the primary calling header

#ifndef VERILATED_VMY_CPU___024ROOT_H_
#define VERILATED_VMY_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vmy_cpu__Syms;

class Vmy_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(mem_wen,0,0);
    CData/*0:0*/ my_cpu__DOT__reg_wen;
    CData/*0:0*/ my_cpu__DOT__alu_b_sel;
    CData/*0:0*/ my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit;
    CData/*0:0*/ my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit;
    CData/*0:0*/ my_cpu__DOT__my_pc__DOT__jump;
    CData/*0:0*/ my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit;
    CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_s_type;
    CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_b_type;
    CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_u_type;
    CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_j_type;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(instr,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(wdata,31,0);
    VL_OUT(instr_raddr,31,0);
    VL_OUT(data_raddr,31,0);
    VL_OUT(data_waddr,31,0);
    IData/*31:0*/ my_cpu__DOT__pc;
    IData/*31:0*/ my_cpu__DOT__alu_src1;
    IData/*31:0*/ my_cpu__DOT__alu_src2;
    IData/*31:0*/ my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__lut_out;
    IData/*31:0*/ my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__lut_out;
    IData/*31:0*/ my_cpu__DOT__my_pc__DOT__jump_addr;
    IData/*31:0*/ my_cpu__DOT__my_pc__DOT__npc;
    IData/*31:0*/ my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__lut_out;
    IData/*31:0*/ my_cpu__DOT__my_reg_heap__DOT__i;
    IData/*31:0*/ my_cpu__DOT__my_reg_heap__DOT____Vcellout__reg_heap_reg__dout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*32:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> my_cpu__DOT__my_reg_heap__DOT__registers;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
