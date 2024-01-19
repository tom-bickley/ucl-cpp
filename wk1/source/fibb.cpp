#include <iostream>
#include <string>

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main() 
{
    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 0; i < 100; i++)
    {
        std::cout << "step = " << i << " result = " << b << std::endl;
        c = add(a,b);
        a = b;
        b = c;
    }
    return 0;
}