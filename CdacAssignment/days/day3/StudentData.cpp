#include<iostream>
using namespace std;
//:Write a program to create student class with data members rollno, marks1,mark2,mark3.
//Accept data (acceptInfo()) and display using display member function.
//Also display total,percentage and grade.

class Student {

private:
	int rollno, mark1, mark2, mark3;
	float total;
	float percent;
	char grade;
public:
	void acceptInfo() {
		cout << "Enter the rollno:" << endl;
		cin >> rollno;
		cout << "Enter the mark1:" << endl;
		cin >> mark1;
		cout << "Enter the mark2:" << endl;
		cin >> mark2;
		cout << "Enter the mark3:" << endl;
		cin >> mark3;

	}
	void displayDetails() {
		cout << "rollno:" << rollno << "  " << "mark1:" << mark1 << "  "
				<< "mark2:" << mark2 << "   " << "mark3:" << mark3 << endl;
	}
	void Sum() {
		total = mark1 + mark2 + mark3;
		cout << "total:" << total << endl;
	}
	void percentage() {
		percent = (total / 300) * 100;
		cout << "percentage:" << percent << endl;
	}
	void Grade() {
		if (percent > 80) {
			cout << "grade is A" << endl;
		} else if (percent > 60) {
			cout << "grade is B" << endl;
		} else {
			cout << "grade is C" << endl;
		}
	}
};

int main() {
	Student s;
	s.acceptInfo();
	s.displayDetails();
	s.Sum();
	s.percentage();
	s.Grade();
	return 0;
}
