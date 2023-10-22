#include<iostream>
using namespace std;

int main(){
	double bs ;float tax;
	cout<<"Enter your basic salary:"<<endl;
	cin>>bs;
	if (bs<50000){
	cout<<"In this slab No Tax"<<endl;
	}
	else if(300000 > bs && bs > 50000){
		tax = (bs*20)/100;
		cout<<"The Tax is:"<<tax<<endl;
	}
	else if(bs>300000){
		tax=(bs*30)/100;
		cout<<"the tax is:"<<tax<<endl;
	}
	else
		cout<<"invalid input"<<endl;
	return 0;
}
