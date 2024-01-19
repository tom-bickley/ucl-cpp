#include <iostream>
#include <vector>

using std::vector;

vector<double> add_vector(vector<double> A, vector<double> B)
{
    vector<double> C(A.size());
    for (int i = 0; i < C.size(); i++)
    {
        C[i] = A[i] + B[i];
    }
    return C;
}

vector<double> dot(vector<double> A, vector<double> B)
{
    vector<double> C(A.size());
    for (int i = 0; i < C.size(); i++)
    {
        C[i] = A[i] * B[i];
    }
    return C;
}

vector<double> normalize(vector<double> A)
{
    double c = 0.0;
    for (int i = 0; i < A.size(); i++)
    {
        c = c + (A[i] * A[i]);
    }
    for (int i = 0; i < A.size(); i++)
    {
        A[i] = A[i] / c;
    }
    return A;
}

int print_vector(vector<double> V)
{
    for (int i = 0; i < V.size(); i++)
    {
        std::cout << V[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}