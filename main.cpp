#include "number.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter two real numbers:" << endl;
	double n1, n2;
	cin >> n1 >> n2;
	RealNumber r1(n1);
	RealNumber r2(n2);
	r1.add(r2);
	cout << n1 << " + " << n2 << " = ";
	r1.print();
	r1.mul(r2);
	cout << "( " << n1 << " + " << n2 << " )" << " * " << n2 << " = ";
	r1.print();

	cout << endl;
	cout << "Please enter two integer numbers:" << endl;
	int n3, n4;
	cin >> n3 >> n4;
	IntegerNumber i1(n1, n3);
	IntegerNumber i2(n2, n4);
	i1.add(i2);
	cout << n3 << " + " << n4 << " = ";
	i1.print();
	i1.mul(i2);
	cout << "( " << n3 << " + " << n4 << " )" << " * " << n4 << " = ";
	i1.print();

	cout << endl;
	cout << "Please enter the real part and imaginary part of two complex numbers:" << endl;
	double n5, n6, n7, n8;
	cin >> n5 >> n6 >> n7 >> n8;
	ComplexNumber c1(n5, n6);
	ComplexNumber c2(n7, n8);
	c1.add(c2);
	cout << n5 << "+" << n6 << "i" << " + " << n7 << "+" << n8 << "i" << " = ";
	c1.print();
	c1.mul(c2);
	cout << "( " << n5 << "+" << n6 << "i" << " + " << n7 << "+" << n8 << "i" << " )" << " * " << "( " << n7 << "+" << n8 << "i" << " )" << " = ";
	c1.print();
}
