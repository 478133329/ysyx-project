// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmy_cpu.h for the primary calling header

#ifndef VERILATED_VMY_CPU___024UNIT_H_
#define VERILATED_VMY_CPU___024UNIT_H_  // guard

#include "verilated.h"

class Vmy_cpu__Syms;

class Vmy_cpu___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vmy_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmy_cpu___024unit(Vmy_cpu__Syms* symsp, const char* v__name);
    ~Vmy_cpu___024unit();
    VL_UNCOPYABLE(Vmy_cpu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
