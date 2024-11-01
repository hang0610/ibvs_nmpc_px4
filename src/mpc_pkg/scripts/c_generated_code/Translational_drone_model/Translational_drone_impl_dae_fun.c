/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) Translational_drone_impl_dae_fun_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

void casadi_copy(const casadi_real* x, casadi_int n, casadi_real* y) {
  casadi_int i;
  if (y) {
    if (x) {
      for (i=0; i<n; ++i) *y++ = *x++;
    } else {
      for (i=0; i<n; ++i) *y++ = 0.;
    }
  }
}

static const casadi_int casadi_s0[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s1[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s2[3] = {0, 0, 0};

/* Translational_drone_impl_dae_fun:(i0[10],i1[10],i2[4],i3[],i4[])->(o0[10]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_int i;
  casadi_real *rr;
  const casadi_real *cs;
  casadi_real w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, *w10=w+10, w11, w12, w13, w14, w15, *w16=w+25;
  /* #0: @0 = input[1][0] */
  w0 = arg[1] ? arg[1][0] : 0;
  /* #1: @1 = input[1][1] */
  w1 = arg[1] ? arg[1][1] : 0;
  /* #2: @2 = input[1][2] */
  w2 = arg[1] ? arg[1][2] : 0;
  /* #3: @3 = input[1][3] */
  w3 = arg[1] ? arg[1][3] : 0;
  /* #4: @4 = input[1][4] */
  w4 = arg[1] ? arg[1][4] : 0;
  /* #5: @5 = input[1][5] */
  w5 = arg[1] ? arg[1][5] : 0;
  /* #6: @6 = input[1][6] */
  w6 = arg[1] ? arg[1][6] : 0;
  /* #7: @7 = input[1][7] */
  w7 = arg[1] ? arg[1][7] : 0;
  /* #8: @8 = input[1][8] */
  w8 = arg[1] ? arg[1][8] : 0;
  /* #9: @9 = input[1][9] */
  w9 = arg[1] ? arg[1][9] : 0;
  /* #10: @10 = vertcat(@0, @1, @2, @3, @4, @5, @6, @7, @8, @9) */
  rr=w10;
  *rr++ = w0;
  *rr++ = w1;
  *rr++ = w2;
  *rr++ = w3;
  *rr++ = w4;
  *rr++ = w5;
  *rr++ = w6;
  *rr++ = w7;
  *rr++ = w8;
  *rr++ = w9;
  /* #11: @0 = input[0][7] */
  w0 = arg[0] ? arg[0][7] : 0;
  /* #12: @1 = input[0][8] */
  w1 = arg[0] ? arg[0][8] : 0;
  /* #13: @2 = input[0][9] */
  w2 = arg[0] ? arg[0][9] : 0;
  /* #14: @3 = 0.5 */
  w3 = 5.0000000000000000e-01;
  /* #15: @4 = input[2][1] */
  w4 = arg[2] ? arg[2][1] : 0;
  /* #16: @5 = input[0][4] */
  w5 = arg[0] ? arg[0][4] : 0;
  /* #17: @6 = (@4*@5) */
  w6  = (w4*w5);
  /* #18: @6 = (-@6) */
  w6 = (- w6 );
  /* #19: @7 = input[2][2] */
  w7 = arg[2] ? arg[2][2] : 0;
  /* #20: @8 = input[0][5] */
  w8 = arg[0] ? arg[0][5] : 0;
  /* #21: @9 = (@7*@8) */
  w9  = (w7*w8);
  /* #22: @6 = (@6-@9) */
  w6 -= w9;
  /* #23: @9 = input[2][3] */
  w9 = arg[2] ? arg[2][3] : 0;
  /* #24: @11 = input[0][6] */
  w11 = arg[0] ? arg[0][6] : 0;
  /* #25: @12 = (@9*@11) */
  w12  = (w9*w11);
  /* #26: @6 = (@6-@12) */
  w6 -= w12;
  /* #27: @3 = (@3*@6) */
  w3 *= w6;
  /* #28: @6 = 0.5 */
  w6 = 5.0000000000000000e-01;
  /* #29: @12 = input[0][3] */
  w12 = arg[0] ? arg[0][3] : 0;
  /* #30: @13 = (@4*@12) */
  w13  = (w4*w12);
  /* #31: @14 = (@9*@8) */
  w14  = (w9*w8);
  /* #32: @13 = (@13+@14) */
  w13 += w14;
  /* #33: @14 = (@7*@11) */
  w14  = (w7*w11);
  /* #34: @13 = (@13-@14) */
  w13 -= w14;
  /* #35: @6 = (@6*@13) */
  w6 *= w13;
  /* #36: @13 = 0.5 */
  w13 = 5.0000000000000000e-01;
  /* #37: @14 = (@7*@12) */
  w14  = (w7*w12);
  /* #38: @15 = (@9*@5) */
  w15  = (w9*w5);
  /* #39: @14 = (@14-@15) */
  w14 -= w15;
  /* #40: @15 = (@4*@11) */
  w15  = (w4*w11);
  /* #41: @14 = (@14+@15) */
  w14 += w15;
  /* #42: @13 = (@13*@14) */
  w13 *= w14;
  /* #43: @14 = 0.5 */
  w14 = 5.0000000000000000e-01;
  /* #44: @9 = (@9*@12) */
  w9 *= w12;
  /* #45: @7 = (@7*@5) */
  w7 *= w5;
  /* #46: @9 = (@9+@7) */
  w9 += w7;
  /* #47: @4 = (@4*@8) */
  w4 *= w8;
  /* #48: @9 = (@9-@4) */
  w9 -= w4;
  /* #49: @14 = (@14*@9) */
  w14 *= w9;
  /* #50: @9 = (@12*@8) */
  w9  = (w12*w8);
  /* #51: @4 = (@5*@11) */
  w4  = (w5*w11);
  /* #52: @9 = (@9+@4) */
  w9 += w4;
  /* #53: @9 = (2.*@9) */
  w9 = (2.* w9 );
  /* #54: @4 = input[2][0] */
  w4 = arg[2] ? arg[2][0] : 0;
  /* #55: @9 = (@9*@4) */
  w9 *= w4;
  /* #56: @11 = (@8*@11) */
  w11  = (w8*w11);
  /* #57: @12 = (@12*@5) */
  w12 *= w5;
  /* #58: @11 = (@11-@12) */
  w11 -= w12;
  /* #59: @11 = (2.*@11) */
  w11 = (2.* w11 );
  /* #60: @11 = (@11*@4) */
  w11 *= w4;
  /* #61: @12 = 1 */
  w12 = 1.;
  /* #62: @7 = (2.*@5) */
  w7 = (2.* w5 );
  /* #63: @7 = (@7*@5) */
  w7 *= w5;
  /* #64: @12 = (@12-@7) */
  w12 -= w7;
  /* #65: @7 = (2.*@8) */
  w7 = (2.* w8 );
  /* #66: @7 = (@7*@8) */
  w7 *= w8;
  /* #67: @12 = (@12-@7) */
  w12 -= w7;
  /* #68: @12 = (@12*@4) */
  w12 *= w4;
  /* #69: @4 = 9.81 */
  w4 = 9.8100000000000005e+00;
  /* #70: @12 = (@12-@4) */
  w12 -= w4;
  /* #71: @16 = vertcat(@0, @1, @2, @3, @6, @13, @14, @9, @11, @12) */
  rr=w16;
  *rr++ = w0;
  *rr++ = w1;
  *rr++ = w2;
  *rr++ = w3;
  *rr++ = w6;
  *rr++ = w13;
  *rr++ = w14;
  *rr++ = w9;
  *rr++ = w11;
  *rr++ = w12;
  /* #72: @10 = (@10-@16) */
  for (i=0, rr=w10, cs=w16; i<10; ++i) (*rr++) -= (*cs++);
  /* #73: output[0][0] = @10 */
  casadi_copy(w10, 10, res[0]);
  return 0;
}

CASADI_SYMBOL_EXPORT int Translational_drone_impl_dae_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Translational_drone_impl_dae_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Translational_drone_impl_dae_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Translational_drone_impl_dae_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Translational_drone_impl_dae_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Translational_drone_impl_dae_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Translational_drone_impl_dae_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void Translational_drone_impl_dae_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Translational_drone_impl_dae_fun_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int Translational_drone_impl_dae_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real Translational_drone_impl_dae_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Translational_drone_impl_dae_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Translational_drone_impl_dae_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Translational_drone_impl_dae_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    case 4: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Translational_drone_impl_dae_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Translational_drone_impl_dae_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 15;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 35;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
