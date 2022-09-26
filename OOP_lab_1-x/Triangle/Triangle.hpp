//
//  Triangle.hpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 22.09.2022.
//

#ifndef Triangle_hpp
#define Triangle_hpp

using namespace std;

class Triangle {
private:
  int unsigned first;
  int unsigned second;
  double hypotenuse();
  bool isValidInput(int value);
  bool isValidInput(int  sideA, int sideB);

public:  
  bool init(int sideA, int sideB);
  
  void read();
  
  void display();

  int unsigned getFirst();
  void setFirst(int side);

  int unsigned getSecound();
  void setSecound(int side);
};

#endif /* Triangle_hpp */
