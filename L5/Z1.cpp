//
//  main.cpp
//  L5
//
//  Created by Bartłomiej Kos on 01/05/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include <iostream>

class Samochod
{
public:
    Samochod (int n)
    : _kola (n), _sruby (4*_kola)               // 4 * n zamiast 4 * _kola
    {
        std::cout << "Samochód z " << _kola <<  " kołami i "
        << _sruby << " śrubami\n";
    }
private:
    int _kola;                  // zamiana miejsc pozwala pozbyc sie bledu
    int _sruby;

};

int main(int argc, const char * argv[])
{
    Samochod s1(2);
    Samochod s4(12);

    return 0;
}
