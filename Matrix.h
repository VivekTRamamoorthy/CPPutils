#ifndef MATRIX_H
#define MATRIX_H



class Matrix
{
public:
    int nRows;
    int nCols;
    int *data;
    Matrix(int inputData[],int inputRow, int iCol)
    {
    nRows = inputRow;
    nCols = iCol;

    data = inputData;
    
    }
    Matrix()
    {
    nRows = 0;
    nCols = 0;

    data = 0;
    
    }
    ~Matrix();
};

/* code */
#endif //MATRIX_H