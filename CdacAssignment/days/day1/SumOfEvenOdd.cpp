#include<iostream>
using namespace std;

int main() {
	int n, sum1 = 0, sum2 = 0;
	cout << "enter the number:" << endl;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		if (i % 2 == 0) {
			sum1 = sum1 + i;

		}
		if (i % 2 != 0) {
			sum2 = sum2 + i;

		}
	}
	cout << "Sum of even Numbers is:" << sum1 << endl;
	cout << "Sum of odd Numbers is:" << sum2 << endl;
	return 0;
}
