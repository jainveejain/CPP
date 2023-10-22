#include<iostream>
using namespace std;

//7. Write a menu driven program to do following operations :
int main() {
	char ch, k;
	int r;
	float pi = 3.14, A, l, b, ba, hi;
	bool flag = true;
	do {

		cout << "enter choice :";

		cout
				<< "a : area of circle \n b :area of rectangle\n c : area of triangle \n d : exit";
		cin >> ch;

		switch (ch) {
		case 'a':
			cout << "enter radius of circle :";
			cin >> r;
			A = pi * r * r;
			cout << "area of circle is :" << A;
			break;

		case 'b':
			cout << "enter length and breadth :";
			cin >> l >> b;
			A = l * b;
			cout << "area of rectangle is :" << A;
			break;

		case 'c':
			cout << "enter base and hight :";
			cin >> hi >> ba;
			A = 0.5 * ba * hi;
			cout << "area of triangle is :" << A;
			break;
		case 'd':
			flag = false;
		}

	} while (flag);
	return 0;

}
