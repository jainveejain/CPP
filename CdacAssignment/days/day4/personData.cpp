#include<iostream>
using namespace std;
//2. Create a class Person with data members as name, age, city.
//members. Also add accept and  display function. . Create the
//object of this class in main method and invoke all the methods in that class.
 class Person{
	private: string name, age, city;
	public: void acceptDetails(){
		cout<<"Enter the name age city:"<<endl;
		cin>>name>>age>>city;
	}
			void displayDetails(){
				cout<<"Name:"<<name<<"  "<<"Age:"<<age<<"  "<<"City:"<<city<<endl;
			}
};



int main(){
	Person p;
	p.acceptDetails();
	p.displayDetails();

return 0;
}
