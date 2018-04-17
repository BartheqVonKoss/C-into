//
//  main.cpp
//  Lista 1
//
//  Created by Bartłomiej Kos on 05/03/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>
#include <climits>
#include <cmath>

// ZADANIE I
void silnia()
{
    int n;
    std::cout << "n: ";
    std::cin >> n;
    int factorial = 1;
    for(int i = 1; i<=n; i++)
    {
        factorial *= i;
        std::cout << factorial << std::endl;
    }
}

// ZADANIE 2
void suma_iloczyn()
{
    int n, m;
    //std::cout << "n: ";
    //std::cin >> n;
    //std::cout << "m: ";
    //std::cin >> m;
    //std::cout << "n + m = " << n+m << '\t' << "n * m = " << n*m <<std::endl;
    n = 41234123412341;
    m = 98789798798798;
    std::cout << "n = " << n << '\t' << "m = " << m << std::endl;
    std::cout << n*m << std::endl;
    std::cout << n+m << std::endl;
    std::cout << 320000*320000 << std::endl;

}

// ZADANIE 3
void dzielenie0()                   // Thread 1: EXC_ARITHMETIC (code=EXC_I386_DIV, subcode=0x0)
{
    int n = 421124;
    std::cout << n/0 << std::endl;
    float m = 214.1214;
    std::cout << m/0 << std::endl;
}

// ZADANIE 4
void rownosc()                      // n = 1    m: 1e-26
{
    bool hype = true;
    while(hype == true)
    {
        double n, m;
        std::cout << "n: ";
        std::cin >> n;
        std::cout << "m: ";
        std::cin >> m;
        if(n+m == n)
        {
            std::cout << "Yes" << std::endl;
            std::cout << "n = " << n << '\t' << "m: " << m << std::endl;
            hype = false;
        }
        else std::cout << "No" << std::endl;
    }
}

// ZADANIE 5
void inty()
{
    std::cout << INT_MAX << std::endl;
    std::cout << std::abs(INT_MIN) << std::endl;
    std::cout << -INT_MIN << std::endl;
    std::cout << INT_MIN - 1 << std::endl;
}

// ZADANIE 6
void pi()
{
    double a = 0;
    double b = 1;
    double c = 0;
    for(int j=1; j<1000000; j++)
    {
        a += pow(-1, j+1) / (2*j - 1);
        b *= 4 * pow(j, 2) / (4 * pow(j, 2) - 1);
        c += 1 / (pow(2*j - 1, 2));
    }
    a *= 4;
    b *= 2;
    c *= 8;
    c = sqrt(c);
    std::cout << M_PI - a << std::endl;
    std::cout << M_PI - b << std::endl;
    std::cout << M_PI - c << std::endl;
}

// ZADANIE 7
void pi2()
{
    double t = 1 / sqrt(3);
    double result;
    for(int i=0; i<26; i++)
    {
        result = 6 * pow(2, i) * t;
        double tt = t;
        t = (sqrt(pow(tt, 2)+1)-1) / tt;
        std::cout << result << '\t' << M_PI - result << std::endl;
    }
    std::cout << std::endl;
    t = 1 / sqrt(3);
    for(int i=0; i<26; i++)
    {
        result = 6 * pow(2, i) * t;
        double tt = t;
        t = tt / (sqrt(pow(tt, 2)+1)+1);
        std::cout << result << '\t' << M_PI - result << std::endl;
    }
}

void kwadratrownyzero()
{
    int a = 50;
    bool flag = true;
    while(flag == true)
    {
        int b = a * a;
        if(b == 0)
        {
            flag = false;
            std::cout << a << " * " << a << " = " << b << std::endl;
        }
        a *= 2;
    }
}

// ZADANIE 6
void zadanie6()
{
    size_t a = 0xa;                 // 10
    std::cout << a << std::endl;
    size_t b = 012;                 // 10
    std::cout << b << std::endl;
    size_t c = b - a;               // 0
    std::cout << c << std::endl;
    std::cout << 3.14 - 3 << std::endl;
    std::cout << pow(1234,1234) << std::endl;
    a = 1 << 3;
    std::cout << a << std::endl;
    std::cout << 0xF << std::endl;          // 15
    std::cout << 0xA << std::endl;          // 10
    std::cout << (0xF & 0xA) << std::endl;  // 10
    std::cout << (3 > 2 > 1) << std::endl;          // 0
    std::cout << 12345 + ~ 12345 << std::endl;      // -1
    std::cout << 1 + 1e-40 -1 << std::endl;         // out of scope
    std::cout << (3==3==3) << std::endl;            // 0
    std::cout << 1/4 << std::endl;                  // 0, unless one of the digits is floating point
    std::cout << (16 >> 1) << std::endl;            // 8
    std::cout << 0xff << std::endl;                 // 255
    std::cout << 0xf0 << std::endl;                 // 240
    std::cout << (0xff ^ 0xf0) << std::endl;        // 15
    std::cout << ~(-1) << std::endl;                // 0
    std::cout << -1u << std::endl;                  // 4294967295
    std::cout << (0 - 1u > 0) << std::endl;         // 1
    std::cout << 0xaa << std::endl;                 // 170
    std::cout << (0xff | 0xaa) << std::endl;        // 255
    std::cout << (1234567 & 1) << std::endl;        // 1
    std::cout << (1234567 | 1) << std::endl;        // 1234567
    std::cout << (1 < 2 ? 1 : 2) << std::endl;      // 1
    std::cout << (1,2,3,4) << std::endl;            // 4
    //comma operator (,) is used to separate two or more expressions that are included where only one expression is expected. When the set of expressions has to be evaluated for a value, only the right-most expression is considered. For example, the following code: a = (b=3, b+2); would first assign the value 3 to b, and then assign b+2 to variable a. So, at the end, variable a would contain the value 5 while variable b would contain value 3.
    std::cout << (3 < 2 & 1 < 2) << std::endl;      // 0
    std::cout << (1 < 2 && 2 < 1) << std::endl;     // 0
    std::cout << (1 < 2 || 2 > 1) << std::endl;     // 1
    std::cout << 0b1111 << std::endl;               // 15
}

int main(int argc, const char * argv[])
{
    // type the function name here to build it.
    zadanie6();
    return 0;
}
