#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"enter the numbers :";
	cin>>num;
	for(int i=1;i<=num;i++){

		if(num%i==0){
			cout<<"factor of given number is : "<<i<<endl;
		}
	}

	return 0;
}
