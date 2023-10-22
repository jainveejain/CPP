#include<iostream>
using namespace std;

int main(){
	char c;
	cout<<"Enter the character:"<<endl;
	cin>>c;
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
		cout<<"character is vowel"<<endl;
	}
	else{
		cout<<"character is consonent"<<endl;
	}

	return 0;
}
