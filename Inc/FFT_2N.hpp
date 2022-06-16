/*
    Fast Fourier Transformation
    ====================================================
    Coded by Miroslav Voinarovsky, 2002
    This source is freeware.
*/

#ifndef FFT2N_HPP_
#define FFT2N_HPP_

#include "Complex.hpp"

namespace FFT_2N
{
	/*
	Fast Fourier Transformation
	x: x - array of items
	N: N - number of items in array. Must be odd
	complement: false - normal (direct) transformation, true - reverse transformation
	*/
	void Transform(Complex* x, int N, bool complement);
}

#endif
