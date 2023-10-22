#include<iostream>
using namespace std;
//19:Create menu driven program for Pizza Shop.And display total amount

int main() {
	int ch, quantity, total = 0;
do {
	cout<<"1:margreta pizza, 2 : veg cheese pizza, 3 : corn-capsiccum pizza, "
			"4 : paneer pizza, 5 : cheese overloaded pizza"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"margreta pizza: 200"<<endl;
		cout<<"Enter quantity:";
		cin>>quantity;
		total = total + 200*quantity;
		cout<<"total amount is :"<<total<<endl;
		break;

		case 2 :
		cout<<"veg cheese pizza: 300"<<endl;
		cout<<"Enter quantity:";
		cin>>quantity;
		total = total + 300*quantity;
		cout<<"total amount is :"<<total<<endl;
		break;

		case 3 :
		cout<<"corn-capsiccum pizza: 350"<<endl;
		cout<<"Enter quantity:";
		cin>>quantity;
		total = total + 350*quantity;
		cout<<"total amount is :"<<total<<endl;
		break;

		case 4 :
		cout<<"paneer pizza: 400"<<endl;
		cout<<"Enter quantity:";
		cin>>quantity;
		total= total+400*quantity;
		cout<<"total amount is :"<<total<<endl;
		break;

		case 5 : cout<<"cheese overloaded pizza: 500"<<endl;
		cout<<"Enter quantity:";
		cin>>quantity;
		total= total+500*quantity;
		cout<<"total amount is :"<<total<<endl;
		break;

		default :
		cout<<"invalid choice"<<endl;
	}

}while(ch<6);

return 0;
}
