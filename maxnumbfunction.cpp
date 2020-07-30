#include <iostream>

int findMaxNumber(int x, int y)
{
    int maxnum = 0;
    if (x > y)
        maxnum = x;
    else if (x < y)
         maxnum = y;
    return maxnum;
}

int main()
{
    int maxnum;
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    maxnum = findMaxNumber(x, y);
    std::cout << "The maximum number is: " << maxnum << std::endl;
    return 0;
}
