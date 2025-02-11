/* TA-LIB Copyright (c) 1999-2007, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* Important: This file is automatically generated by gen_code.
 *            Any modification will be lost on next execution
 *            of gen_code.
 *
 * The goal of this file is to build the following global
 * constant:
 *       TA_PerGroupFuncDef
 *       TA_PerGroupSize
 *       TA_TotalNbFunction
 *
 * These constant allows mainly to speed optimize functionality related to
 * sequential access to TA_DefFunc by TA_GroupId (see ta_abstract.c)
 */
#include <stddef.h>
#include "ta_def_ui.h"
#include "ta_abstract.h"

extern const TA_FuncDef TA_DEF_ACCBANDS;
extern const TA_FuncDef TA_DEF_ACOS;
extern const TA_FuncDef TA_DEF_AD;
extern const TA_FuncDef TA_DEF_ADD;
extern const TA_FuncDef TA_DEF_ADOSC;
extern const TA_FuncDef TA_DEF_ADX;
extern const TA_FuncDef TA_DEF_ADXR;
extern const TA_FuncDef TA_DEF_APO;
extern const TA_FuncDef TA_DEF_AROON;
extern const TA_FuncDef TA_DEF_AROONOSC;
extern const TA_FuncDef TA_DEF_ASIN;
extern const TA_FuncDef TA_DEF_ATAN;
extern const TA_FuncDef TA_DEF_ATR;
extern const TA_FuncDef TA_DEF_AVGPRICE;
extern const TA_FuncDef TA_DEF_AVGDEV;
extern const TA_FuncDef TA_DEF_BBANDS;
extern const TA_FuncDef TA_DEF_BETA;
extern const TA_FuncDef TA_DEF_BOP;
extern const TA_FuncDef TA_DEF_CCI;
extern const TA_FuncDef TA_DEF_CDL2CROWS;
extern const TA_FuncDef TA_DEF_CDL3BLACKCROWS;
extern const TA_FuncDef TA_DEF_CDL3INSIDE;
extern const TA_FuncDef TA_DEF_CDL3LINESTRIKE;
extern const TA_FuncDef TA_DEF_CDL3OUTSIDE;
extern const TA_FuncDef TA_DEF_CDL3STARSINSOUTH;
extern const TA_FuncDef TA_DEF_CDL3WHITESOLDIERS;
extern const TA_FuncDef TA_DEF_CDLABANDONEDBABY;
extern const TA_FuncDef TA_DEF_CDLADVANCEBLOCK;
extern const TA_FuncDef TA_DEF_CDLBELTHOLD;
extern const TA_FuncDef TA_DEF_CDLBREAKAWAY;
extern const TA_FuncDef TA_DEF_CDLCLOSINGMARUBOZU;
extern const TA_FuncDef TA_DEF_CDLCONCEALBABYSWALL;
extern const TA_FuncDef TA_DEF_CDLCOUNTERATTACK;
extern const TA_FuncDef TA_DEF_CDLDARKCLOUDCOVER;
extern const TA_FuncDef TA_DEF_CDLDOJI;
extern const TA_FuncDef TA_DEF_CDLDOJISTAR;
extern const TA_FuncDef TA_DEF_CDLDRAGONFLYDOJI;
extern const TA_FuncDef TA_DEF_CDLENGULFING;
extern const TA_FuncDef TA_DEF_CDLEVENINGDOJISTAR;
extern const TA_FuncDef TA_DEF_CDLEVENINGSTAR;
extern const TA_FuncDef TA_DEF_CDLGAPSIDESIDEWHITE;
extern const TA_FuncDef TA_DEF_CDLGRAVESTONEDOJI;
extern const TA_FuncDef TA_DEF_CDLHAMMER;
extern const TA_FuncDef TA_DEF_CDLHANGINGMAN;
extern const TA_FuncDef TA_DEF_CDLHARAMI;
extern const TA_FuncDef TA_DEF_CDLHARAMICROSS;
extern const TA_FuncDef TA_DEF_CDLHIGHWAVE;
extern const TA_FuncDef TA_DEF_CDLHIKKAKE;
extern const TA_FuncDef TA_DEF_CDLHIKKAKEMOD;
extern const TA_FuncDef TA_DEF_CDLHOMINGPIGEON;
extern const TA_FuncDef TA_DEF_CDLIDENTICAL3CROWS;
extern const TA_FuncDef TA_DEF_CDLINNECK;
extern const TA_FuncDef TA_DEF_CDLINVERTEDHAMMER;
extern const TA_FuncDef TA_DEF_CDLKICKING;
extern const TA_FuncDef TA_DEF_CDLKICKINGBYLENGTH;
extern const TA_FuncDef TA_DEF_CDLLADDERBOTTOM;
extern const TA_FuncDef TA_DEF_CDLLONGLEGGEDDOJI;
extern const TA_FuncDef TA_DEF_CDLLONGLINE;
extern const TA_FuncDef TA_DEF_CDLMARUBOZU;
extern const TA_FuncDef TA_DEF_CDLMATCHINGLOW;
extern const TA_FuncDef TA_DEF_CDLMATHOLD;
extern const TA_FuncDef TA_DEF_CDLMORNINGDOJISTAR;
extern const TA_FuncDef TA_DEF_CDLMORNINGSTAR;
extern const TA_FuncDef TA_DEF_CDLONNECK;
extern const TA_FuncDef TA_DEF_CDLPIERCING;
extern const TA_FuncDef TA_DEF_CDLRICKSHAWMAN;
extern const TA_FuncDef TA_DEF_CDLRISEFALL3METHODS;
extern const TA_FuncDef TA_DEF_CDLSEPARATINGLINES;
extern const TA_FuncDef TA_DEF_CDLSHOOTINGSTAR;
extern const TA_FuncDef TA_DEF_CDLSHORTLINE;
extern const TA_FuncDef TA_DEF_CDLSPINNINGTOP;
extern const TA_FuncDef TA_DEF_CDLSTALLEDPATTERN;
extern const TA_FuncDef TA_DEF_CDLSTICKSANDWICH;
extern const TA_FuncDef TA_DEF_CDLTAKURI;
extern const TA_FuncDef TA_DEF_CDLTASUKIGAP;
extern const TA_FuncDef TA_DEF_CDLTHRUSTING;
extern const TA_FuncDef TA_DEF_CDLTRISTAR;
extern const TA_FuncDef TA_DEF_CDLUNIQUE3RIVER;
extern const TA_FuncDef TA_DEF_CDLUPSIDEGAP2CROWS;
extern const TA_FuncDef TA_DEF_CDLXSIDEGAP3METHODS;
extern const TA_FuncDef TA_DEF_CEIL;
extern const TA_FuncDef TA_DEF_CMO;
extern const TA_FuncDef TA_DEF_CORREL;
extern const TA_FuncDef TA_DEF_COS;
extern const TA_FuncDef TA_DEF_COSH;
extern const TA_FuncDef TA_DEF_DEMA;
extern const TA_FuncDef TA_DEF_DIV;
extern const TA_FuncDef TA_DEF_DX;
extern const TA_FuncDef TA_DEF_EMA;
extern const TA_FuncDef TA_DEF_EXP;
extern const TA_FuncDef TA_DEF_FLOOR;
extern const TA_FuncDef TA_DEF_HT_DCPERIOD;
extern const TA_FuncDef TA_DEF_HT_DCPHASE;
extern const TA_FuncDef TA_DEF_HT_PHASOR;
extern const TA_FuncDef TA_DEF_HT_SINE;
extern const TA_FuncDef TA_DEF_HT_TRENDLINE;
extern const TA_FuncDef TA_DEF_HT_TRENDMODE;
extern const TA_FuncDef TA_DEF_IMI;
extern const TA_FuncDef TA_DEF_KAMA;
extern const TA_FuncDef TA_DEF_LINEARREG;
extern const TA_FuncDef TA_DEF_LINEARREG_ANGLE;
extern const TA_FuncDef TA_DEF_LINEARREG_INTERCEPT;
extern const TA_FuncDef TA_DEF_LINEARREG_SLOPE;
extern const TA_FuncDef TA_DEF_LN;
extern const TA_FuncDef TA_DEF_LOG10;
extern const TA_FuncDef TA_DEF_MA;
extern const TA_FuncDef TA_DEF_MACD;
extern const TA_FuncDef TA_DEF_MACDEXT;
extern const TA_FuncDef TA_DEF_MACDFIX;
extern const TA_FuncDef TA_DEF_MAMA;
extern const TA_FuncDef TA_DEF_MAVP;
extern const TA_FuncDef TA_DEF_MAX;
extern const TA_FuncDef TA_DEF_MAXINDEX;
extern const TA_FuncDef TA_DEF_MEDPRICE;
extern const TA_FuncDef TA_DEF_MFI;
extern const TA_FuncDef TA_DEF_MIDPOINT;
extern const TA_FuncDef TA_DEF_MIDPRICE;
extern const TA_FuncDef TA_DEF_MIN;
extern const TA_FuncDef TA_DEF_MININDEX;
extern const TA_FuncDef TA_DEF_MINMAX;
extern const TA_FuncDef TA_DEF_MINMAXINDEX;
extern const TA_FuncDef TA_DEF_MINUS_DI;
extern const TA_FuncDef TA_DEF_MINUS_DM;
extern const TA_FuncDef TA_DEF_MOM;
extern const TA_FuncDef TA_DEF_MULT;
extern const TA_FuncDef TA_DEF_NATR;
extern const TA_FuncDef TA_DEF_OBV;
extern const TA_FuncDef TA_DEF_PLUS_DI;
extern const TA_FuncDef TA_DEF_PLUS_DM;
extern const TA_FuncDef TA_DEF_PPO;
extern const TA_FuncDef TA_DEF_ROC;
extern const TA_FuncDef TA_DEF_ROCP;
extern const TA_FuncDef TA_DEF_ROCR;
extern const TA_FuncDef TA_DEF_ROCR100;
extern const TA_FuncDef TA_DEF_RSI;
extern const TA_FuncDef TA_DEF_SAR;
extern const TA_FuncDef TA_DEF_SAREXT;
extern const TA_FuncDef TA_DEF_SIN;
extern const TA_FuncDef TA_DEF_SINH;
extern const TA_FuncDef TA_DEF_SMA;
extern const TA_FuncDef TA_DEF_SQRT;
extern const TA_FuncDef TA_DEF_STDDEV;
extern const TA_FuncDef TA_DEF_STOCH;
extern const TA_FuncDef TA_DEF_STOCHF;
extern const TA_FuncDef TA_DEF_STOCHRSI;
extern const TA_FuncDef TA_DEF_SUB;
extern const TA_FuncDef TA_DEF_SUM;
extern const TA_FuncDef TA_DEF_T3;
extern const TA_FuncDef TA_DEF_TAN;
extern const TA_FuncDef TA_DEF_TANH;
extern const TA_FuncDef TA_DEF_TEMA;
extern const TA_FuncDef TA_DEF_TRANGE;
extern const TA_FuncDef TA_DEF_TRIMA;
extern const TA_FuncDef TA_DEF_TRIX;
extern const TA_FuncDef TA_DEF_TSF;
extern const TA_FuncDef TA_DEF_TSV;
extern const TA_FuncDef TA_DEF_TYPPRICE;
extern const TA_FuncDef TA_DEF_ULTOSC;
extern const TA_FuncDef TA_DEF_VAR;
extern const TA_FuncDef TA_DEF_WCLPRICE;
extern const TA_FuncDef TA_DEF_WILLR;
extern const TA_FuncDef TA_DEF_WMA;

const TA_FuncDef *TA_PerGroupFunc_0[] = {
&TA_DEF_ADD,
&TA_DEF_DIV,
&TA_DEF_MAX,
&TA_DEF_MAXINDEX,
&TA_DEF_MIN,
&TA_DEF_MININDEX,
&TA_DEF_MINMAX,
&TA_DEF_MINMAXINDEX,
&TA_DEF_MULT,
&TA_DEF_SUB,
&TA_DEF_SUM,
NULL };
#define SIZE_GROUP_0 ((sizeof(TA_PerGroupFunc_0)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_1[] = {
&TA_DEF_ACOS,
&TA_DEF_ASIN,
&TA_DEF_ATAN,
&TA_DEF_CEIL,
&TA_DEF_COS,
&TA_DEF_COSH,
&TA_DEF_EXP,
&TA_DEF_FLOOR,
&TA_DEF_LN,
&TA_DEF_LOG10,
&TA_DEF_SIN,
&TA_DEF_SINH,
&TA_DEF_SQRT,
&TA_DEF_TAN,
&TA_DEF_TANH,
NULL };
#define SIZE_GROUP_1 ((sizeof(TA_PerGroupFunc_1)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_2[] = {
&TA_DEF_ACCBANDS,
&TA_DEF_BBANDS,
&TA_DEF_DEMA,
&TA_DEF_EMA,
&TA_DEF_HT_TRENDLINE,
&TA_DEF_KAMA,
&TA_DEF_MA,
&TA_DEF_MAMA,
&TA_DEF_MAVP,
&TA_DEF_MIDPOINT,
&TA_DEF_MIDPRICE,
&TA_DEF_SAR,
&TA_DEF_SAREXT,
&TA_DEF_SMA,
&TA_DEF_T3,
&TA_DEF_TEMA,
&TA_DEF_TRIMA,
&TA_DEF_WMA,
NULL };
#define SIZE_GROUP_2 ((sizeof(TA_PerGroupFunc_2)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_3[] = {
&TA_DEF_ATR,
&TA_DEF_NATR,
&TA_DEF_TRANGE,
NULL };
#define SIZE_GROUP_3 ((sizeof(TA_PerGroupFunc_3)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_4[] = {
&TA_DEF_ADX,
&TA_DEF_ADXR,
&TA_DEF_APO,
&TA_DEF_AROON,
&TA_DEF_AROONOSC,
&TA_DEF_BOP,
&TA_DEF_CCI,
&TA_DEF_CMO,
&TA_DEF_DX,
&TA_DEF_IMI,
&TA_DEF_MACD,
&TA_DEF_MACDEXT,
&TA_DEF_MACDFIX,
&TA_DEF_MFI,
&TA_DEF_MINUS_DI,
&TA_DEF_MINUS_DM,
&TA_DEF_MOM,
&TA_DEF_PLUS_DI,
&TA_DEF_PLUS_DM,
&TA_DEF_PPO,
&TA_DEF_ROC,
&TA_DEF_ROCP,
&TA_DEF_ROCR,
&TA_DEF_ROCR100,
&TA_DEF_RSI,
&TA_DEF_STOCH,
&TA_DEF_STOCHF,
&TA_DEF_STOCHRSI,
&TA_DEF_TRIX,
&TA_DEF_ULTOSC,
&TA_DEF_WILLR,
NULL };
#define SIZE_GROUP_4 ((sizeof(TA_PerGroupFunc_4)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_5[] = {
&TA_DEF_HT_DCPERIOD,
&TA_DEF_HT_DCPHASE,
&TA_DEF_HT_PHASOR,
&TA_DEF_HT_SINE,
&TA_DEF_HT_TRENDMODE,
NULL };
#define SIZE_GROUP_5 ((sizeof(TA_PerGroupFunc_5)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_6[] = {
&TA_DEF_AD,
&TA_DEF_ADOSC,
&TA_DEF_OBV,
NULL };
#define SIZE_GROUP_6 ((sizeof(TA_PerGroupFunc_6)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_7[] = {
&TA_DEF_CDL2CROWS,
&TA_DEF_CDL3BLACKCROWS,
&TA_DEF_CDL3INSIDE,
&TA_DEF_CDL3LINESTRIKE,
&TA_DEF_CDL3OUTSIDE,
&TA_DEF_CDL3STARSINSOUTH,
&TA_DEF_CDL3WHITESOLDIERS,
&TA_DEF_CDLABANDONEDBABY,
&TA_DEF_CDLADVANCEBLOCK,
&TA_DEF_CDLBELTHOLD,
&TA_DEF_CDLBREAKAWAY,
&TA_DEF_CDLCLOSINGMARUBOZU,
&TA_DEF_CDLCONCEALBABYSWALL,
&TA_DEF_CDLCOUNTERATTACK,
&TA_DEF_CDLDARKCLOUDCOVER,
&TA_DEF_CDLDOJI,
&TA_DEF_CDLDOJISTAR,
&TA_DEF_CDLDRAGONFLYDOJI,
&TA_DEF_CDLENGULFING,
&TA_DEF_CDLEVENINGDOJISTAR,
&TA_DEF_CDLEVENINGSTAR,
&TA_DEF_CDLGAPSIDESIDEWHITE,
&TA_DEF_CDLGRAVESTONEDOJI,
&TA_DEF_CDLHAMMER,
&TA_DEF_CDLHANGINGMAN,
&TA_DEF_CDLHARAMI,
&TA_DEF_CDLHARAMICROSS,
&TA_DEF_CDLHIGHWAVE,
&TA_DEF_CDLHIKKAKE,
&TA_DEF_CDLHIKKAKEMOD,
&TA_DEF_CDLHOMINGPIGEON,
&TA_DEF_CDLIDENTICAL3CROWS,
&TA_DEF_CDLINNECK,
&TA_DEF_CDLINVERTEDHAMMER,
&TA_DEF_CDLKICKING,
&TA_DEF_CDLKICKINGBYLENGTH,
&TA_DEF_CDLLADDERBOTTOM,
&TA_DEF_CDLLONGLEGGEDDOJI,
&TA_DEF_CDLLONGLINE,
&TA_DEF_CDLMARUBOZU,
&TA_DEF_CDLMATCHINGLOW,
&TA_DEF_CDLMATHOLD,
&TA_DEF_CDLMORNINGDOJISTAR,
&TA_DEF_CDLMORNINGSTAR,
&TA_DEF_CDLONNECK,
&TA_DEF_CDLPIERCING,
&TA_DEF_CDLRICKSHAWMAN,
&TA_DEF_CDLRISEFALL3METHODS,
&TA_DEF_CDLSEPARATINGLINES,
&TA_DEF_CDLSHOOTINGSTAR,
&TA_DEF_CDLSHORTLINE,
&TA_DEF_CDLSPINNINGTOP,
&TA_DEF_CDLSTALLEDPATTERN,
&TA_DEF_CDLSTICKSANDWICH,
&TA_DEF_CDLTAKURI,
&TA_DEF_CDLTASUKIGAP,
&TA_DEF_CDLTHRUSTING,
&TA_DEF_CDLTRISTAR,
&TA_DEF_CDLUNIQUE3RIVER,
&TA_DEF_CDLUPSIDEGAP2CROWS,
&TA_DEF_CDLXSIDEGAP3METHODS,
NULL };
#define SIZE_GROUP_7 ((sizeof(TA_PerGroupFunc_7)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_8[] = {
&TA_DEF_BETA,
&TA_DEF_CORREL,
&TA_DEF_LINEARREG,
&TA_DEF_LINEARREG_ANGLE,
&TA_DEF_LINEARREG_INTERCEPT,
&TA_DEF_LINEARREG_SLOPE,
&TA_DEF_STDDEV,
&TA_DEF_TSF,
&TA_DEF_TSV,
&TA_DEF_VAR,
NULL };
#define SIZE_GROUP_8 ((sizeof(TA_PerGroupFunc_8)/sizeof(const TA_FuncDef *))-1)

const TA_FuncDef *TA_PerGroupFunc_9[] = {
&TA_DEF_AVGPRICE,
&TA_DEF_AVGDEV,
&TA_DEF_MEDPRICE,
&TA_DEF_TYPPRICE,
&TA_DEF_WCLPRICE,
NULL };
#define SIZE_GROUP_9 ((sizeof(TA_PerGroupFunc_9)/sizeof(const TA_FuncDef *))-1)
/* Generated */ const TA_FuncDef **TA_PerGroupFuncDef[10] = {
&TA_PerGroupFunc_0[0],
&TA_PerGroupFunc_1[0],
&TA_PerGroupFunc_2[0],
&TA_PerGroupFunc_3[0],
&TA_PerGroupFunc_4[0],
&TA_PerGroupFunc_5[0],
&TA_PerGroupFunc_6[0],
&TA_PerGroupFunc_7[0],
&TA_PerGroupFunc_8[0],
&TA_PerGroupFunc_9[0]
/* Generated */ };

/* Generated */ const unsigned int TA_PerGroupSize[10] = {
SIZE_GROUP_0,
SIZE_GROUP_1,
SIZE_GROUP_2,
SIZE_GROUP_3,
SIZE_GROUP_4,
SIZE_GROUP_5,
SIZE_GROUP_6,
SIZE_GROUP_7,
SIZE_GROUP_8,
SIZE_GROUP_9
/* Generated */ };

/* Generated */ const unsigned int TA_TotalNbFunction =
SIZE_GROUP_0+
SIZE_GROUP_1+
SIZE_GROUP_2+
SIZE_GROUP_3+
SIZE_GROUP_4+
SIZE_GROUP_5+
SIZE_GROUP_6+
SIZE_GROUP_7+
SIZE_GROUP_8+
SIZE_GROUP_9;

/***************/
/* End of File */
/***************/
