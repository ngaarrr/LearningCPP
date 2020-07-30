#include <iostream>

int main()
{

    int N = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> N;
    switch (N % 2)
    {
    case 0:
        std::cout << "number is even: " << N << std::endl;
        break;

    case 1:
        std::cout << "number is odd: " << N << std::endl;
        break;
    }
    return 0;
}
