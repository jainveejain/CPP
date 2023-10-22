#include<iostream>
using namespace std;

int main() {
	long fact = 1;
	int num;
	cout << "enter the number";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	cout << "the factorial is :" << fact;

	return 0;
}
