#include <iostream>

int main()
{
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;

    if (x > y)
        std::cout << "x > y" << std::endl;
    else if (x < y)
        std::cout << "x < y" << std::endl;
    return 0;
}
