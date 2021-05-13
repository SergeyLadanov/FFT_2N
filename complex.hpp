#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <cmath>

struct Complex
{
public:
    float Re, Im;


    float GetArg(void);
    float GetAbs(void);
    static float ArgDiff(Complex& in1, Complex& in2);

    //This is minimized version of type 'complex'. All operations is inline
    inline void operator= (const Complex& y) { Re = y.Re; Im = y.Im; }
    inline void operator+=(const Complex& y) { Re += y.Re; Im += y.Im; }
    inline void operator-=(const Complex& y) { Re -= y.Re; Im -= y.Im; }
    inline void operator*=(const Complex& y) { float temp; temp = Re; Re = temp * y.Re - Im * y.Im; Im = temp * y.Im + Im * y.Re; }
    inline void operator/=(float div) { Re /= div; Im /= div; }
};



#endif

