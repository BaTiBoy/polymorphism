#include "number.h"
#include <iostream>
using namespace std;

Number::Number()
{}

void Number::print()
{}

Number Number::add(const Number& x)
{
	return *this;
}

Number Number::mul(const Number& x)
{
	return *this;
}

RealNumber::RealNumber(double x)
	: Number(), a(x)
{}

RealNumber RealNumber::add(const RealNumber& other)
{
	a += other.a;
	return *this;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
	a *= other.a;
	return *this;
}

void RealNumber::print()
{
	cout << a << endl;
}

IntegerNumber::IntegerNumber(double x, int y)
	:RealNumber(x), b(y)
{}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	b += other.b;
	return *this;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	b *= other.b;
	return *this;
}

void IntegerNumber::print()
{
	cout << b << endl;
}

ComplexNumber::ComplexNumber(double x, double y)
	:Number(), c(x), d(y)
{}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	c += other.c;
	d += other.d;
	return *this;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	double a1, a2, a3, a4;
	a1 = c * other.c;
	a2 = d * other.c;
	a3 = c * other.d;
	a4 = d * other.d;
	if (a4 > 0)
		c = a1 - a4;
	else
		c = a1 + a4;
	d = a2 + a3;
	return *this;
}

void ComplexNumber::print()
{
	if (c == 0)
		cout << d << "i" << endl;
	else if (d == 0)
		cout << c << endl;
	else if (d > 0)
		cout << c << "+" << d << "i" << endl;
	else if (d < 0)
		cout << c << d << "i" << endl;
}
