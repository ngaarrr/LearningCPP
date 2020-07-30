#include <iostream>

int main()
{
    signed int x;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> x;
    if (x >= 0)
        std::cout << "Absolute value is: " << x << std::endl;
    else if (x < 0)
        std::cout << "Absolute value is: " << abs(x) << std::endl;
    return 0;
}