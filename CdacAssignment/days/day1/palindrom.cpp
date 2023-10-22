#include<iostream>
using namespace std;

int main() {
	int n, rem,temp, target = 0;
	cout << "Enter the number:" << endl;
	cin >> n;
	temp=n;
	while (n > 0) {
		rem = n % 10;
		n = n / 10;
		target = (target * 10) + rem;
	}

	if (target == temp) {
		cout << "the number is palindrom " << endl;
	} else
		cout << "the number is not palindrom" << endl;

	return 0;
}
