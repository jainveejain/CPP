//============================================================================
// Name        : CdacAssignment.cpp
// Author      : Jainvy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int a, b ,temp;

void SwapTwoNo(){

	temp = a;
	a = b;
	b= temp;
cout<<"function called"<<endl;
}


int main() {
	a = 10;
	b= 20;
	cout<<"Before swap :"<<a<<b<<endl;
	SwapTwoNo();
	cout<<"After Swap :"<<a<<"  "<<b;



	return 0;
}
