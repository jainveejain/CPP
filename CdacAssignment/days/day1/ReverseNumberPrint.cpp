#include<iostream>
using namespace std;

int main() {
	int rem, n, target = 0;
	cout << "enter the number:" << endl;
	cin >> n;
	while (n >0) {
		rem = n % 10;
		n = n / 10;
		target = (target * 10) + rem;

	}
	cout << "the reverse number is:" << target << endl;
	return 0;
}
