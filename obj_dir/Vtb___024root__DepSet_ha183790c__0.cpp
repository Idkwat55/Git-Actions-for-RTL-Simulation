// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst_i__0 
        = vlSelf->tb__DOT__rst_i;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__valid_o__0 
        = vlSelf->tb__DOT__valid_o;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb.sv", 
                                           33);
        vlSelf->tb__DOT__clk = (1U & (~ (IData)(vlSelf->tb__DOT__clk)));
    }
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__tb__DOT__dut__DOT__state;
    __Vdly__tb__DOT__dut__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb__DOT__dut__DOT__sum;
    __Vdly__tb__DOT__dut__DOT__sum = 0;
    IData/*31:0*/ __Vdly__tb__DOT__dut__DOT__y;
    __Vdly__tb__DOT__dut__DOT__y = 0;
    IData/*31:0*/ __Vdly__tb__DOT__dut__DOT__z;
    __Vdly__tb__DOT__dut__DOT__z = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__k__v0;
    __Vdlyvval__tb__DOT__dut__DOT__k__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__k__v0;
    __Vdlyvset__tb__DOT__dut__DOT__k__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__k__v1;
    __Vdlyvval__tb__DOT__dut__DOT__k__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__k__v1;
    __Vdlyvset__tb__DOT__dut__DOT__k__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__k__v2;
    __Vdlyvval__tb__DOT__dut__DOT__k__v2 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__k__v3;
    __Vdlyvval__tb__DOT__dut__DOT__k__v3 = 0;
    // Body
    __Vdly__tb__DOT__dut__DOT__z = vlSelf->tb__DOT__dut__DOT__z;
    __Vdly__tb__DOT__dut__DOT__y = vlSelf->tb__DOT__dut__DOT__y;
    __Vdly__tb__DOT__dut__DOT__sum = vlSelf->tb__DOT__dut__DOT__sum;
    __Vdly__tb__DOT__dut__DOT__state = vlSelf->tb__DOT__dut__DOT__state;
    __Vdlyvset__tb__DOT__dut__DOT__k__v0 = 0U;
    __Vdlyvset__tb__DOT__dut__DOT__k__v1 = 0U;
    if (vlSelf->tb__DOT__rst_i) {
        __Vdly__tb__DOT__dut__DOT__state = 0U;
        vlSelf->tb__DOT__valid_o = 0U;
        vlSelf->tb__DOT__result_o = 0ULL;
        __Vdly__tb__DOT__dut__DOT__sum = 0U;
        vlSelf->tb__DOT__dut__DOT__delta = 0x9e3779b9U;
    } else if ((4U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
                vlSelf->tb__DOT__valid_o = 1U;
                vlSelf->tb__DOT__result_o = (((QData)((IData)(vlSelf->tb__DOT__dut__DOT__y)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__z)));
                __Vdly__tb__DOT__dut__DOT__state = 0U;
            } else {
                __Vdly__tb__DOT__dut__DOT__y = (vlSelf->tb__DOT__dut__DOT__y 
                                                - (
                                                   ((VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__dut__DOT__z, 4U) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->tb__DOT__dut__DOT__z, 5U)) 
                                                    + vlSelf->tb__DOT__dut__DOT__z) 
                                                   ^ 
                                                   (vlSelf->tb__DOT__dut__DOT__sum 
                                                    + 
                                                    vlSelf->tb__DOT__dut__DOT__k
                                                    [
                                                    (3U 
                                                     & vlSelf->tb__DOT__dut__DOT__sum)])));
                __Vdly__tb__DOT__dut__DOT__state = 
                    ((0U != vlSelf->tb__DOT__dut__DOT__sum)
                      ? 4U : 7U);
            }
        } else if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
            __Vdly__tb__DOT__dut__DOT__sum = (vlSelf->tb__DOT__dut__DOT__sum 
                                              - vlSelf->tb__DOT__dut__DOT__delta);
            __Vdly__tb__DOT__dut__DOT__state = 6U;
        } else {
            __Vdly__tb__DOT__dut__DOT__z = (vlSelf->tb__DOT__dut__DOT__z 
                                            - (((VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__dut__DOT__y, 4U) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->tb__DOT__dut__DOT__y, 5U)) 
                                                + vlSelf->tb__DOT__dut__DOT__y) 
                                               ^ (vlSelf->tb__DOT__dut__DOT__sum 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__k
                                                  [
                                                  (3U 
                                                   & (vlSelf->tb__DOT__dut__DOT__sum 
                                                      >> 0xbU))])));
            __Vdly__tb__DOT__dut__DOT__state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
            __Vdly__tb__DOT__dut__DOT__z = (vlSelf->tb__DOT__dut__DOT__z 
                                            + (((VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__dut__DOT__y, 4U) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->tb__DOT__dut__DOT__y, 5U)) 
                                                + vlSelf->tb__DOT__dut__DOT__y) 
                                               ^ (vlSelf->tb__DOT__dut__DOT__sum 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__k
                                                  [
                                                  (3U 
                                                   & (vlSelf->tb__DOT__dut__DOT__sum 
                                                      >> 0xbU))])));
            __Vdly__tb__DOT__dut__DOT__state = ((vlSelf->tb__DOT__dut__DOT__sum 
                                                 != vlSelf->tb__DOT__dut__DOT__limit)
                                                 ? 1U
                                                 : 7U);
        } else {
            __Vdly__tb__DOT__dut__DOT__sum = (vlSelf->tb__DOT__dut__DOT__sum 
                                              + vlSelf->tb__DOT__dut__DOT__delta);
            __Vdly__tb__DOT__dut__DOT__state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        __Vdly__tb__DOT__dut__DOT__y = (vlSelf->tb__DOT__dut__DOT__y 
                                        + (((VL_SHIFTL_III(32,32,32, vlSelf->tb__DOT__dut__DOT__z, 4U) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSelf->tb__DOT__dut__DOT__z, 5U)) 
                                            + vlSelf->tb__DOT__dut__DOT__z) 
                                           ^ (vlSelf->tb__DOT__dut__DOT__sum 
                                              + vlSelf->tb__DOT__dut__DOT__k
                                              [(3U 
                                                & vlSelf->tb__DOT__dut__DOT__sum)])));
        __Vdly__tb__DOT__dut__DOT__state = 2U;
    } else {
        vlSelf->tb__DOT__valid_o = 0U;
        if (((IData)(vlSelf->tb__DOT__valid_i) & (IData)(vlSelf->tb__DOT__en_i))) {
            __Vdly__tb__DOT__dut__DOT__y = (IData)(
                                                   (vlSelf->tb__DOT__data_i 
                                                    >> 0x20U));
            __Vdly__tb__DOT__dut__DOT__z = (IData)(vlSelf->tb__DOT__data_i);
            __Vdlyvval__tb__DOT__dut__DOT__k__v0 = 
                vlSelf->tb__DOT__key[3U];
            __Vdlyvset__tb__DOT__dut__DOT__k__v0 = 1U;
            if (vlSelf->tb__DOT__decrypt_i) {
                __Vdly__tb__DOT__dut__DOT__state = 4U;
                __Vdly__tb__DOT__dut__DOT__sum = 0xc6ef3720U;
            } else {
                vlSelf->tb__DOT__dut__DOT__limit = 0xc6ef3720U;
                __Vdly__tb__DOT__dut__DOT__state = 1U;
                __Vdly__tb__DOT__dut__DOT__sum = 0U;
            }
            __Vdlyvval__tb__DOT__dut__DOT__k__v1 = 
                vlSelf->tb__DOT__key[2U];
            __Vdlyvset__tb__DOT__dut__DOT__k__v1 = 1U;
            __Vdlyvval__tb__DOT__dut__DOT__k__v2 = 
                vlSelf->tb__DOT__key[1U];
            __Vdlyvval__tb__DOT__dut__DOT__k__v3 = 
                vlSelf->tb__DOT__key[0U];
        }
    }
    vlSelf->tb__DOT__dut__DOT__state = __Vdly__tb__DOT__dut__DOT__state;
    vlSelf->tb__DOT__dut__DOT__sum = __Vdly__tb__DOT__dut__DOT__sum;
    vlSelf->tb__DOT__dut__DOT__y = __Vdly__tb__DOT__dut__DOT__y;
    vlSelf->tb__DOT__dut__DOT__z = __Vdly__tb__DOT__dut__DOT__z;
    if (__Vdlyvset__tb__DOT__dut__DOT__k__v0) {
        vlSelf->tb__DOT__dut__DOT__k[0U] = __Vdlyvval__tb__DOT__dut__DOT__k__v0;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__k__v1) {
        vlSelf->tb__DOT__dut__DOT__k[1U] = __Vdlyvval__tb__DOT__dut__DOT__k__v1;
        vlSelf->tb__DOT__dut__DOT__k[2U] = __Vdlyvval__tb__DOT__dut__DOT__k__v2;
        vlSelf->tb__DOT__dut__DOT__k[3U] = __Vdlyvval__tb__DOT__dut__DOT__k__v3;
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.resume("@(posedge tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9a1d6c61__0.resume("@([changed] tb.valid_o)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.commit("@(posedge tb.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9a1d6c61__0.commit("@([changed] tb.valid_o)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
