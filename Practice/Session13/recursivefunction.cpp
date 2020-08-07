#include <iostream>

//fibonacci
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34 (0 + 1 = 1) (1 + 1 = 2) (2 + 1 = 3)

int fibonacci(int num)
{
    if (num <= 1)
        return num;
    else
        return (fibonacci(num - 1) + fibonacci(num - 2));
}

int fibonacci(int num);
int main()
{
    int num;
    int result = 0;
    std::cout << "Enter the term number in the fibonnaci series? " << std::endl;
    std::cin >> num;
    result = fibonacci(num);
    std::cout << "The " << num << "th term in fibonnaci series is:  " << result << std::endl;
    return 0;
}