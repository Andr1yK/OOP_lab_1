//
//  Triangle.cpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 22.09.2022.
//

#include <iostream>
#include <cmath>
#include "./Triangle.hpp"

using namespace std;

Triangle::Triangle(int sideA, int sideB) {
  this->first = sideA;
  this->second = sideB;
}

void Triangle::setFirst(int side) {
  this->first = side;
}

void Triangle::setSecound(int side) {
  this->second = side;
}

double Triangle::hypotenuse() {
  double result = (this->first * this->first)
    + (this->second * this->second);

  return sqrt(result);
}
