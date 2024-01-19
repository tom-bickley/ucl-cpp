#include <iostream>
#include <string>
#include "add.hpp"

int main() 
{
    int x = 5;
    int y = 7;
    double z = 1.2;
    std::string s = "this is a string";

    std::cout << "x is equal to" << x << std::endl;
    std::cout << "Hello World" << std::endl;

    int w = add(x, y);
    std::cout << "x + y is" << w << std::endl;

    if (x > 10)
    {
        std::cout << "x is > 10" << std::endl;
    }
    else
    {
        std::cout << "x is < 10" << std::endl;
    }
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i =" << i << std::endl;
    }
    return 0;
}