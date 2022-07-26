#include <iostream>
#include <string>
using namespace std;

int main() {
  string names[4] = {"Vivek", "Pree", "Ram", "Sanjay"};
  cout << names[1] << endl;
  cout << sizeof(names)/sizeof(names[0]);
  return 0;
}
