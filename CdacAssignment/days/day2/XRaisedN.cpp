#include<iostream>
using namespace std;
//2. Write a program to accept two integers x and n and compute x raised to n.

int main(){
	//x=base,n= exp
	int base ,exp,result =1;
	cout<<"Enter the base and exponent: ";
	cin>>base>>exp;
	for(int i = 0;i<exp;i++){
		result = result*base;
	}
	cout<<"result="<<result;
	return 0;

}
