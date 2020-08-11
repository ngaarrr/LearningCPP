#include <iostream>

// Type Casting - converting one datatype to another
int main()
{
    float f1 = 10.582f;
    int i1 = f1;      // implicit conversion
    int i2 = (int)f1; // explicit conversion
    std::cout << "i1 is: " << i1 << std::endl;

    //auto allows the compiler to choose the datatype
    auto x = 2 / 2;
    auto y = 10.0 / 2.0;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}