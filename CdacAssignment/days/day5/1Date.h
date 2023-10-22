#include<iostream>
using namespace std;

class date{

	private:
		int day, month, year;

	public:


	date(){
		cout<<"----default date----"<<endl;
		day =1;
		month = 6;
		year = 1990;
	}

	date(int d, int m,int y){
		cout<<"-----parameterized date----"<<endl;
		this->day =d;
		this->month = m;
		this->year = y;
	}

	void showDate(){

		cout<<"date: "<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
