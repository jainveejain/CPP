#include<iostream>
using namespace std;
class Account{
private : double balance;
public :
		Account(double bal){
			this->balance = bal;
		}
		//get balance using getter
	double const getBalance(){
		//using const_cast inside const method
				//use const_cast for allowing modification of data member
				//in this method
	(const_cast<Account*>(this))->balance = balance+1000;
	cout<<"now balance after modification:"<<balance<<endl;
	//this->balance = balance-1000;
	}
};

int main(){
Account a1(5000);
cout<<"balance:"<<a1.getBalance();
//convert float into int
float f = 20.90;
int b=f;//implicitly
cout<<"int:"<<b<<endl;
//using static cast
int c = static_cast<int>(f);
cout<<"casted float int int:"<<c<<endl;

//const cast:
// const_cast is a type of casting operator used to add or remove the const qualifier from a pointer, reference, or object
const int cnst =120;
cout<<cnst<<endl;
//cnst = 9000;
int &y =const_cast<int&>(cnst);

cout<<"const :"<<cnst<<"  ref:"<<y<<endl;
y++;
cout<<"const:"<<cnst<<"  ref:"<<y<<endl;
	return 0;
}
