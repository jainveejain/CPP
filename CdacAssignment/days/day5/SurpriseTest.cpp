#include<iostream>
using namespace std;
#include<fstream>
class Person
{
	protected:
		string f_name, l_name;
		int id;
	public:
		Person(string f_name, string l_name,int id){
		}
		virtual string calculate()
		{}
};

class Student:public Person
{
	private:
		int scores[3];
		float avg;
		int sum;
		string grade;
	public:
			Student(string f_name, string l_name, int id):Person(f_name,l_name,id)
			{
				this->f_name=f_name;
				this->l_name=l_name;
				this->id=id;
			}
			void accept()
			{
				for(int i=0;i<3;i++)
				{
					cout<<"enter marks of 3 subject: ";
					cin>>scores[i];

				}

			}
			string calculate()
			{
				sum=0;
				for(int i=0;i<3;i++)
				{
					sum+=scores[i];
				}
				avg=sum*100/300;
				if(avg>85)
				{
					grade="A";
				}
				else if(avg>75)
				{
					grade="B";
				}
				else if(avg>65)
				{
					grade="C";
				}
				else
				{
					grade="D";
				}
				return grade;
			}
			void display()
			{
				cout<<" First name: "<<f_name<<" Last name: "<<l_name<<" id: "<<id;
				cout<<" Grade: "<<calculate()<<endl;
			}

};

int main3()
{
	int n;
	cout<<"enter total students: ";
	cin>>n;

	string s_name,s_last;
	int s_id;

	for(int i=1;i<=n;i++)
	{
		cout<<" enter firtsname lstname id ";
		cin>>s_name>>s_last>>s_id;
		Student a(s_name,s_last,s_id);
		a.accept();

		ofstream stud("student.txt");
		stud.write((char *)&a,sizeof(Student));

		ifstream stu_r("student.txt");
		stu_r.read((char *)&a,sizeof(Student));
		a.display();
	}

	return 0;
}
