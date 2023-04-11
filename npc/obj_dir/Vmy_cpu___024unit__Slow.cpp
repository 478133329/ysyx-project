// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmy_cpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmy_cpu__Syms.h"
#include "Vmy_cpu___024unit.h"

void Vmy_cpu___024unit___ctor_var_reset(Vmy_cpu___024unit* vlSelf);

Vmy_cpu___024unit::Vmy_cpu___024unit(Vmy_cpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmy_cpu___024unit___ctor_var_reset(this);
}

void Vmy_cpu___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmy_cpu___024unit::~Vmy_cpu___024unit() {
}
