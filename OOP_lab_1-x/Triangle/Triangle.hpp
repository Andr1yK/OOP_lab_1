//
//  Triangle.hpp
//  OOP_lab_1-x
//
//  Created by Andriy Kobetiak on 22.09.2022.
//

#ifndef Triangle_hpp
#define Triangle_hpp

class Triangle
{
  private:
    int unsigned first;
    int unsigned second;

  public:
    Triangle(int sideA, int sideB);
    void setFirst(int side);
    void setSecound(int side);

    double hypotenuse();
};


#endif /* Triangle_hpp */
