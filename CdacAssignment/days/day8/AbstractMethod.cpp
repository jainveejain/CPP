#include<iostream>
using namespace std;

class shape{
public :
	virtual void area() = 0; // Abstract method
	void display(){
		cout<<"display shape"<<endl;
	}
	};

	class squre : public shape {

		public :
		void area(){
			cout<<"---Area of Squre----"<<endl;
		}
		void showDetails(){
			cout<<"show squre details"<<endl;
		}
	};



int main(){

//shape s;
//s.area();
squre sq;
sq.area();  //area method is abstract and display method is not so parent ka call hua
sq.display();
return 0;

}
