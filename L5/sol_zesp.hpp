//
//  sol_zesp.hpp
//  L5Z2a
//
//  Created by Bartłomiej Kos on 29/05/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#ifndef sol_zesp_hpp
#define sol_zesp_hpp

#include <stdio.h>
#include <iostream>

class Complex
{
public:
    double real;
    double imag;
public:
    Complex();
    Complex(double x, double y);
    Complex operator+(const Complex &in);
    friend std::ostream &operator<<(std::ostream &F, const Complex &in);
    Complex operator+=(const Complex &in);
    Complex operator*(const Complex &in);
    Complex operator*=(const Complex &in);
    Complex operator=(const Complex &in);
    double REAL() const;
    double IMAG() const;
};

#endif /* sol_zesp_hpp */
