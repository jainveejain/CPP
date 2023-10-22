#include<iostream>
using namespace std;

class Account{

//this is only declaration
private : int actId;
          string name , city, email;
          double balance;


 public : Account();
          Account(int actId, string name, string city,string email,double balance );
          void deposite(double amount);
          void withdraw(double amount);
          // destructor
          ~Account();
          void display();


};