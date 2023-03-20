#include<iostream>
using namespace std;

int main(){
    int n,f=1;
    cout<<"Enter a num for factorial ";
    cin>>n;

    for(int i=1; i<=n; i++){
        f=f*i;
    }
    cout<<"The factorial of "<<n<<" is "<<f;
    return 0;
}