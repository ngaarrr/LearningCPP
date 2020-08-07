#include <iostream>
#include <string>

//pointer: a variable that stores a memory address

int main()
{
    int x = 5;
    //int pointer = &x; ??
    int *ptr = &x; //*ptr points to the value of x
    int **sPtr = &ptr;
    std::cout << "x: " << x << std::endl;           //value
    std::cout << "&x: " << &x << std::endl;         //address of x
    std::cout << "ptr: " << ptr << std::endl;       //ptr = &x
    std::cout << "&ptr: " << &ptr << std::endl;     //address of ptr
    std::cout << "*ptr: " << *ptr << std::endl;     //points to the value of the stored address
    std::cout << "sPtr: " << sPtr << std::endl;     //sPtr = &ptr
    std::cout << "*sPtr: " << *sPtr << std::endl;   //points to the value of ptr/&x
    std::cout << "**sPtr: " << **sPtr << std::endl; //points to the value x

    int v = 5;
    int *ip = &v;
    std::cout << "v: " << v << std::endl;
    std::cout << "&v: " << &v << std::endl;
    std::cout << "*ip: " << *ip << std::endl;

    *ip = 7; //changes the initial value but the address stays the same //why not int *ip??
    std::cout << "v: " << v << std::endl;
    std::cout << "&v: " << &v << std::endl;
    std::cout << "*ip: " << *ip << std::endl;

    //Arrays
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = nums; // &nums[0]
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;
    *p = 10;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;
    p++; //adds 4 bytes
    *p = 20;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;
    *(++p) = 30; // nums[2] = 30; ???????
    p = nums + 3;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl; //????????????
    *p = 40;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;

    //strings
    char name[] = "negar";
    std::cout << "name: " << name << std::endl;
    const char *name2 = "negar";
    std::cout << "name " << *name2 << std::endl;
}
