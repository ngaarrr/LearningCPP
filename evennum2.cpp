#include <iostream>

int main()
{
    int N = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> N;
    if (N % 2 == 0)
        std::cout << "This number is even: " << N << std::endl;
    else if (N % 2 != 0)
        std::cout << "This number is odd: " << N << std::endl;
    return 0;
}