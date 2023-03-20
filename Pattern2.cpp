#include<iostream>
using namespace std;
int main(){
    int n=5;
    int row = 1;
    int col = 1;
    while(row<=n){
        col = 1;
        while(col<=row){
            char ch='A'+row+col-2;
            cout<<ch;
            col = col +1;

        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}