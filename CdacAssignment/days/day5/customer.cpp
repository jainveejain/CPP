#include<iostream>
#include"customer.h"
using namespace std;

Customer :: Customer(){
    this->CustId = 1;
    this->name = "aman";
    this->city = "pune";
}
Customer :: Customer(int CustId, string name, string city){
    this->CustId = CustId ;
    this->name = name;
    this->city = city;
}
void Customer :: Display(){

cout<<CustId<<"  "<<name<<"  "<<city<<endl;

}
