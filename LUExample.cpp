#include <iostream>
#include "LU.h"
#include "display.h"
// #include "CPPutils.h"

using namespace std;
int main(int argc, char *argv[])
{
    double Tol = 1e-6;
    int N = 3;
    int P[N][N];
    double A[3][3]= {
        {1.0 ,1.0,1.0},
        {1.0,2.0,3.0},
        {1.0,3.0,5.0},
    };

    display(10);
    // int res = LUPDecompose(A,N,Tol, P);
    // int LUPDecompose(double **A, int N, double Tol, int *P)
    // cout << "The result is" << res << endl;
    return 0;
}