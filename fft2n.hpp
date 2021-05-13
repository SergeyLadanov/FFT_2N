/*
    Fast Fourier Transformation
    ====================================================
    Coded by Miroslav Voinarovsky, 2002
    This source is freeware.
*/

#ifndef FFT_HPP_
#define FFT_HPP_

#include "complex.hpp"

/*
  Fast Fourier Transformation
  x: x - array of items
  N: N - number of items in array. Must be odd
  complement: false - normal (direct) transformation, true - reverse transformation
*/
void fft2(Complex* x, int N, bool complement);




#endif
