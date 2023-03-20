#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr Num";
    cin>>n;

    bool prime=true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    if(prime){
        cout<<"Prime";

    }
    else{
        cout<<"not Prime";
    }
    return 0;
}