#include <iostream> // std::fixed
#include <iomanip>  // std::setprecision

int main()
{
    double f = 15489.567375;
    std::cout << std::setprecision(2) << f << std::endl;
    std::cout << std::setprecision(11) << f << std::endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << f << std::endl;
    std::cout << std::setprecision(11) << f << std::endl;
    return 0;
}