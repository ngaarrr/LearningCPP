#include <iostream>
float getAverage(float array[], int length)
{
    float sum = 0.0;
    for (int index = 0; index < 5; ++index)
        sum = sum + array[index];
    return sum / length;
}

int main()
{
    float sum = 0.0;
    float average = 0.0;
    float grade[5];
    std::cout << "Enter 5 numbers: " << std::endl;
    for (int index = 0; index < 5; ++index)
    {
        std::cin >> grade[index];
        average = getAverage(grade, 5);
    }

    std::cout << "The average of 5 grades is: " << average << std::endl;
    return 0;
}
