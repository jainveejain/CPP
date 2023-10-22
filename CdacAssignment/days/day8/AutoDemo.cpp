#include<iostream>
using namespace std ;

int main(){
	cout<<"----------------"<<endl;
	auto x =2;
	auto y = 3.13;
	auto z = 4.234f;
	auto c = 'c';
	auto ptr = &x;
	auto pptr = &ptr; // pointwr to a pointer
	cout<<typeid(x).name();
	  cout  <<typeid(y).name()<<endl;
	  cout <<typeid(z).name()<<endl;
	  cout <<typeid(c).name()<<endl;
	  cout <<typeid(ptr).name()<<endl;
	  cout <<typeid(pptr).name()<<endl;

	return 0;
}
