#include "complex.hpp"

complex_t::complex_t() 
{
	real = 0;
	imaginary = 0;
}

complex_t::complex_t(double  rl, double  im)
{
	real = rl;
	imaginary = im;
}

complex_t::complex_t(const complex_t&cpycmplx)
{
	real = cpycmplx.real;
	imaginary = cpycmplx.imaginary;
}

double complex_t::real_()
{
	return real;
}

double  complex_t::imaginary_()
{
	return imaginary;
}

bool complex_t::operator == (const complex_t& compl2) const
{
	bool f = 0;
	if ((real == compl2.real) && (imaginary == compl2.imaginary))
		f = 1;
	return f;
}

complex_t complex_t::operator = (const complex_t& compl2)
{
	real = compl2.real;
	imaginary = compl2.imaginary;
	return *this;
}

istream& operator >> (istream&cin, complex_t& compl1)
{
	cout << "enter real part" << endl;
	cin >> compl1.real;
	cout << "enter imaginary part" << endl;
	cin >> compl1.imaginary;
	cout << endl;
	return cin;
}

ostream& operator << (ostream&cout, complex_t& compl1)
{
	if (compl1.imaginary < 0)
	{
		cout << compl1.real << compl1.imaginary << "i" << endl;
	}
	else
		cout << compl1.real << "+" << compl1.imaginary << "i" << endl;
	return cout;
}

complex_t complex_t::operator * (const complex_t& compl2) const
{
	return complex_t(real*compl2.real - compl2.imaginary*imaginary, compl2.imaginary*real + compl2.real*imaginary);
}

complex_t complex_t::operator / (const complex_t& compl2) const
{
	return complex_t((real*compl2.real + imaginary*compl2.imaginary) / (compl2.real*compl2.real + compl2.imaginary*compl2.imaginary), (compl2.real*imaginary - real*compl2.imaginary) / (compl2.real*compl2.real + compl2.imaginary*compl2.imaginary));
}

complex_t complex_t::operator += (const complex_t& compl2)
{
	real += compl2.real;
	imaginary += compl2.imaginary;
	return *this;
}

complex_t complex_t::operator -= (const complex_t& compl2)
{
	real -= compl2.real;
	imaginary -= compl2.imaginary;
	return *this;
}
complex_t complex_t::operator /= (const complex_t& compl2)
{
	double realtmp = (real*compl2.real + imaginary*compl2.imaginary) / (compl2.real*compl2.real + compl2.imaginary*compl2.imaginary);
	imaginary = (compl2.real*imaginary - real*compl2.imaginary) / (compl2.real*compl2.real + compl2.imaginary*compl2.imaginary);
	real = realtmp;
	return *this;
}

complex_t complex_t::operator *= (const complex_t& compl2)
{
	double realtmp = real*compl2.real - imaginary*compl2.imaginary;
	imaginary = real*compl2.imaginary + compl2.real*imaginary;
	real = realtmp;
	return *this;
}
