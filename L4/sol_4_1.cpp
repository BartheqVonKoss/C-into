//
//  sol_4_1.cpp
//  L4
//
//  Created by Bartłomiej Kos on 15/04/2018.
//  Copyright © 2018 Bartłomiej Kos. All rights reserved.
//

#include "sol_4_1.hpp"
#include <iostream>
#include <vector>


double &operator*(std::vector<double>& v, std::vector<double>& w)
{
    double dot_product = 0;
    for (int i = 0; i < w.size(); i++)
    {
        dot_product += (v[i] * w[i]);
    }
    return dot_product;
}

