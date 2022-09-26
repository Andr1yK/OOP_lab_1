//
//  makeTriangle.cpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 27.09.2022.
//

#include <iostream>
#include "makeTriangle.hpp"

using namespace std;

Triangle makeTriangle(int sideA, int sideB) {
    Triangle triangle;

    if (triangle.init(sideA,sideB))
    {
        return triangle;
    }

    exit(EXIT_FAILURE);
}
