#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "enter number";
	cin >> n;
	for (int i = 2; i < n; i++) {

		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				if (i == j) {
					cout << "number is prime"<<i<<endl;
				}else{
					break;
				}
			}

		}

	}
	return 0;
}
