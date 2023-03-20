#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter num to print fibonacci series ";
   cin>>n;
   int a=0;
   int b=1;
   cout<<a<<" "<<b<<" "<<endl;
   for(int i = 0; i<=n; i++){
      int nextnum = a+b;
      cout<<nextnum<<" "<<endl;
      a=b;
      b=nextnum;
   }
   return 0;
}