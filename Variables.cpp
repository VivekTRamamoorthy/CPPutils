#include <iostream>
#include  <string>
using namespace std;

int main(){
    std::cout << "Initializing variables\n";

    int number = 39;
    const float pi = 3.14;
    double score = .90;
    char letter = 'Q';
    string name = "Bikes";

    std::cout <<  pi*number << "\n" << name;
    return 0;
}