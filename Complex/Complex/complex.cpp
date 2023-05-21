#define _USE_MATH_DEFINES
#include "complex.h"
#include <cmath>

Complex::Complex(double re, double im) : re(re), im(im) {}
Complex::Complex(const Complex& complex): re(complex.re), im(complex.im) {}
Complex::~Complex()

{
	re = 0;
	im = 0;
}

double Complex::getRe()
{
	return this->re;
}

void Complex::setRe(double re)
{
	this->re = re;
}

double Complex::getIm()
{
	return this->im;
}

void Complex::setIm(double im)
{
	this->im = im;
}

void Complex::set(double re, double im)
{
	this->re = re;
	this->im = im;
}

void Complex::operator=(const Complex& complex)
{
	this->re = complex.re;
	this->im = complex.im;
}

double Complex::abs()
{
	return std::sqrt((this->re) * (this->re) + (this->im) * (this->im));

}

double Complex::arg()
{
	return std::atan2(this->im, this->re);
}

Complex Complex::reverse()
{
	double ab2 = ((this->re) * (this->re) + (this->im) * (this->im));

	return Complex(this->re / ab2, this->im / ab2);
}

void Complex::sqrt(int n, std::ostream& stream)
{
	double phi = Complex::arg();
	double r = Complex::abs();
	std::cout << r << "*(cos((" << phi << "+ 2*pi*k)" << n << ")+i*sin((" << phi << "+ 2*pi*k)/" << n << "))";
}

Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.re * complex2.re - complex1.im * complex2.im, complex1.re * complex2.im + complex1.im * complex2.re);
}

Complex operator*(double d, Complex complex)
{
	return Complex(complex.re*d, complex.im*d);
}

Complex operator*(Complex complex, double d)
{
	return Complex(complex.re * d, complex.im * d);
}

Complex operator+(Complex complex1, Complex complex2)
{
	return Complex(complex1.re + complex2.re, complex1.im + complex2.im); 

}

Complex operator/(Complex complex1, Complex complex2)
{
	return Complex(complex1 * complex2.reverse());
}

Complex operator-(Complex complex1, Complex complex2)
{
	return Complex(complex1.re - complex2.re, complex1.im - complex2.im);
}

std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
	if (complex.im < 0)
	{
		if (complex.im == -1)
		{
			stream << complex.re << "-i";

		}
		else
		{
			stream << complex.re << " - " << complex.im << "i";
		}
	}
	else if (complex.im == 0)
	{
		stream << complex.re;
	}
	else
	{
		if (complex.im == 1)
		{
			stream << complex.re << "+i";
		}
		else
		{
			stream << complex.re << " +" << complex.im << "i";
		}
	}
	return stream;
}