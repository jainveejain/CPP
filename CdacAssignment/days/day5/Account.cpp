#include<iostream>
#include"Account.h"
using namespace std;

Account :: Account(){
cout<<"------Default Constructor-----"<<endl;
this->actId = 101;
this->name = "Ram";
this->city = "pune";
this->email = "r@gmail";
this->balance = 1000;
}

Account :: Account(int actId, string name, string city,string email,double balance ){

cout<<"-----parameterized constructor------"<<endl;
this->actId = actId;
this->name = name;
this->city =city;
this->email = email;
this->balance = balance;
}

void Account:: deposite(double amount){
 balance = balance + amount;
cout<<"After deposite the balance is :"<<balance<< endl;
}

void Account:: withdraw(double amount){
    balance = balance - amount;
    cout<<"After withdraw the balance is :"<<balance<< endl;
}

void Account ::display(){
    
    cout<<actId<<"  "<<name<<"  "<<city<<"  "<<email<<"  "<<balance<<endl;
}

Account ::~Account(){
cout<<"-----Destructor get called------"<<endl;
}

