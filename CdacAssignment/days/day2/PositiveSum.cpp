#include<iostream>
using namespace std;
//1:Write a program that accepts numbers continuously as long as the number is positive and prints the
//sum of the given numbers.

int main() {
	int n=0, sum = 0;

	while (true) {
		cout << "Enter the number:" << endl;
		cin >> n;

		if(n >=0){
			sum = sum + n;
		}else{
			break;
		}
	}

	cout << "the sum is :" << sum << endl;

	return 0;
}
