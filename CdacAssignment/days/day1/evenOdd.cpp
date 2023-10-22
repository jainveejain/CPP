#include<iostream>
using namespace std;

int a;

void evenOdd(){

	if(a%2==0){

		cout<<"Even number";
	}
	else
		cout<<"Odd number";
}

int main(){
	cout<<"enter number :"<<endl;
	cin>>a;
	evenOdd();
}
