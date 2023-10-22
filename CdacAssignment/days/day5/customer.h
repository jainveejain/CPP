#include<iostream>
using namespace std;

 class Customer {
private : int CustId;
          string name;
          string city;
  
 public : Customer();
          Customer(int CustId, string name,string city);
 void Display();
 };