#include<iostream>
using namespace std;
//21. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the
//corresponding operation and displays the result.


int main(){
	int a,b,result;
	char op;

	cout<<"choose the operation: 1:+ , 2: -, 3 : *, 4 :/ "<<endl;
    cout<<"Enter the operator:"<<endl;
    cin>>op;
    cout<<"Enter the no1:"<<endl;
    cin>>a;
    cout<<"Enter the no2:"<<endl;
    cin>>b;

    switch(op){
    case '+' :
	result = a+b;
    cout<<"addition :"<<result;
    break;

    case '-' :
    	result = a-b;
        cout<<"subtraction :"<<result;
        break;

    case '*' :
    	result = a*b;
        cout<<"multiplication :"<<result;
        break;

    case '/' :
    	result = a/b;
        cout<<"division :"<<result;
        break;

    default:
    	cout<<"invalid operation entered"<<endl;
    }

	return 0;
}
