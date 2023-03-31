#include<iostream>
using namespace std;
int main(){
	int arr[8]={500,200,100,50,20,10,5,2};
	int amount,temp;
	cout<<"Enter Amount ";
	cin>>amount;

	temp=amount;

	for(int i=0;i<8;i++){
		cout<<arr[i]<<" "<<"Notes is = "<<temp/arr[i]<<endl;
		temp=temp%arr[i]; 
	}
 return 0;
}