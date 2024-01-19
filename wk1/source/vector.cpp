#include <iostream>
#include <string>
#include <vector>

#include "vector_funcs.hpp"

using std::vector;

int main()
{
    vector<double> A = {1.9, 2.1, 3.2, 4.3, 5.4};
    vector<double> B = {1.0, 0, 0, 0, 0, 0, 0, 0};
    print_vector(A);
    print_vector(B);
    A = normalize(A);
    B = normalize(B);
    print_vector(A);
    print_vector(B);
    
    if (A.size() == B.size())
    {
        vector<double> C(A.size());
        vector<double> D(A.size());
        C = add_vector(A, B);
        D = dot(A, B);
        print_vector(C);
        print_vector(D);
    }
    else
    {
        std::cout << "invalid vector sizes" << std::endl;
    }
    return 0;
}