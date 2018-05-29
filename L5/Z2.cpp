//
//  main.cpp
//  L5Z2a
//
//  Created by Bartłomiej Kos on 29/05/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>

#include "sol_zesp.hpp"

int main(int argc, const char * argv[])
{
    const Complex ii(0, 1);
    Complex a[3];
    a[0] = Complex(1, 1);
    a[1] = a[0] + ii;
    a[2] = a[1];
    a[2] += ii;

    Complex d = a[1] * a[2];
    d *= a[0];
    std::cout << a[0];
    for (int i = 1; i < 3; i++)
        std::cout << " * " << a[i];
    std::cout << " = " << d << "\n";
    std::cout << "jednostka urojona = " << ii.REAL() << " + " << ii.IMAG() << "i\n";
}
