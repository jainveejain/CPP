#include<iostream>
using namespace std;
//1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
//Accept data (acceptInfo()) and display  using display member function.
//Also display total,percentage and grade.

class Student{
private :
	    int rollno,marks1,marks2,marks3;
        float total;
        float percent;
        char grade;
public:
	    void acceptInfo(){
	    	        cout << "Enter the rollno:" << endl;
	    			cin >> rollno;
	    			cout << "Enter the mark1:" << endl;
	    			cin >> marks1;
	    			cout << "Enter the mark2:" << endl;
	    			cin >> marks2;
	    			cout << "Enter the mark3:" << endl;
	    			cin >> marks3;
	}

	    void displayStudentDetails(){
	    			cout << "rollno:" << rollno << "  " << "marks1:" << marks1 << "  "
	    			<< "marks2:" << marks2 << "   " << "marks3:" << marks3 << endl;

	}
	    void Sum() {
	    		total = marks1 + marks2 + marks3;
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

};


int main(){


	return 0;
}
