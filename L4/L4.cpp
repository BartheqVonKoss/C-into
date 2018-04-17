//
//  main.cpp
//  L4
//
//  Created by Bartłomiej Kos on 15/04/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
#include "sol_4_1.hpp"
#include "sol_4_2.hpp"

void Zadanie1()
{
    int n;
    std::cout << "enter length of vectors" << std::endl;
    std::cin >> n;
    std::vector<double> v;
    std::vector<double> w;
    double result;
    for(int i = 0; i < n; i++)
    {
        v.push_back(i);
        w.push_back(i+1);
    }
    result = v * w;
    std::cout << "dot product is " << result << std::endl;
}

void Zadanie2()
{
    for (int i = 1; i <= 40; i++) std::cout << i << "\t" << fibo1(i) << "\t" << fibo2(i) << "\n";
}

double f0(int n) { return 1.0/log10(n + 2); }
double f1(int n) { return 1.0/(n + 1); }
double f2(int n) { return 1.0/(2*n + 1); }

double sum(double &f, double &m)
{
    double sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum += (-1, i) * f0(i);
    }
    return sum;
}

double sumuj(double (*f)(double), int n, double eps)
{
    double result = 0.0;
    for(int i = )
    return
}

void Zadanie3()
{
    const int N = 50;
    const double expected[3] = {2.12828, log(2.0), M_PI/4.0 };
    double (*f[3])(int) = {f0, f1, f2};

    std::cout.precision(10);
    for (int i = 0; i < 3; i++)
    {
        double eps;
        double wynik = sumuj(f[i], N, eps);
        std::cout << wynik << "\t +- " << eps << "\t (faktyczny bÅ‚Ä…d: " << std::abs(wynik - expected[i]) << ")\n";
    }
}

int main(int argc, const char * argv[])
{
    return 0;
}
