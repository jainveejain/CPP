#include<iostream>
using namespace std;
//5. Create a class ComplexNumber with data members real, imaginary. Create  AcceptComplexNumber()
//and the display function. Create the object of this class in main method and invoke all the methods in that class


int main(){
	class ComplexNumber{
private:int real;
        int imaginary;

public:void acceptComplexNumber(){
	cout<<"Enter the real number"<<endl;
	cin>>real;
	cout<<"Enter the imaginary numbers"<<endl;
	cin>>imaginary;
}
	 void displayComplexNumbers(){
		cout<<"real number:"<<real<<"  "<<"imaginary number"<<imaginary<<endl;
		cout<<"complex number ="<<real<<" + "<<imaginary<<endl;
	}
	};


	return 0;
}
