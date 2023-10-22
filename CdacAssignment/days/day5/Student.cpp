#include<iostream>
#include"1date.h"
using namespace std;

class Student{

	private :
				int rollno;
				string name;
				date *dob;

	public :

	Student(){

		//cout<<"-----Default student----"<<endl;

		rollno = 101;
		name = "ram";
	    dob = new date();
	}

	Student	(int rollno, string name,int d, int m ,int y)	{

		//cout<<"----parametarized student-----"<<endl;
		this->rollno = rollno;
		this->name = name;
		this->dob = new date(d,m,y);


	}

	void displayStudent(){
		cout<<"student details"<<endl;
		cout<<rollno<<"  "<<name<<"  ";
		dob->showDate();
	}

};

int main1(){

	Student sObj;
	sObj.displayStudent();

	Student *stud2 = new Student(112, "shyam", 4,5,2023);

	stud2->displayStudent();

	return 0;
}
