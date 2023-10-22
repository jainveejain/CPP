#include<iostream>
using namespace std;
class date{
	private:int day,month,year;
	 public:date(){
	  day=1;month=6;year=1990;
	  cout<<"default--date---"<<endl;
	 }
	 date(int d,int m,int y){
	 	day=d;month=m;year=y;
	 	cout<<"---parameter --date ---"<<endl;
	 }
	 void showDate()
	 {
	 	cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
	 }
};
class Student{
	private: int rollno;
	         string name;
			 date *dob;//student has date
	public :Student(){
		cout<<"---default--student---"<<endl;
		rollno=101;
		name="ram";
	   dob=new date();//default
	}
	Student(int roll,string name,int d,int m,int y){
		this->rollno=roll;
		this->name=name;
	    dob=new date(d,m,y);//parameter
	}
	void displayStudent(){
		cout<<"---student details---"<<endl;
		cout<<rollno<<"   "<<name<<"   ";
	 	dob->showDate();
	}
};
int main12()
{
	Student sobj;
	sobj.displayStudent();


	Student  *stud2=new Student(101,"Ramesh",4,5,2003);
	stud2->displayStudent();

}
