//Defines a Student class with attributes like name, age, and grade.
//Initializes a vector of Student objects.
//Allows the user to add new students to the vector with their name, age, and grade.
//Prints the list of students.
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
class Student {
public:
	string name, grade;
	int age;
	void getdetails() {
		cout << "Enter the value of name : " << endl;
		cin >> name;
		cout << "Enter the value of age : " << endl;
		cin >> age;
		cout << "Enter the value of grade : " << endl;
		cin >> grade;
	}
	void displayDetails() {
		cout << "Name : " << name << "  Age : " << age << "  grade: " << grade
				<< endl;
	}

};
int main() {
	vector<Student> v;
	Student s;
	int n;
	cout << "enter the value of n : " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		s.getdetails();
		v.push_back(s);
		v[i].displayDetails();
	}
	for (int i = 0; i < n; i++) {
		ofstream out("done.txt");
		out.write((char*) &s, sizeof(Student));
		ifstream in("done.txt");
		in.read((char*) &s, sizeof(Student));
	}
	return 0;
}
