// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst_i;
    CData/*0:0*/ tb__DOT__valid_i;
    CData/*0:0*/ tb__DOT__en_i;
    CData/*0:0*/ tb__DOT__decrypt_i;
    CData/*0:0*/ tb__DOT__valid_o;
    CData/*2:0*/ tb__DOT__dut__DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__valid_o__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VlWide<4>/*127:0*/ tb__DOT__key;
    IData/*31:0*/ tb__DOT__dut__DOT__y;
    IData/*31:0*/ tb__DOT__dut__DOT__z;
    IData/*31:0*/ tb__DOT__dut__DOT__limit;
    IData/*31:0*/ tb__DOT__dut__DOT__sum;
    IData/*31:0*/ tb__DOT__dut__DOT__delta;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb__DOT__data_i;
    QData/*63:0*/ tb__DOT__result_o;
    VlUnpacked<QData/*63:0*/, 8> tb__DOT__random_test__Vstatic__data_mem;
    VlUnpacked<QData/*63:0*/, 8> tb__DOT__random_test__Vstatic__enc_mem;
    VlUnpacked<QData/*63:0*/, 30> tb__DOT__directed_data_test__Vstatic__data_cases;
    VlUnpacked<QData/*63:0*/, 30> tb__DOT__directed_data_test__Vstatic__enc_mem;
    VlUnpacked<VlWide<4>/*127:0*/, 30> tb__DOT__directed_key_test__Vstatic__key_cases;
    VlUnpacked<QData/*63:0*/, 30> tb__DOT__directed_key_test__Vstatic__enc_mem;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__k;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8aadc0b9__0;
    VlTriggerScheduler __VtrigSched_h9a1d6c61__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
