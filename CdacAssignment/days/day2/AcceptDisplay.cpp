#include<iostream>
using namespace std;
//3. Write a program to accept a character, an integer n and display the next n characters.

int main(){
	char a;
	int n;
	cout<<"enter the character:";
	cin>>a;

	cout<<"enter the integer:";
	cin>>n;

	for(int i=a+1;i<=a+n;i++){
		cout<<char(i);
	}

	return 0;
}
