#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    cout<<"The Natural Numbers are "<<"   ";
    cout<<"\n";
    for(i=1;i<=10;i++){
        cout<<i<<" ";
        
        sum=sum+i;
    }
    cout<<"\n";
    cout<<"The Sum is"<<"\n"<<sum<<endl;
    return 0;
}