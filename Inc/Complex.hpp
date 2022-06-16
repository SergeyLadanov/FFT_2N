#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <cmath>

namespace FFT_2N
{

    class Complex
    {
    public:
        float Re, Im;


        static inline Complex Dot(const Complex& z1, const Complex& z2)
        {
            Complex result;
            result.Re = (z1.Re * z2.Re - z1.Im * z2.Im);
            result.Im = (z1.Re * z2.Im + z1.Im * z2.Re);
            return result;
        }


        static inline Complex Add(const Complex& z1, const Complex& z2)
        {
            Complex result;
            result.Re = (z1.Re + z2.Re);
            result.Im = (z1.Im + z2.Im);
            return result;
        }


        
        static inline Complex Sub(const Complex& z1, const Complex& z2)
        {
            Complex result;
            result.Re = (z1.Re - z2.Re);
            result.Im = (z1.Im - z2.Im);
            return result;
        }


        static inline Complex Div(const Complex& z1, const Complex& z2)
        {
            Complex result;

            float r = z2.Re * z2.Re + z2.Im * z2.Im;
            result.Re = (z1.Re * z2.Re + z1.Im * z2.Im) / r;
            result.Im = (z1.Im * z2.Re - z1.Re * z2.Im) / r;

            return result;
        }


        static inline Complex Conj(const Complex& z1)
        {
            Complex result;

            result = z1;
            result.Im = -result.Im;

            return result;
        }

        float ArgDeg(void);
        float ArgRad(void);
        float Abs(void);


        static float ArgDiffDeg(Complex& in1, Complex& in2);
        static float ArgDiffRad(Complex& in1, Complex& in2);
        static void ConvertFromFloat(float* in, Complex* out, uint32_t len);
        static Complex ExpiDeg(float val);
        static Complex ExpiRad(float val);

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

}



#endif

