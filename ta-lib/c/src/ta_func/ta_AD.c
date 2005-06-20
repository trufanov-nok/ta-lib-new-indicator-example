/* TA-LIB Copyright (c) 1999-2003, Mario Fortier
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

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  120802 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */    namespace TA { namespace Lib {
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */    #include "ta_trace.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AD_Lookback( void )
/* Generated */ 
/* Generated */ #else
/* Generated */ int TA_AD_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert lookback code here. */

   /* This function have no lookback needed. */
   return 0;
}

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/*
 * TA_AD - Chaikin A/D Line
 * 
 * Input  = High, Low, Close, Volume
 * Output = double
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::AD( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<double>^ inHigh,
/* Generated */                                       cli::array<double>^ inLow,
/* Generated */                                       cli::array<double>^ inClose,
/* Generated */                                       cli::array<int>^ inVolume,
/* Generated */                                       [OutAttribute]int^ outBegIdx,
/* Generated */                                       [OutAttribute]int^ outNbElement,
/* Generated */                                       cli::array<double>^  outReal )
/* Generated */ #else
/* Generated */ TA_RetCode TA_AD( int    startIdx,
/* Generated */                   int    endIdx,
/* Generated */                   const double inHigh[],
/* Generated */                   const double inLow[],
/* Generated */                   const double inClose[],
/* Generated */                   const int    inVolume[],
/* Generated */                   int          *outBegIdx,
/* Generated */                   int          *outNbElement,
/* Generated */                   double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   int nbBar, today, outIdx;

   double high, low, close, tmp;
   double ad;

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */ 
/* Generated */    /* Validate the parameters. */
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( !outReal )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Note: Results from this function might vary slightly
    *       from Metastock outputs. The reason being that
    *       Metastock use float instead of double and this
    *       cause a different floating-point precision to 
    *       be used.
    *
    *       For most function, this is not an apparent difference
    *       but for function using large cummulative values (like
    *       this AD function), minor imprecision adds up and becomes
    *       significative.
    *
    *       For better precision, TA-Lib use double in all its 
    *       its calculations.
    */

   /* Default return values */
   nbBar = endIdx-startIdx+1;
   VALUE_HANDLE_DEREF(outNbElement) = nbBar;
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
   outIdx = 0;
   today  = 0;
   outIdx = 0;
   ad = 0.0;

   while( nbBar != 0 )
   {
      high  = inHigh[today];
      low   = inLow[today];
      tmp   = high-low;
      close = inClose[today];

      if( tmp > 0.0 )
         ad += (((close-low)-(high-close))/tmp)*((double)inVolume[today]);
      
      outReal[outIdx++] = ad;

      today++;
      nbBar--;
   }

   return NAMESPACE(TA_RetCode)TA_SUCCESS;
}

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::AD( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<float>^ inHigh,
/* Generated */                                       cli::array<float>^ inLow,
/* Generated */                                       cli::array<float>^ inClose,
/* Generated */                                       cli::array<int>^ inVolume,
/* Generated */                                       [OutAttribute]int^ outBegIdx,
/* Generated */                                       [OutAttribute]int^ outNbElement,
/* Generated */                                       cli::array<double>^  outReal )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_AD( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     const float  inHigh[],
/* Generated */                     const float  inLow[],
/* Generated */                     const float  inClose[],
/* Generated */                     const int    inVolume[],
/* Generated */                     int          *outBegIdx,
/* Generated */                     int          *outNbElement,
/* Generated */                     double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    int nbBar, today, outIdx;
/* Generated */    double high, low, close, tmp;
/* Generated */    double ad;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */     if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     if( !outReal )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */  #endif 
/* Generated */    nbBar = endIdx-startIdx+1;
/* Generated */    VALUE_HANDLE_DEREF(outNbElement) = nbBar;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    today  = 0;
/* Generated */    outIdx = 0;
/* Generated */    ad = 0.0;
/* Generated */    while( nbBar != 0 )
/* Generated */    {
/* Generated */       high  = inHigh[today];
/* Generated */       low   = inLow[today];
/* Generated */       tmp   = high-low;
/* Generated */       close = inClose[today];
/* Generated */       if( tmp > 0.0 )
/* Generated */          ad += (((close-low)-(high-close))/tmp)*((double)inVolume[today]);
/* Generated */       outReal[outIdx++] = ad;
/* Generated */       today++;
/* Generated */       nbBar--;
/* Generated */    }
/* Generated */    return NAMESPACE(TA_RetCode)TA_SUCCESS;
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }} // Close namespace TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

