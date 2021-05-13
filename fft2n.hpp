/*
    Fast Fourier Transformation
    ====================================================
    Coded by Miroslav Voinarovsky, 2002
    This source is freeware.
*/

#ifndef FFT2N_HPP_
#define FFT2N_HPP_

#include "complex.hpp"

/*
  Fast Fourier Transformation
  x: x - array of items
  N: N - number of items in array. Must be odd
  complement: false - normal (direct) transformation, true - reverse transformation
*/


class FFT2N
{
public:
    static void Transform(Complex* x, int N, bool complement);
private:
    static Complex* CreateWstore(unsigned int L, bool complement);
    static bool Step(Complex* x, unsigned int T, unsigned int M, const Complex* Wstore);
};

#endif
