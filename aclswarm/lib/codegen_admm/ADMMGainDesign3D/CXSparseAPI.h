/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CXSparseAPI.h
 *
 * Code generation for function 'CXSparseAPI'
 *
 */

#ifndef CXSPARSEAPI_H
#define CXSPARSEAPI_H

/* Include files */
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "ADMMGainDesign3D_types.h"

/* Function Declarations */
extern void CXSparseAPI_iteratedQR(const emxArray_real_T *A_d, const
  emxArray_int32_T *A_colidx, const emxArray_int32_T *A_rowidx, int A_m, int A_n,
  const emxArray_real_T *b_d, const emxArray_int32_T *b_colidx, const
  emxArray_int32_T *b_rowidx, int b_m, int n, coder_internal_sparse_1 *out);

#endif

/* End of code generation (CXSparseAPI.h) */
