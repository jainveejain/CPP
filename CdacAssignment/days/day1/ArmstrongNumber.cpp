#include<iostream>
using namespace std;

int main() {
	int n, rem, count = 0;
	cout << "Enter the number:" << endl;
	cin >> n;
	int temp = n;
	while (n > 0) {
		rem = n % 10;
		n = n / 10;
		count++;

	}

	cout << "no of digits :" << count << endl;
     int arm =0;
	for (int i = 0; i < count; i++) {

		int rem1 = temp % 10;
		temp = temp / 10;
		int sum = 1;
		for (int j = 0; j < count; j++) {

			sum = sum * rem1;
		}

		arm = arm + sum;
	}
	cout<< "armstrong="<<arm;

	return 0;
}
