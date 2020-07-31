///won't run into problems incase you include the header into another one
#ifndef HEADERLIB_H
#define HEADERLIB_H

#include <iostream>
#include <string>

namespace headerlib
{
    void printMsg(std::string msg)
    {
        std::cout << msg << std::endl;
    }

    void printMsg(int value)
    {
        std::cout << value << std::endl;
    }

    int factorial(int num)
    {
        if (num > 1)
            return num * factorial(num - 1);
        else
            return num;
    }
} // namespace headerlib

#endif
