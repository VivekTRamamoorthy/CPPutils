#ifndef MATLABCPP_H



#include <iostream>
#include "Matrix.h"
#include "Array.h"
#include "display.h"
#include "time.h"
// #include "zeros.h"

namespace MatlabCPP
{
    void tic(){
        std::cout << "Time elapsed is: " << std::endl;
    }


    Array linspace(double start, double end, int length){
        double data[length];
        for (int i = 0; i < length; i++)
        {
            data[i]=start+(end-start)/length *(i+1);
        }
        
        Array result= Array(data, length);


        return result;
    }
}



#endif // !MATLABCPP_H