#include <iostream>
#include <string>

#include "headerLib.h"

int factorial(int num);

int main()
{
    int num = 4;
    int result = 0;
    result = headerlib::factorial(num);
    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    //three dimensional array
    int x[2][3][2] =
        {
            {
                {2, 3},
                {3, 4},
                {7, 9},
            },
            {
                {1, 5},
                {6, 1},
                {8, 1},
            }};
    int counter = 0;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                std::cout << "x[" << i << "][" << j << "][" << k << "]: " << x[i][j][k] << std::endl;
                counter++;
            }
        }
    }
    std::cout << "counter: " << counter << std::endl;
}
