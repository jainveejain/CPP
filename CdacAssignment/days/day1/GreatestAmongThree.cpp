#include<iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "enter the three number a,b,c" << endl;
	cin >> a >> b >> c;
	if (a >= b) {
		if (a >= c) {
			cout << "a is the greatest" << endl;
		} else if (c >= a) {
			cout<<"c is greatest"<<endl;
		}
	}else if(b >= c){
		cout<<"b is greatest"<<endl;
	}
	return 0;

}
