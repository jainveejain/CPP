#include<iostream>
#include<fstream>
using namespace std;

class Student{
private : int rollno;
		  char name[50] ;
		  double per;

public: void acceptDetails(){
			  cout<<"Enter rollno :"<<endl;
			  cin>>rollno;
			  cout<< "Enter name :"<<endl;
			  cin>>name;
			  cout<<"Enter the percent"<<endl;
			  cin>>per;
		  }
void display(){
	cout<<rollno<<"  "<<name<<"  "<<per<<endl;
}


};

int main(){
	//	Student s1;
	//	s1.accept();//
	//	//this s1 object store into file
	//	//write operation
	//	ofstream outFile("Student.dat");
	//	//store s1
	//	outFile.write((char*)&s1,sizeof(Student));
	//	//above operation will store s1 into file
	//	cout<<"Student get stored into File"<<endl;
	//	outFile.close();

	//read data from file

	Student s2;
ifstream inputFile("/Users/ponikjain/eclipse-workspace/CdacAssignment/days/day8/Student.dat");
inputFile.read((char*)&s2,sizeof(Student));
	s2.display();
	inputFile.close();


return 0;
}
