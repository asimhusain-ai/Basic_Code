#include<iostream>
using namespace std;
 int main(){
    int n = 4;

    int row = 1;

    while(row<=n){
        int space = n - row;
        while(space){
            cout<<" ";
            space = space -1;
        }
        int i = 1;
        while(i <= row){
            cout<<"*";
            i = i + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
 }