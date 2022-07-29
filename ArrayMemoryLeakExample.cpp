#include<iostream>

int main(int argc, char const *argv[])
{
    double* array = new double(90);
    delete array;
    std::cout << "hello" ;
    return 0;
}
