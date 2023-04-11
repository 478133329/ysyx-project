// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"

#include "Vmy_cpu__Syms.h"
#include "Vmy_cpu___024root.h"

void Vmy_cpu___024root___ctor_var_reset(Vmy_cpu___024root* vlSelf);

Vmy_cpu___024root::Vmy_cpu___024root(Vmy_cpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmy_cpu___024root___ctor_var_reset(this);
}

void Vmy_cpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmy_cpu___024root::~Vmy_cpu___024root() {
}
