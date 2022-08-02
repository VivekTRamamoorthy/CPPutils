#include <iostream>
#include "Matrix.h"

Matrix::Matrix()
{
    data = NULL;
};
void Matrix::AllocateMemory(){
     data = new double *[rows]; // requesting memory for double pointer array
    for (size_t row = 0; row < rows; row++)
    {
        data[row] = new double[cols]; // assigning double arrays to each pointer
    }
}
Matrix::Matrix(int iRows, int iCols)
{
    rows = iRows;
    cols = iCols;
    AllocateMemory();
};
Matrix::Matrix(double iDataArray[], int iRow, int iCol)
{
    rows = iRow;
    cols = iCol;
    int p = 0;
    data = new double *[rows];
    for (int row = 0; row < rows; row++)
    {
        data[row] = new double[cols];
        for (int col = 0; col < cols; col++)
        {
            data[row][col] = iDataArray[p];
            p++;
        }
    }
};

// destructors
Matrix::~Matrix()
{
    if (data)
    { // if data points to something
        for (int row = 0; row < rows; row++)
        {
            delete[] data[row];
        }
        delete[] data;
    }
};

// operators
//  Matrix::Matrix operator+(int integer);
//  Matrix::Matrix operator+(double real){

// };
// Matrix::Matrix operator+(Matrix &matrix){

// };

// Matrix operator-(int matrix);
// Matrix operator-(double matrix);
// Matrix operator-(Matrix &matrix);

// Matrix operator+=(Matrix &matrix);
// Matrix operator+=(Matrix &matrix);
// Matrix operator+=(Matrix &matrix);

// Matrix operator-=(Matrix &matrix);
// Matrix operator-=(Matrix &matrix);
// Matrix operator-=(Matrix &matrix);

// display
void Matrix::display()
{
    std::cout << "Matrix (" << rows << ", " << cols << "): " << std::endl;
    std::cout << "[ " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        std::cout << "[ ";
        for (int j = 0; j < cols; j++)
        {
            std::cout << data[i][j] << ", ";
        }
        std::cout << " ]," << std::endl;
    }
    std::cout << " ]" << std::endl;
};
std::ostream& operator<<(std::ostream& outStream, const Matrix& matrixToPrint)
{
    std::cout << "Matrix (" << matrixToPrint.rows << ", " << matrixToPrint.cols << "): " << std::endl;
    for (int i = 0; i < matrixToPrint.rows; ++i) {
        outStream << "   "<< matrixToPrint.data[i][0];
        for (int j = 1; j < matrixToPrint.cols; ++j) {
            outStream << "  " << matrixToPrint.data[i][j];
        }
        std::cout << "   " << std::endl;
    }

    return outStream;
}
