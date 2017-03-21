#include <iostream>

using namespace std;

class complex_t
{
private:
	double  real;
	double  imaginary;
public:
	complex_t();
	complex_t(double  rl, double  im);
	complex_t(const complex_t&cpycmplx);
	double  real_();
	double  imaginary_();
	complex_t operator * (const complex_t& compl2) const;
	complex_t operator / (const complex_t& compl2) const;
	complex_t operator += (const complex_t& compl2);
	complex_t operator -= (const complex_t& compl2);
	complex_t operator *= (const complex_t& compl2);
	complex_t operator /= (const complex_t& compl2);
	complex_t operator = (const complex_t&  compl2);
	bool operator == (const complex_t&  compl2) const;
	friend istream& operator >> (istream&cin, complex_t&  compl);
	friend ostream& operator << (ostream&cout, complex_t&  compl);
};
