#include<iostream>
using namespace std;
//Bank Account Inheritance:
//Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount with attributes like account number and balance. Derive classes like SavingsAccount and CheckingAccount,
//each with specialized methods like withdraw() and calculate_interest().
class BankAccount {
private:
	double accountNo, balance;
public:
	void withdraw(int Amount) {

	}
	void calculate_interest() {

	}
};

class SavingAccount: public BankAccount {
public:
	void withdraw(int Amount) {
		balance = balance - Amount;
		cout << "Balance after withdraw" << balance << endl;
	}
};

class CheckingAccount: public BankAccount {

	cout<<"Enter the balance"<<endl;cin>>balance;int Interest =
};

int main() {
	int amount;
	cout << "Enter the Amount to withdraw:" << endl;
	cin >> amount;
	BankAccount b;
	b.withdraw(amount);

	return 0;
}
