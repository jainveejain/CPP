#include<iostream>
using namespace std;

template<class T> void swapGenric(T &a,T &b){
T temp =a;
a=b;
b=temp;
cout<<"Swapping using template"<<endl;
}
int main(){
 int a = 10,b = 20;
 swapGenric(a,b);
 cout<<"after swap"<<a<<"  "<<b;
 
  float c=90.234,d=20.4657;
  swapGenric(c,d);
  cout<<"after swap"<<c<<"  "<<d;
  
  double i = 234.546,j= 654.756;
  swapGenric(i,j);
  cout<<"after swap"<<i<<"  "<<j;
  
}




