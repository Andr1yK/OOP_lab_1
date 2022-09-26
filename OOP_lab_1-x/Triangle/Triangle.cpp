//
//  Triangle.cpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 22.09.2022.
//

#include <iostream>
#include <cmath>
#include "./Triangle.hpp"

bool Triangle::isValidInput(int side) {
  return side > 0;
}

bool Triangle::isValidInput(int sideA, int sideB) {
  return (sideA > 0) && (sideB > 0);
}

bool Triangle::init(
  int sideA,
  int sideB
) {
  if (this->isValidInput(sideA, sideB)) {
    this->first = sideA;
    this->second = sideB;

    return true;
  }

  cout << "Invalid data: received negative or zero value(-s)" << endl;
  return false;
}

void Triangle::read()
{
  int unsigned sideA;
  int unsigned sideB;

  do
  {
    cout << "Input value (only positive nums):" << endl;
    cout << " sideA = "; cin >> sideA;
    cout << " sideB = "; cin >> sideB;
    cout << endl;
  } while (!init(sideA, sideB));
}

void Triangle::display() {
  if (!isValidInput(this->first, this->second)) {
    cout << "Invalid data: received negative or zero value(-s)" << endl;

    return;
  }

  printf("sideA = %i\n", this->first);
  printf("sideB = %i\n", this->second);
  printf("hypotenuse = %.3f\n\n", this->hypotenuse());
}

int unsigned Triangle::getFirst() {
    return this->first;
}

void Triangle::setFirst(int side) {
  if (this->isValidInput(side)) {
    this->first = side;

    return;
  }

  cout << "Invalid data: received negative or zero value(-s)" << endl;
}

int unsigned Triangle::getSecound() {
  return this->second;
}

void Triangle::setSecound(int side) {
  if (this->isValidInput(side)) {
    this->second = side;

    return;
  }

  cout << "Invalid data: received negative or zero value(-s)" << endl;
}

double Triangle::hypotenuse() {
  return sqrt(pow(this->first, 2)
    + pow(this->second, 2));
}
