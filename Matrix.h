#ifndef _MATRIX_H
#define _MATRIX_H
#include<iostream>
class Matrix{
private:
    int rows;
    int cols;
    double **data;
    void AllocateMemory();
public:
    // Constructors
    Matrix();
    Matrix(int,int);
    Matrix(double*,int, int);
    
    // Destructor
    ~Matrix();

    // Element access tool
    inline double& operator()(int row, int col){ return data[row][col]; }

    // Print access for cout and cin
    friend std::ostream& operator<<(std::ostream&, const Matrix&);
    friend std::istream& operator>>(std::istream&, Matrix&);

    // Operator overloading for basic operations
    Matrix operator+(Matrix&);
    Matrix operator+(double);
    
    Matrix operator-(Matrix&);
    Matrix operator*(Matrix&);

    Matrix operator/(Matrix&);

    void display();
    void size();
    // Matrix zeros(int row, int col);

};



#endif