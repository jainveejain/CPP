#include<iostream>
using namespace std;
//Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also add the display function. Create the
//object of this class in main method and invoke all the methods in that class.
class Date {
private:
	int dd, mm, yy;
public:
	void AcceptDate() {
		cout << "Enter the ddte:" << endl;
		cin >> dd >> mm >> yy;

	}
	void displayDate() {
		cout << "date:" << dd << "/" << mm << "/" << yy << endl;
	}
};

int main() {
	Date d;
	d.AcceptDate();
	d.displayDate();

	return 0;
}
