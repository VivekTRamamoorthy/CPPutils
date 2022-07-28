#include "display.h"
#include "disp.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){

    double A=10.0;
    disp("A has ");
    disp(A);

    double* B =&A ;
    disp("B has");
    disp(B);
    disp("*B has");
    disp(*B);
    disp("&A has");
    disp(&A);
    
    double array1[3] = {1.0,1.0,1.0};
    double array2[3] = {1.0,2.0,3.0};
    double array3[3] = {1.0,3.0,5.0};

    cout << sizeof(array1) <<endl;
    display(array1,sizeof(array1)/sizeof(array1[0]));
    display(array2,3);
    display(array3,3);

    double matrix[3][3] = {
        {1.0,1.0,1.0},
        {0.0,1.0,0.0},
        {3.0,4.0,5.0},
    };

    double *pointerArray1;
    double *pointerArray2;
    double *pointerArray3;

    // displaySize(pointerArray1);

    pointerArray1 = array1; // variable array1 is actually the pointer to array1[0]
    pointerArray2 = array2;
    pointerArray3 = array3;



    double C[10][10] ;

    // displayRaw(C);

    double* pointerArray[3] = {pointerArray1, pointerArray2, pointerArray3};

    // C = pointerArray;

    // display(sizeof(C));
    // displayMatrix(matrix);

    return 0;


}

