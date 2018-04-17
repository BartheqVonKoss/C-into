//
//  sol_4_2.cpp
//  L4
//
//  Created by Bartłomiej Kos on 15/04/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include "sol_4_2.hpp"
#include <cmath>

int fibo1(int n)
{
    int result = 0;
    if(n == 0) return result = 0;
    else if(n == 1) return result = 1;
    return fibo1(n - 1) + fibo1(n - 2);
}

int fibo2(int n)
{
    return (1 / sqrt(5) * (pow(2 / (sqrt(5) - 1), n) - pow(-2 / (sqrt(5) + 1), n)));
}
