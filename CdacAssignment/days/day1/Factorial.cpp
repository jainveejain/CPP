#include<iostream>
using namespace std;

int main (){
int num ; long f=1;
cout<<"Enter the number:"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
f=f*i;
}

cout<<"the factorial is"<<f<<endl;

	return 0;
}
