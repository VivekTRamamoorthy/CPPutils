#include "Matrix.h"

Matrix zeros(int row, int col){

    
    int zerodata[row*col];
    for (int i = 0; i < row*col; i++)
    {
        zerodata[i]=0;
    }
    
    Matrix newMatrix(zerodata,row,col);
    return newMatrix;
}