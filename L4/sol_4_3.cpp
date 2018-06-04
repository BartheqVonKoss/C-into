//
//  sol_4_3.cpp
//  L4Z3
//
//  Created by Bartłomiej Kos on 23/05/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include "sol_4_3.hpp"
#include <iostream>
#include <cmath>
#include <vector>

double sumuj(double (*f)(int), int m, double &eps)
{
    double sign;
    double sum = 0;
    double *el = new double[m];
    for(int i = 0; i < m; i++)
    {
        if(i % 2 == 0) sign = 1;
        else sign = -1;
        sum += sign * f(i);
        el[i] = sum;
    }
    do
    {
        for(int i = 0; i < m - 2; i++)
        {
            el[i] = (el[i] + el[i+1]) / 2;
        }
        m--;
    }while(m > 2);

    eps = std::fabs(el[0] - el[1]) / 2;

    return sum = (el[0] + el[1]) / 2;
}
