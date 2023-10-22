//Create class cEmployee with data members as empno,name and salary.
//   Accept values from user. Store it in file.
//   Display the contents from file.
//   Program should be able to store information of multiple employees.
#include<iostream>
#include<fstream>
using namespace std;
class Employee {
public:
	int empno;
	string name;
	double salary;
public:
	Employee(int empno, string name, double salary) {
		this->empno = empno;
		this->name = name;
		this->salary = salary;
	}
	void display() {
		cout << "empno : " << empno << "  name : " << name << "  salary : "
				<< salary << endl;
	}
};
int main() {
	int n;

	cout << "Enter the number of employees: ";
	cin >> n;
	Employee *ptr[n];
	ofstream out("share.txt");
	for (int i = 0; i < n; i++) {
		int empno;
		string name;
		double salary;
		cout << "Enter the value of empno : " << endl;
		cin >> empno;
		cout << "Enter the value of name : " << endl;
		cin >> name;
		cout << "enter the value of salary : " << endl;
		cin >> salary;
		Employee emp(empno, name, salary);
		ptr[i] = &emp;
		ptr[i]->display();
		out.write((char*) &emp, sizeof(Employee));
		ifstream in("share.txt");
		in.read((char*) &emp, sizeof(Employee));

		in.close();

	}

	out.close();

}
