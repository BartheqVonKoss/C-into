//
//  sol_zesp.cpp
//  L5Z2a
//
//  Created by Bartłomiej Kos on 29/05/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include "sol_zesp.hpp"

Complex::Complex(double x, double y) : real(x), imag(y) {}

Complex::Complex() : real(0), imag(0) {}

Complex Complex::operator+(const Complex &in)
{
    return Complex(this->real + in.real, this->imag + in.imag);
}

std::ostream &operator<<(std::ostream &F, const Complex &in)
{
    F << "(" << in.real << ',' << in.imag << ")";
    return F;
}

Complex Complex::operator+=(const Complex &in)
{
    return Complex(this->real += in.real, this->imag += in.imag);
}

Complex Complex::operator*(const Complex &in) 
{
    double x = this->real;
    double y = this->imag;
    Complex mult(x * in.real - y * in.imag, x * in.imag + y * in.real);
    return mult;
}

Complex Complex::operator*=(const Complex &in)
{
    double x = this->real;
    double y = this->imag;
    return Complex(this->real = x * in.real - y * in.imag, this->imag = x * in.imag + y * in.real);
}

const Complex Complex::operator=(const Complex &in)
{
    return Complex(this->real = in.real, this->imag = in.imag);
}

double Complex::REAL() const
{
    return this->real;
}

double Complex::IMAG() const
{
    return this->imag;
}
