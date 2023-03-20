#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int num;
    string string;
  } myStructure;

  myStructure.num = 1;
  myStructure.string = "Hello World!";

  cout << myStructure.num << "\n";
  cout << myStructure.string << "\n";
  return 0;
}
