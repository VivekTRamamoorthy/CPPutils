
#ifndef DISPLAY_H



#include <iostream>
using namespace std;



void display(string V){
    cout << V << endl;
}

void display(int V){
    cout << V << endl;
}

void display(float V){
    cout << V << endl;
}

void display(double V){
    cout << V << endl;
}

void display(double V[], int length){
    cout << "Vector (" << length << "): "<<endl << "[ ";
    for (int i = 0; i < length; i++)
    {
        cout << V[i] << ", " ;
    }
    cout << "]" << endl;
}

void display(Array V){

    cout << "Vector (" << V.length << "): "<<endl << "[ ";
    for (int i = 0; i < V.length; i++)
    {
        cout << V.data[i] << ", " ;
    }
    cout << "]" << endl;
}

void display(double **V, int row, int col){
    cout << "Matrix (" << row << ", " << col << "): "<<endl ;
    cout <<  "[ "<< endl;
    for (int i = 0; i < row; i++)
    {
        cout <<  "[ ";
        for (int j = 0; j < col; j++)
        {
            cout << V[i][j] << ", " ;
        }
    cout << " ]," << endl;
    }
    cout << " ]" << endl;
}


#endif // !DISPLAY_H