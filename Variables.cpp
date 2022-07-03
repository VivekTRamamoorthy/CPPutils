#include <iostream>
#include  <string>
using namespace std;

int main(){
    cout << "Initializing variables\n";

    int number = 39;
    const float pi = 3.14;
    double score = .90;
    char letter = 'Q';
    string name = "Bikes"; // to use string, using namespace std is necessary

    cout << number <<"\n" << score << "\n" << pi*number << "\n" << name;
    return 0;
}