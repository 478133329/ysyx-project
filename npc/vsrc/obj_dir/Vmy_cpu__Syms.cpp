// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmy_cpu__Syms.h"
#include "Vmy_cpu.h"
#include "Vmy_cpu___024root.h"

// FUNCTIONS
Vmy_cpu__Syms::~Vmy_cpu__Syms()
{
}

Vmy_cpu__Syms::Vmy_cpu__Syms(VerilatedContext* contextp, const char* namep, Vmy_cpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
