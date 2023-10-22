#include<iostream>
using namespace std;

int main(){
	int a = 10;
	cout.width(5);
	cout<<"A ="<<a<<endl;
	cout.width(10);
	cout<<"A="<<a<<endl;
	cout.width(2);
	cout<<"A="<<a<<endl;
	cout.fill('*');
	cout.width(5);
	cout<<a<<endl;
	//peek() demo
		//First char value
char d;
cout<<"Please enter a character to be read by the peek() function : ";
//Calling the peek() function to return the next character from input stream, without  intremoving it from the stream
d = cin.peek();

	//Printing the first char value
		cout<<"The value in d is : " << d <<"\n";
		//setf() demo
			//A floating-point value
		 float d1 = 12.3458998f;
		 //Printing the floating-point value
		 //	cout<< "The floating value in variable d : " << d <<"\n";

		 	//Calling setf() function to set the flags to display a fixed number of digits after decimal in a floating-point value.
		 	cout.setf(ios::fixed, ios::floatfield);
		 	//Defining the number of digits to be displayed after the decimal in a floating number.
		 	cout.precision(3);

		 	//Printing the floating-point value after calling the setf() and precision() function
		 	cout<< "The floating value in variable d, after calling the precision() function : " << d1<<endl;


		 	char c;
		 	cout<<"Enter Char "<<endl;
		 	cin.get(c);
		 	cout<<"Char Is :"<<c<<endl;
		 	cout<<"Enter Again:"<<endl;
		 	cin>>c;
		 //	cout<<"Char Is :"<<c;
		   cout.put(c);
		   //using getLine
		   char line[100];
		   cin.ignore();
		   cout<<"Enter Into Array:"<<endl;
		   cin.getline(line,20);
		   cout<<"Data in Array:"<<endl;
		   cout.write(line,20);
		   //
		 	return 0;


}
