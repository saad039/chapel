/* Intel Pentium-4 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2005, 2007-2010, 2014 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 2600 MHz P4 Northwood */
/* FFT tuning limit = 12500000 */
/* Generated by tuneup.c, 2014-03-12, gcc 4.2 */

#define MOD_1_NORM_THRESHOLD                24
#define MOD_1_UNNORM_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          6
#define MOD_1U_TO_MOD_1_1_THRESHOLD          5
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        13
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      2
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1N_PI1_METHOD                 2
#define DIV_QR_1_NORM_THRESHOLD             19
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           20

#define MUL_TOOM22_THRESHOLD                29
#define MUL_TOOM33_THRESHOLD               113
#define MUL_TOOM44_THRESHOLD               288
#define MUL_TOOM6H_THRESHOLD               454
#define MUL_TOOM8H_THRESHOLD               592

#define MUL_TOOM32_TO_TOOM43_THRESHOLD     118
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     214
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     193
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     186
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     287

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 44
#define SQR_TOOM3_THRESHOLD                173
#define SQR_TOOM4_THRESHOLD                390
#define SQR_TOOM6_THRESHOLD                  0  /* always */
#define SQR_TOOM8_THRESHOLD                915

#define MULMID_TOOM42_THRESHOLD             66

#define MULMOD_BNM1_THRESHOLD               19
#define SQRMOD_BNM1_THRESHOLD               23

#define MUL_FFT_MODF_THRESHOLD            1147  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {   1147, 5}, {     36, 6}, {     19, 5}, {     39, 6}, \
    {     27, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     35, 7}, {     19, 6}, {     40, 7}, {     21, 6}, \
    {     43, 7}, {     23, 6}, {     49, 7}, {     27, 6}, \
    {     55, 7}, {     31, 6}, {     63, 7}, {     35, 8}, \
    {     19, 7}, {     43, 8}, {     23, 7}, {     51, 8}, \
    {     27, 7}, {     55, 8}, {     31, 7}, {     63, 8}, \
    {     39, 7}, {     79, 8}, {     43, 9}, {     23, 8}, \
    {     55, 9}, {     31, 8}, {     71, 9}, {     39, 8}, \
    {     79, 9}, {     47, 8}, {     95, 9}, {     55,10}, \
    {     31, 9}, {     63, 8}, {    127, 9}, {     79,10}, \
    {     47, 9}, {    111,11}, {     31,10}, {     63, 9}, \
    {    143,10}, {     79, 9}, {    159,10}, {    111,11}, \
    {     63,10}, {    127, 9}, {    255,10}, {    159, 9}, \
    {    319,11}, {     95,10}, {    207,12}, {     63,11}, \
    {    127,10}, {    287,11}, {    159,10}, {    335,11}, \
    {    191,10}, {    383,11}, {    223,12}, {    127,11}, \
    {    255,10}, {    511,11}, {    319,10}, {    671,11}, \
    {    351,12}, {    191,11}, {    383,10}, {    799,13}, \
    {    127,12}, {    255,11}, {    511,10}, {   1055, 9}, \
    {   2111,10}, {   1119, 9}, {   2239,11}, {    607,12}, \
    {    319,11}, {    671,10}, {   1407,11}, {    735,10}, \
    {   1471, 9}, {   2943,12}, {    383,11}, {    799,10}, \
    {   1599,11}, {    863,10}, {   1727, 9}, {   3455,12}, \
    {    447,11}, {    895,13}, {    255,12}, {    511,11}, \
    {   1055,10}, {   2111,11}, {   1119,10}, {   2239, 9}, \
    {   4479,12}, {    575,11}, {   1247,10}, {   2495, 9}, \
    {   4991,12}, {    639,11}, {   1471,10}, {   2943,13}, \
    {    383,12}, {    767,11}, {   1599,12}, {    831,11}, \
    {   1727,10}, {   3455,12}, {    895,14}, {    255,13}, \
    {    511,12}, {   1023,11}, {   2047,12}, {   1087,11}, \
    {   2239,10}, {   4479,12}, {   1215,11}, {   2495,10}, \
    {   4991,13}, {    639,12}, {   1471,11}, {   2943,10}, \
    {   5887,11}, {   3007,13}, {    767,12}, {   1727,11}, \
    {   3455,13}, {    895,12}, {   1791,11}, {   3711,12}, \
    {   1983,11}, {   3967,10}, {   7935,14}, {    511,13}, \
    {   1023,12}, {   2239,11}, {   4479,13}, {   1151,12}, \
    {   2495,11}, {   4991,13}, {   1279,12}, {   2623,13}, \
    {   1407,12}, {   2943,11}, {   5887,12}, {   3007,14}, \
    {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 158
#define MUL_FFT_THRESHOLD                 7808

#define SQR_FFT_MODF_THRESHOLD             896  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    896, 5}, {     28, 6}, {     15, 5}, {     33, 6}, \
    {     17, 5}, {     35, 6}, {     19, 5}, {     39, 6}, \
    {     27, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     36, 7}, {     19, 6}, {     39, 7}, {     23, 6}, \
    {     47, 7}, {     27, 6}, {     55, 7}, {     31, 6}, \
    {     63, 7}, {     37, 8}, {     19, 7}, {     43, 8}, \
    {     23, 7}, {     51, 8}, {     27, 7}, {     55, 8}, \
    {     31, 7}, {     63, 8}, {     39, 7}, {     79, 8}, \
    {     43, 9}, {     23, 8}, {     55, 9}, {     31, 8}, \
    {     71, 9}, {     39, 8}, {     79, 9}, {     47, 8}, \
    {     95, 9}, {     55,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    127,10}, {     79, 9}, {    159,10}, {     95, 9}, \
    {    191,11}, {     63,10}, {    127, 9}, {    255,10}, \
    {    159,11}, {     95,10}, {    191,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,10}, {    271, 9}, \
    {    543,11}, {    159,10}, {    319, 9}, {    639,11}, \
    {    191,10}, {    383, 9}, {    767,11}, {    223,12}, \
    {    127,11}, {    255,10}, {    511, 9}, {   1055,10}, \
    {    543,11}, {    287,10}, {    607,11}, {    319,12}, \
    {    191,11}, {    383,10}, {    767,13}, {    127,12}, \
    {    255,11}, {    511,10}, {   1055,11}, {    543,10}, \
    {   1119, 9}, {   2239,11}, {    607,12}, {    319,11}, \
    {    671,10}, {   1407,11}, {    735,10}, {   1471, 9}, \
    {   2943,12}, {    383,11}, {    799,10}, {   1599,11}, \
    {    863,10}, {   1727,12}, {    447,11}, {    991,13}, \
    {    255,12}, {    511,11}, {   1055,10}, {   2111,11}, \
    {   1119,10}, {   2239,12}, {    575,11}, {   1247,10}, \
    {   2495,12}, {    639,11}, {   1471,10}, {   2943,13}, \
    {    383,12}, {    767,11}, {   1599,12}, {    831,11}, \
    {   1727,10}, {   3455,12}, {    959,14}, {    255,13}, \
    {    511,12}, {   1023,11}, {   2111,12}, {   1087,11}, \
    {   2239,10}, {   4479,12}, {   1215,11}, {   2495,13}, \
    {    639,12}, {   1471,11}, {   2943,10}, {   5887,13}, \
    {    767,12}, {   1727,11}, {   3455,13}, {    895,12}, \
    {   1791,11}, {   3711,12}, {   1983,11}, {   3967,10}, \
    {   7935,14}, {    511,13}, {   1023,12}, {   2239,11}, \
    {   4479,13}, {   1151,12}, {   2495,11}, {   4991,13}, \
    {   1279,12}, {   2623,13}, {   1407,12}, {   2943,11}, \
    {   5887,14}, {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 159
#define SQR_FFT_THRESHOLD                 7296

#define MULLO_BASECASE_THRESHOLD            12
#define MULLO_DC_THRESHOLD                  55
#define MULLO_MUL_N_THRESHOLD            14709

#define DC_DIV_QR_THRESHOLD                 38
#define DC_DIVAPPR_Q_THRESHOLD              77
#define DC_BDIV_QR_THRESHOLD                51
#define DC_BDIV_Q_THRESHOLD                 85

#define INV_MULMOD_BNM1_THRESHOLD           56
#define INV_NEWTON_THRESHOLD               121
#define INV_APPR_THRESHOLD                  93

#define BINV_NEWTON_THRESHOLD              366
#define REDC_1_TO_REDC_N_THRESHOLD          64

#define MU_DIV_QR_THRESHOLD               2350
#define MU_DIVAPPR_Q_THRESHOLD            2172
#define MUPI_DIV_QR_THRESHOLD               62
#define MU_BDIV_QR_THRESHOLD              2172
#define MU_BDIV_Q_THRESHOLD               2304

#define POWM_SEC_TABLE  1,19,102,615,2111

#define MATRIX22_STRASSEN_THRESHOLD         23
#define HGCD_THRESHOLD                      88
#define HGCD_APPR_THRESHOLD                 93
#define HGCD_REDUCE_THRESHOLD             5010
#define GCD_DC_THRESHOLD                   379
#define GCDEXT_DC_THRESHOLD                258
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        26
#define SET_STR_DC_THRESHOLD               147
#define SET_STR_PRECOMPUTE_THRESHOLD       894

#define FAC_DSC_THRESHOLD                  906
#define FAC_ODD_THRESHOLD                   28