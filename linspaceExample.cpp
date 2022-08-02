#include "MATLABCPP.h"
#include <iostream>
using namespace MatlabCPP;
int main(int argc, char const *argv[])
{
    int length;
    double start = 0;
    double end = 100;
    length = 6;
    Array array = linspace(start, end, length);
    display(array);
    array.display();
    return 0;
}

// valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./linspaceExample
// g++ linspaceExample.cpp -o linspaceExample && ./linspaceExample