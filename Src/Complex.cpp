#include "Complex.hpp"


using namespace FFT_2N;


/* Complex argument */
float Complex::ArgDeg(void)
{
    return atan2f(Im, Re) * 180.0f / M_PI;
}

/* Complex argument */
float Complex::ArgRad(void)
{
    return atan2f(Im, Re);
}

/* Complex absilute value */
float Complex::Abs(void)
{
    return sqrtf(Re * Re + Im * Im);
}

/* Corner between two vectors in degrees */
float Complex::ArgDiffDeg(Complex& in1, Complex& in2)
{
    float result;

	Complex tmp = Conj(in2);

	tmp = Dot(in1, tmp);

	result = tmp.ArgDeg();

	return result;
}

/* Corner between two vectors in degrees */
float Complex::ArgDiffRad(Complex& in1, Complex& in2)
{
	float result;

	Complex tmp = Conj(in2);

	tmp = Dot(in1, tmp);

	result = tmp.ArgRad();

	return result;
}


/* exp^(i*val) */
Complex Complex::ExpiDeg(float val)
{
	Complex result;
	result.Re = cosf(val * M_PI/180.0f);
	result.Im = sinf(val * M_PI/180.0f);
	return result;
}


/* exp^(i*val) */
Complex Complex::ExpiRad(float val)
{
	Complex result;
	result.Re = cosf(val);
	result.Im = sinf(val);
	return result;
}

/* Get complex mass from float values */
void Complex::ConvertFromFloat(float* in, Complex* out, uint32_t len)
{
    for (uint32_t i = 0; i < len; i++)
    {
        out[i].Re = in[i];
        out[i].Im = 0.0f;
    }
}