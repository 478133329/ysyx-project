// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMY_CPU__DPI_H_
#define VERILATED_VMY_CPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/wangsijie/workspace/ysyx-workbench/npc/vsrc/my_cpu.v:1:30
    extern void npc_trap(long long halt_pc);

#ifdef __cplusplus
}
#endif

#endif  // guard
