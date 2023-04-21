// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmy_cpu__Syms.h"
#include "Vmy_cpu___024unit.h"

extern "C" void npc_trap(long long halt_pc);

VL_INLINE_OPT void Vmy_cpu___024unit____Vdpiimwrap_npc_trap_TOP____024unit(QData/*63:0*/ halt_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmy_cpu___024unit____Vdpiimwrap_npc_trap_TOP____024unit\n"); );
    // Body
    long long halt_pc__Vcvt;
    for (size_t halt_pc__Vidx = 0; halt_pc__Vidx < 1; ++halt_pc__Vidx) halt_pc__Vcvt = halt_pc;
    npc_trap(halt_pc__Vcvt);
}
