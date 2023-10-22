#include<iostream>
using namespace std;

namespace Bank{

class BankException{
public : string message;
public : BankException(string msg){
	this->message = msg;

	}
void show(){
		cout<<"Low Balance Bank Exception"<<endl;
	}
};
class BankAccount{
	double balance;
public : BankAccount(double bala){
	this->balance=bala;

}
void withdraw(double amount){
	BankException minEx("Minimum Balance");
	BankException amtEx("Amount>bal");
	if(this->balance<5000){
		throw minEx;
	}
	if(amount>this->balance){
		throw amtEx;   //throw userDefined exception
	}
	cout<<"inside withdraw"<<endl;
	this->balance =this->balance-amount	;
	cout<<"After Withdraw  "<<this->balance<<endl;

}
void display(){
	cout<<"Balance="<<balance<<endl;
}
};
class BankEmployee{

};
};

int main(){


	try{

		typedef Bank::BankAccount  AxisBank;
		Bank::BankAccount bk(5000);
		Bank::BankEmployee be;
		AxisBank act3(10000);
		act3.display();
		cout<<"Enter Amount To Withdraw:"<<endl;
		double  amount;
		cin>>amount;
		act3.withdraw(amount);

		act3.display();


	}catch(Bank::BankException &bk){
		   //bk.show();
		cout<<"Bank Exception : "<<bk.message;
	}
	catch(int a){

	}
	catch(const char*){

	}
	catch(...){
		cout<<"Exception:"<<endl;
	}



	return 0;
}
