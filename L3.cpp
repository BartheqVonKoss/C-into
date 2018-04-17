//
//  main.cpp
//  L3
//
//  Created by Bartłomiej Kos on 14/03/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

void swap(int *n, int *m);
void print(int *tab, int no_e);
int *reverse(int *tab, int no_e);
int sum(int *tab, int no_e);
void Zadanie1();
void error(const char* s);
double get_double(const char* s);
void Zadanie2();
void free(int **arr, int n);
void allocate(int **&arr, int n);
void Zadanie3();

// ZADANIE 1
void swap(int *n, int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}

void print(int *tab, int no_e)
{
    for(int i=0; i<no_e; i++)
    {
        std::cout << *(tab+i) << '\t';
    }
    std::cout << std::endl;
}

int *reverse(int *tab, int no_e)
{

    int *beg = tab;
    int *fin = tab + (no_e - 1);

    for (int i = 0; i < no_e; i++)
    {
        if (beg < fin)
        {
            int temp = *fin;
            *fin = *beg;
            *beg = temp;
        }
        beg++;
        fin--;
    }
    return tab;
}

int sum(int *tab, int no_e)
{
    int sum = *tab + *(tab+1);
    return sum;
}

void Zadanie1()
{
    int n = 9, m = 10;
    std::cout << n << " " << m << "\n";
    swap(&n, &m);
    std::cout << n << " " << m << "\n";
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(tab + 2, 7);
    reverse(tab + 1, 8);
    print(tab, 10);
    std::cout << sum(&tab[8], 2) << "\n"; // suma ostatnich dwóch
}

// ZADANIE 2

void error(const char* s)
{
    std::cerr << s << "\nProgram aborted\n";
    exit(-1);

}
/*
double get_double(const char* s)
{
    int i = 0;
    bool flag = true;

    while(s[i]!='\0' && flag == true)
    {
        if(!isdigit(s[i]))
        {
            error(s);
            flag = false;
        }

        i++;
    }
    double d = std::stod(s);
    return d;
}
*/

double get_double(const char* s)
{
    std::string::size_type ptr;     // Wskaźnik ustawiany na pozycję pierwszego znaku w stringu po liczbie
    if (isdigit(*s)) return std::stod(s, &ptr);
    else error(s);
    return 11;
}

void Zadanie2(int argc, const char* argv[])
{
    if (argc != 4)
        error("Expecting 3 arguments");
    double a = get_double(argv[1]);
    double b = get_double(argv[3]);
    double c;
    switch (argv[2][0])
    {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break;
        default: error("unexpected token");
    };
    std::cout << "= " << c << "\n";
}

void allocate(int **&arr, int n)
{
    arr = new int * [n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int [n];
    }
}

void free(int **arr, int n)
{
    for(int i = 0; i < n; i++)
        delete [] arr[i];
    delete [] arr;
}

void Zadanie3()
{
    int** tab = nullptr;
    int n;
    std::cout << "podaj n, n>0, n<=10: ";
    std::cin >> n;
    if(!(n>0 && n<=10))
        std::cout << "sth is incorrect" << std::endl;           //return -1;
    allocate(tab, n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            std::cout << "t[" << i << "][" << j << "] = " << tab[i][j] << " ";
        std::cout << '\n';
    }
    free(tab, n);
}

int main(int argc, const char * argv[])
{
    //Zadanie1();
    //get_double("2%13");
    //Zadanie2(argc, argv);
    //Zadanie3();
    return 0;
}
