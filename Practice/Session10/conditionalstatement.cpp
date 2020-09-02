#include <iostream>

int main()
{
    int N = 50;
    //if true, print
    if (N == 50)
    {
        std::cout << N << std::endl;
    }

    //if and else has only one condition
    if (N > 5)
    {

        std::cout << N << std::endl;
    }
    else
    {
        std::cout << "N is smaller than 5" << std::endl;
    }

    //if, else if, else. the condition is checked if prior ones are false
    if (N > 0)
    {
        std::cout << N << " is positive" << std::endl;
    }
    else if (N < 0)
    {
        std::cout << N << " is negative" << std::endl;
    }
    else
    {
        std::cout << "The number is 0" << std::endl;
    }
    return 0;
}