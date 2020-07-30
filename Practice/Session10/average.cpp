#include <iostream>

int main()
{
    float sum = 0.0;
    float average = 0.0;
    float grade[5];
    std::cout << "Enter 5 numbers: " << std::endl;
    for (int index = 0; index < 5; ++index)
    {
        std::cin >> grade[index];
        sum = sum + grade[index];
        average = sum / 5;
    }

    std::cout << " The average of 5 grades is: " << average << std::endl;
    return 0;
}