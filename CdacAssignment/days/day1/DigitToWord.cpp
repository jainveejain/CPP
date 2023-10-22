#include<iostream>
using namespace std ;
//20:Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.(0 to 9)

int main(){
	int d;
	cout<<"Enter the digit:";
	cin>>d;
	switch(d) {
	case 0 :
		cout<<"this digit is 0 = Zero"<<endl;
		break;
	case 1 :
		cout<<"this digit is 1 = one"<<endl;
		break;
	case 2 :
		cout<<"this digit is 2 = two"<<endl;
		break;
	case 3 :
		cout<<"this digit is 3 = three"<<endl;
		break;
	case 4 :
		cout<<"this digit is 4 = four"<<endl;
		break;
	case 5 :
		cout<<"this digit is 5 = five"<<endl;
		break;
	case 6 :
		cout<<"this digit is 6 = six"<<endl;
		break;
	case 7 :
		cout<<"this digit is 7 = seven"<<endl;
		break;
	case 8 :
		cout<<"this digit is 8 = eight"<<endl;
		break;
	case 9 :
		cout<<"this digit is 9 = nine"<<endl;
		break;
    default:
		cout<<"Entered Invalid digit"<<endl;
		break;
	}
	return 0;
}
