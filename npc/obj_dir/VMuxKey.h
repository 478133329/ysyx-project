// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMUXKEY_H_
#define VERILATED_VMUXKEY_H_  // guard

#include "verilated.h"

class VMuxKey__Syms;
class VMuxKey___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VMuxKey VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VMuxKey__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&memory__02Eclk,0,0);
    VL_IN8(&my_cpu__02Eclk,0,0);
    VL_OUT8(&out,0,0);
    VL_IN8(&key,0,0);
    VL_IN8(&default_out,0,0);
    VL_IN8(&lut,3,0);
    VL_IN8(&wen,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&mem_wen,0,0);
    VL_IN(&memory__02Einstr_raddr,31,0);
    VL_IN(&memory__02Edata_raddr,31,0);
    VL_IN(&memory__02Edata_waddr,31,0);
    VL_IN(&memory__02Ewdata,31,0);
    VL_OUT(&memory__02Einstr,31,0);
    VL_OUT(&memory__02Erdata,31,0);
    VL_IN(&my_cpu__02Einstr,31,0);
    VL_IN(&my_cpu__02Erdata,31,0);
    VL_OUT(&my_cpu__02Ewdata,31,0);
    VL_OUT(&my_cpu__02Einstr_raddr,31,0);
    VL_OUT(&my_cpu__02Edata_raddr,31,0);
    VL_OUT(&my_cpu__02Edata_waddr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VMuxKey___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VMuxKey(VerilatedContext* contextp, const char* name = "TOP");
    explicit VMuxKey(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VMuxKey();
  private:
    VL_UNCOPYABLE(VMuxKey);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard