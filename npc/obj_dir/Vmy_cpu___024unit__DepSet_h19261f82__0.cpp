// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmy_cpu__Syms.h"
#include "Vmy_cpu___024unit.h"

extern "C" void call_break(svBit call);

VL_INLINE_OPT void Vmy_cpu___024unit____Vdpiimwrap_call_break_TOP____024unit(CData/*0:0*/ call) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmy_cpu___024unit____Vdpiimwrap_call_break_TOP____024unit\n"); );
    // Body
    svBit call__Vcvt;
    for (size_t call__Vidx = 0; call__Vidx < 1; ++call__Vidx) call__Vcvt = call;
    call_break(call__Vcvt);
}
