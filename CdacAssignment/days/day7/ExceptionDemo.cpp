#include<iostream>
using namespace std;

int main(){
int a,b,c;
	try{
		cout<<"no1 no2"<<endl;


		c=a+b;
		cout<<"add="<<c<<endl;
		c=a-b;
		cout<<"Subs="<<endl;
		if(b<0){
			throw"number is <0";
			cout<<"---this is code after throw---"<<endl;
		}
		if(b==0)
		{
		throw 909;
		}
		c=a/b;
		cout<<"Div="<<c<<endl;
		c=a*b;
		cout<<"Multi="<<c<<endl;
	}
	catch(int no){
		cout<<"divided by zero"<<endl;
	}
	catch(double d){

	}
	catch(const char*str){
		cout<<"Error:"<<str<<endl;
	}
	catch(...){
		cout<<"------exception-----"<<endl;

	}
	cout<<"----end of main-------"<<endl;
return 0;
}
