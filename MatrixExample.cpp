#include <iostream>
#include "Matrix.h"
#include "Matrix.cpp"


int main(int argc, char const *argv[])
{
   int row =2;
   int col = 2;
    Matrix A(row,col);
    std::cout<< "program finished"<<std::endl;
    std::cout<<A;

    return 0;
}
