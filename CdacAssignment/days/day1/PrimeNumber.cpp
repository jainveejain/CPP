#include<iostream>
using namespace std;

int main() {
	int num;
	bool flag = true;
	cout << "Enter the number:" << endl;
	cin >> num;

	if(num<2){
		flag =false;
	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			flag = false;
			break;
		}
	}

	if (flag) {
		cout << "prime" << endl;
	} else {
		cout << "not prime" << endl;
	}

	return 0;
}
