//
//  main.cpp
//  Lista 2
//
//  Created by Bartłomiej Kos on 08/03/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>

void Zadanie1()
{
    int x = 5;
    int *zm = &x;
    int *wm = zm;

    long long int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    long long int *tab2[10];
    tab2[2] = &tab[2];
    std::cout << *tab2[2] << std::endl;
    std::cout << tab2[9] << std::endl;

    double tab3[10] = {};
    double *pt = &tab3[0];
    std::cout << *pt << std::endl;

    char **PT = new char*[10];

}

void Zadanie2()
{
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p = &tab[5];
    std::cout << "tab[1] " << tab[1] << std::endl;
    std::cout << "*tab " << *tab << std::endl;
    std::cout << "*(tab+1) " << *(tab+1) << std::endl;
    std::cout << "*p " << *p << std::endl;
    std::cout << "p[0] " << p[0] << std::endl;
    std::cout << "p[3] " << p[3] << std::endl;
    std::cout << "*(p+3) " << *(p+3) << std::endl;
    std::cout << "*(p-1) " << *(p-1) << std::endl;
    std::cout << "p[-1] " << p[-1] << std::endl;
    std::cout << "*&tab[0] " << *&tab[0] << std::endl;
    std::cout << "&tab[5] - &tab[0] " << &tab[5] - &tab[0] << std::endl;
    std::cout << "tab[5] - tab[0] " << tab[5] - tab[0] << std::endl;
    std::cout << "&tab[0] - tab " << &tab[0] - tab << std::endl;
    //std::cout << tab << std::endl;
    //std::cout << &tab[0] << std::endl;
    std::cout << "1[p] " << 1[p] << std::endl;
    std::cout << "*(1+p) " << *(1+p) << std::endl;
    std::cout << "p - tab " << p - tab << std::endl;
    std::cout << "tab - p " << tab - p << std::endl;
    std::cout << "(char*)tab - (char*)p " << (char*)tab - (char*)p << std::endl;  // mapping first el of arrays to ASCII value of pointer
    std::cout << "sizeof(int " << sizeof(int) << std::endl;
    std::cout << "((char*)tab - (char*)p)/sizeof(int) " << ((char*)tab - (char*)p)/sizeof(int) << std::endl; // 4611686018427387899
    std::cout << "sizeof(*p)" << sizeof(*p) << std::endl;
    std::cout << "((char*)tab - (char*)p)/sizeof(*p) " << ((char*)tab - (char*)p)/sizeof(*p) << std::endl; // 4611686018427387899
    //std::cout << "(void*)tab - (void*)p " << (void*)tab - (void*)p << std::endl; // Arithmetic on pointers to void
}

int compare (const void *arg1, const void *arg2)
{
    /* Compare all of both strings */
    return(strcmp(*(char **)arg1, *(char **)arg2));
}

void Zadanie3()
{
    char (*tab)[10];        // pointer to a char array
    std::cout << tab << std::endl;
    int tab2[10][10];  // 2D array
    double (*pf)(double x);     // pointer to a function which takes a double as an argument and returns a double
    double (*pf2)(double);      // pointer to a function which maps to double
    void qsort (void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
    // starts at base (array[0] and sorts an array of num elements (size of size)
    void qsort (void*, size_t, size_t , int (*compar)(const void*, const void*));
    // same as above but for 2D array
}
/*
 void kopiuj(char∗ dokad, const char∗ skad)      // kopiuj function copies 2nd argument to the position of a 1st argument; it goes up to the moment when '\0' is encountered
{
    while(∗dokad++ = ∗skad++) continue;
}
void Zadanie4()
{
    void kopiuj(char∗ dokad, const char∗ skad)
    {
        while(∗dokad++ = ∗skad++) continue;
    }
}
*/

void Zadanie5()
{
    std::cout << sizeof("Ala") << std::endl;            // 4
    std::cout << sizeof("\"Ala\"") << std::endl;        // 6
    std::cout << sizeof("\n\n\n") << std::endl;         // 4
    std::cout << sizeof("Ala ma kota") << std::endl;    // 12
    std::cout << sizeof("Pięć") << std::endl;           // 7
    std::cout << sizeof(L"Ala") << std::endl;           // 16
    std::cout << sizeof(u"gwóźdź") << std::endl;        // 14
    std::cout << sizeof(u8"Ala") << std::endl;          // 4
    std::cout << sizeof(u8"Alą") << std::endl;          // 5
    std::cout << sizeof(U"Ala") << std::endl;           // 16
    std::cout << sizeof(U"Alą") << std::endl;           // 16
    std::cout << sizeof("A") << std::endl;              // 2
    std::cout << sizeof("Ą") << std::endl;              // 3
    std::cout << sizeof("€") << std::endl;              // 4 U+20AC
    std::cout << sizeof("Ø") << std::endl;              // 3 
}


void Zadanie6()
{
    char tmp[8];
    char haslo[8];
    strcpy(haslo, "Ta.jne!");
    for ( ; ; )
    {
        std::cout << "podaj hasło: \n";
        std::cin >> tmp;
        if (strcmp(tmp, haslo) == 0)
            break;
        std::cout << "przykro mi, hasło jest niepoprawne!\n";
        std::cout << "\"" << haslo << "\"\n";
    }
    std::cout << "witaj w systemie!\n";
}

int main(int argc, const char * argv[])
{
    // type name of a function to call it.
    return 0;
}
