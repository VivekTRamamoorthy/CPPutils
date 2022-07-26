#include <iostream>
using namespace std;

int forloopexample();

class Animal
{
private:
    /* data */
public:
    Animal(/* args */);
    ~Animal();
};

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}


int main(){
    cout << "Class example\n";
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