#include<iostream>
using namespace std;
 int main(){
    int data[3][4]={3,4,5,6,4,7,4,5,3,4,4,5};
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++){
            cout<<data[i][j]<<"   ";
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
 }