#include <iostream>
using namespace std;

int forloopexample();

int main(){
    cout << "Printing numbers from 0 to 9\n";
    forloopexample();
    return 0;
}

int forloopexample(){
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        cout<< i << "\n" ;
    }
    return 0;
}