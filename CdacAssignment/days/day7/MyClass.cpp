#include<iostream>
using namespace std;

class MyClass{
private :int no1 ,no2;
public :
		MyClass(int no1, int no2){
			this->no1 =no1;
			this->no2=no2;
		}
void display(){
	cout<<"no1 ="<<no1<<"  "<<"no2="<<no2;
}
friend void changeNumbers(MyClass &obj);//declaration of friend function

};
void changeNumbers(MyClass &obj){
	cout<<"Friend Function changing no1 and no2 in Myclass"<<endl;
	obj.no1=300;
	obj.no2= 400;
	cout<<"Numbers Are Getting Changed  :"<<endl;
	obj.display();
}
void shoWNumbers(MyClass &obj){
	obj.display();
}

int main (){
MyClass m1(12,34);
m1.display();
changeNumbers(m1);
	return 0;
}
