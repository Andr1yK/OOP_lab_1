//
//  main.cpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 22.09.2022.
//

#include <iostream>
#include "Triangle.hpp"
#include "makeTriangle.hpp"

int main() {
    Triangle triangle = makeTriangle(5, 6);

    triangle.display();

    triangle.read();
    triangle.display();

    return 0;
}
