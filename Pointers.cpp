#include <iostream>
#include <string>
using namespace std;

int main() {
  string name = "Gowthaman";  // A string variable
  string* ptr = &name;  // A pointer variable that stores the address of name

  // Output the value of name
  cout << "name is : " << name << "\n";

  // Output the memory address of name
  cout << "&name is : " << &name << "\n";

  // Output the memory address of name with the pointer
  cout << "ptr is : " << ptr << "\n";
  return 0;
}
