#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int roll;
    string name;
  } student;

  student.roll = 420;
  student.name = "Bush";

  cout << student.roll << "\n";
  cout << student.name << "\n";
  return 0;
}
