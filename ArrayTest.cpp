#include <iostream>
#include "Array.h"
// #include <Array>
#include "display.h"

void createAndDestroyAnArray()
{
    Array arr(3);
    // free(arr.data)
}

int main(int argc, char const *argv[])
{
    // Array class testing script

    Array arr1(10);
    arr1.display();
    arr1 += 1.0;
    arr1.display();
    // Array uninitiated;

    // Array arr2 = Array(10);
    // arr2 = arr1+1.0;
    // Array arr2 = new Array(double a[]={1.0, 2.0, 3.0},3);

    createAndDestroyAnArray();

    // std::cout
    return 0;
}

// g++ ArrayTest.cpp -o ArrayTest && ./ArrayTest
