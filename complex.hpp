#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <cmath>
#include "DSP.h"

struct Complex
{
public:
    float Re, Im;


    float GetArg(void);
    float GetAbs(void);
    static float ArgDiff(Complex& in1, Complex& in2);
    static void ConvertFromFloat(float* in, Complex* out, uint32_t len);

    static inline void Mul(Complex* z, const Complex* z1, const Complex* z2)
    {
        z->Re = (z1->Re * z2->Re - z1->Im * z2->Im);
        z->Im = (z1->Re * z2->Im + z1->Im * z2->Re);
    }

    //This is minimized version of type 'complex'. All operations is inline
    inline void operator= (const Complex& y) { Re = y.Re; Im = y.Im; }
    inline void operator+=(const Complex& y) { Re += y.Re; Im += y.Im; }
    inline void operator-=(const Complex& y) { Re -= y.Re; Im -= y.Im; }
    inline void operator*=(const Complex& y) { float temp; temp = Re; Re = temp * y.Re - Im * y.Im; Im = temp * y.Im + Im * y.Re; }
    inline void operator/=(float div) { Re /= div; Im /= div; }
};



#endif

