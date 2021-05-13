#include "complex.hpp"

#define PI (3.1415926535f)

// Complex argument
float Complex::GetArg(void)
{
    return atan2f(Re, Im) * 180.0f / PI;
}

// Complex absilute value
float Complex::GetAbs(void)
{
    return sqrtf(Re * Re + Im * Im);
}

// Corner between two vectors in degrees
float Complex::ArgDiff(Complex& in1, Complex& in2)
{
    float result, val1, val2;

	val1 = in1.GetArg();
	val2 = in2.GetArg();

	result = val1 - val2;

	if ((fabsf(result) > 180))
	{
		if (result < 0)
			result = result + 360;
		else
			result = result - 360;
	}

	return result;
}