//
//  main.cpp
//  L4Z3
//
//  Created by Bartłomiej Kos on 23/05/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "sol_4_3.hpp"

double f0(int n) { return 1.0/log10(n + 2); }
double f1(int n) { return 1.0/(n + 1); }
double f2(int n) { return 1.0/(2*n + 1); }



int main(int argc, const char * argv[])
{
    const int N = 45;
    const double expected[3] = {2.12828, log(2.0), M_PI/4.0 };
    double (*f[3])(int) = {f0, f1, f2};

    std::cout.precision(10);
    for (int i = 0; i < 3; i++)
    {
        double eps;
        double wynik = sumuj(f[i], N, eps);
        std::cout << wynik << "\t +- " << eps << "\t (faktyczny błąd: " << std::abs(wynik - expected[i]) << ")\n";
    }
    return 0;
}
