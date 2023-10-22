#include<iostream>
using namespace std;
//gcd/hcf
int main() {
	int num1, num2, min;
	cout << "enter number one :";
	cin >> num1;
	cout << "enter number second :";
	cin >> num2;

	if (num1 < num2) {
		min = num1;

	} else {
		min = num2;

	}

	for (int i = min; i >= 1; i--) {
		if ((num1 % i == 0) && (num2 % i == 0)) {
			cout<<"value "<<i;
			break;

		}

	}
}
