#include<iostream>
#include<string>
using namespace std;

int main(){

string names[]={"Asim", "Azeem", "Kalia", "Yahiya", "Babloo"};
for(int i=0; i<=4; i++){
  cout << i << " = " << names[i] <<"\n";
}
return 0;
}