#include <iostream>

int main()
{
    int arra[5];
    arra[0] = 100;
    arra[1] = 200;
    arra[2] = 245;
    arra[3] = 3000;
    arra[4] = 1276;

    int arra1[2] = {111, 2256};
    double arra2[2] = {1.222, 2.33};
    char name[5]= {'n', 'e', 'g', 'a', 'r'};

    std::cout << "arra[1]: " << arra[1] << std::endl;
    std::cout << "arra1[1]: " << arra1[1] << std::endl;
    std::cout << "arra2[1]:" << arra2[1] << std::endl;
    std::cout << "name[1]: " << name[0] << std::endl;
    return 0;
}