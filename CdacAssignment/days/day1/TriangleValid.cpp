#include<iostream>
using namespace std;

int main(){
	int a ,b ,c;
	cout<<"enter angle one"<<endl;
	cin>>a;

	cout<<"enter angle second"<<endl;
	cin>>b;

	cout<<"enter angle third"<<endl;
	cin>>c;
	if(a+b+c==180){
	cout<<"triangle is valid"<<endl;
	}
	else{
	cout<<"triangle is not valid"<<endl;
	}
		return 0;
}

