//2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
//Write default and parameterised constructor in Employee Class.Write accept() function to accept
//information and display() to display emp information.
//

#include<iostream>
#include"1date.h"
using namespace std;

class Employee {

private:
	int empid;
	string name;
	int d, m, y;
	date *dob;

public:
	Employee() {
		empid = 101;
		name = "ram";
		dob = new date();
	}

	Employee(int empid, string name, int d, int m, int y) {
		this->empid = empid;
		this->name = name;
		this->dob = new date(d, m, y);
	}

	void accept() {
		cout << "Enter empid  name  date: ";
		cin >> empid >> name >> d >> m >> y;
	}

	void display() {
		cout << "empid: " << empid << "\nname: " << name << endl;
		dob->showDate();
	}

};

int main23() {
	Employee e1;
	e1.display();
	Employee *e = new Employee(1010, "shyam", 20, 9, 23);
	e->display();
	return 0;
}
