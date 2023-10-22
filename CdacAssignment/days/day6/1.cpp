//1 Solve this.
//Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.
//
//Create Emp based organization structure --- Emp , Mgr , Worker
//
//
//1.1 Emp state--- id(int), name, deptId , basicSalary(double)
//Accept all of above in constructor arguments.
//
//Methods ---
//1.2. compute net salary ---ret 0
//(eg : public double computeNetSalary(){return 0;})
//
//1.2 Mgr state  ---id,name,basic,deptId , perfBonus
//Add suitable constructor
//Methods ----
//1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary
//
//
//1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
//Methods :
//1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
//2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)
//
//Create suitable array to store organization details.
//Provide following options
//1. Hire Manager
//I/P : all manager details
//
//2. Hire Worker
//I/P : all worker details
//
//3. Display information of all employees net salary (by invoking computeNetSal),
//
//4. Exit

#include<iostream>
using namespace std;


class Employee{
	private: int id;
			 string name;
			 int deptID;
	protected: double basicSalary;

	public:


	Employee(){
		//cout<<"---- DEFAULT EMPLOYEE-----"<<endl;
		this->id=1;
		this->name="John";
		this->deptID=101;
		this->basicSalary=50000;
		cout<<"\n\n\n\n";
	};

	Employee(int id,string name,int deptID,double basicSalary){
		//cout<<"---- PARAMETER EMPLOYEE-----"<<endl;
		this->id=id;
		this->name=name;
		this->deptID=deptID;
		this->basicSalary=basicSalary;
		cout<<"\n\n\n\n";
	}

	double netSalary(){
		cout<<"-----NET SALARY------"<<endl;
		cout<<"salary: "<<basicSalary;
		cout<<"\n\n\n\n";

	}
	void display(){
		cout<<"-----DISPLAY DETAILS-----"<<endl;
		cout<<id<<"  "<<name<<"  "<<deptID<<"  "<<basicSalary<<endl;
		cout<<"\n\n\n\n";
	}

};


class Manager: public Employee{
	private: double perfBonus;

	public:

		Manager(){

		perfBonus=20000;
		//cout<<"-----DEFAULT MANAGER-----\n";
		//cout<<"Performance bonus: ";
	    cout<<"\n\n\n\n";
		}

		Manager(int id,string name,int deptID,double basicSalary):Employee(id,name,deptID,basicSalary){
			//cout<<"----PARAMETER MANAGER----"<<endl;
			//cout<<"Performance bonus: ";
			this->perfBonus=perfBonus;

			cout<<"\n\n\n\n";
		}

	   //child class hides method of parent class
       //netSalary()
       //overriding:same funName with same signature
		double netSalary(){

			//netSal=basicSalary+perfBonus;

			//cout<<"----Manager netsalary----"<<endl;
			cout<<"-----Manager salary-----"<<endl;

			cout<<"Manager salary: "<<this->basicSalary+perfBonus<<endl;

		}

};

class Worker: public Employee{
	private:
		double hoursWorked;
		double hourlyRate;

	public :

	Worker(){
		hoursWorked=1;
		hourlyRate=20;
	}

	Worker(int id, string name, int deptID, double basicSalary,double hoursWorked,double hourlyRate):Employee(id, name, deptID,basicSalary){
			this->hoursWorked = hoursWorked;
			this->hourlyRate = hourlyRate;
		}


		double getHourlyRate(){
			return hourlyRate;
		}

		double getHoursWorked(){
			return hoursWorked;
		}

		void netSalary(){
			double netSalary=basicSalary+(hoursWorked*hourlyRate);
			cout<<"---Worker salary-----"<<endl;
			cout<<"Worker salary: "<<netSalary<<endl;
		}


};



int main(){

	Manager m1;
	m1.display();
	m1.netSalary();


	Manager m2(20,"chloe",1012,40000);
	m2.display();
	m2.netSalary();

	Worker w1(20,"chloe",1012,40000, 12, 20);
//	Worker w1;
//	cout<<w1.getHourlyRate();
//	cout<<w1.getHoursWorked();
	w1.netSalary();






	return 0;
}
