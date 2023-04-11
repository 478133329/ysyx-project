// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMuxKey.h for the primary calling header

#ifndef VERILATED_VMUXKEY___024ROOT_H_
#define VERILATED_VMUXKEY___024ROOT_H_  // guard

#include "verilated.h"

class VMuxKey__Syms;

class VMuxKey___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(memory__02Eclk,0,0);
        VL_IN8(my_cpu__02Eclk,0,0);
        VL_OUT8(out,0,0);
        VL_IN8(key,0,0);
        VL_IN8(default_out,0,0);
        VL_IN8(lut,3,0);
        VL_IN8(wen,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(mem_wen,0,0);
        CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__reg_wen;
        CData/*0:0*/ my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__my_pc__DOT__jump;
        CData/*0:0*/ my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__hit;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_add_op;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_s_type;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_b_type;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_u_type;
        CData/*0:0*/ my_cpu__DOT__my_controller__DOT__is_j_type;
        CData/*0:0*/ __Vtrigrprev__TOP__memory__02Eclk;
        CData/*0:0*/ __Vtrigrprev__TOP__my_cpu__02Eclk;
        CData/*0:0*/ __VactContinue;
        VL_IN(memory__02Einstr_raddr,31,0);
        VL_IN(memory__02Edata_raddr,31,0);
        VL_IN(memory__02Edata_waddr,31,0);
        VL_IN(memory__02Ewdata,31,0);
        VL_OUT(memory__02Einstr,31,0);
        VL_OUT(memory__02Erdata,31,0);
        VL_IN(my_cpu__02Einstr,31,0);
        VL_IN(my_cpu__02Erdata,31,0);
        VL_OUT(my_cpu__02Ewdata,31,0);
        VL_OUT(my_cpu__02Einstr_raddr,31,0);
        VL_OUT(my_cpu__02Edata_raddr,31,0);
        VL_OUT(my_cpu__02Edata_waddr,31,0);
        IData/*31:0*/ memory__DOT__i;
        IData/*31:0*/ memory__DOT____Vcellout__memory__dout;
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
        VlUnpacked<CData/*1:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 128> memory__DOT__mem;
        VlUnpacked<QData/*32:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> my_cpu__DOT__alu_src1_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> my_cpu__DOT__alu_src2_mux21__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> my_cpu__DOT__my_pc__DOT__program_counter_mux21__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> my_cpu__DOT__my_reg_heap__DOT__registers;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMuxKey__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMuxKey___024root(VMuxKey__Syms* symsp, const char* v__name);
    ~VMuxKey___024root();
    VL_UNCOPYABLE(VMuxKey___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
