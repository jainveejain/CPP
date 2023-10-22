#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number:" << endl;
	cin >> n;

	for (int i = 2; i <= n; i++) {

		bool flag = true;
		for (int j = 2; j < i; j++) {

			if (i % j == 0) {
				flag = false;
				break;
			}

		}
		if (flag == true) {
			cout << "the prime numbers are:" << i << endl;
		}
	}
	return 0;
}
