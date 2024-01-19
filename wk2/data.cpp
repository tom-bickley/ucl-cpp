#include <iostream>

int main()
{
    int x = 15;
    std::cout << "x is stored at address " << &x << " and has value " << x << std::endl;
    x += 10;  // Increment the value of x by 1. 
    std::cout << "x is stored at address " << &x << " and has value " << x << std::endl;
    return 0;
}