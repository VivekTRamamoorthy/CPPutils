#include <iostream>
#include  <string>
using namespace std;

int main(){
    cout << "Initializing strings\n";

    // Length of a string
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();

    // Concatenation
    cout << "\nTesting string operations \n";
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName;


    // Appending string
   
    fullName = firstName.append(lastName);
    cout << "\nThe appended name is : " << fullName;

    return 0;
}