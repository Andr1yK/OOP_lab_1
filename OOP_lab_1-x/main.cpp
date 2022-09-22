//
//  main.cpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 22.09.2022.
//

#include <iostream>
#include "Triangle.hpp"

int main(int argc, const char * argv[]) {
    Triangle triangle(5, 6);

    
    std::cout << "hypotenuse: " << triangle.hypotenuse() << std::endl;
    return 0;
}
