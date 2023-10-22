#include<iostream>
using namespace std;

int main(){
	int no;
	cout<<"Enter the number:"<<endl;
	cin>>no;
	if(no%5==0 && no%7==0)
		cout<<"the given number is divisable"<<endl;
	else
		cout<<"the given number is not divisable"<<endl;



	return 0;
}
