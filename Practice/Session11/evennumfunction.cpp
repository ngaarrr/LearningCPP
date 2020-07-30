#include <iostream>

bool findEvenNumber(int a)
{

    if (a % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int N = 0;
    int evennum;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> N;
    if (findEvenNumber(N))
        std::cout << "The number is even " << std::endl;
    else
        std::cout << "The number is odd " << std::endl;
    return 0;
}