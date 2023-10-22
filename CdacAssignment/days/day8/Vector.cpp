//Create a C++ program that does the following:
//Initializes an empty vector of integers.
//Asks the user to enter a series of integers and adds them to the vector until the user enters a specific sentinel value (e.g., -1).
//Prints the elements of the vector.
//Calculates and prints the sum and average of the values in the vector.
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
	cout << "Enter ch 1. add 2. display 3. sum 4. average" << endl;
	vector<int> mynumber;
	int ch, no;
	do {
		cout << "Enter the valur of choice : " << endl;
		cin >> ch;
		int size = mynumber.size();
		int avg, sum;
		switch (ch) {
		case 1: {

			cout << "Enter the no : " << endl;
			cin >> no;
			mynumber.push_back(no);
			cout << "Added" << endl;
			break;
		}
		case 2: {

			for (int i = 0; i < size; i++) {
				cout << mynumber[i] << endl;
			}

			break;
		}
		case 3: {
//			sum = accumulate(mynumber.begin(),mynumber.end(),0);
//			cout<<sum<<endl;
//			int size = mynumber.size();
			for (int i = 0; i < size; i++) {
				sum = sum + mynumber[i];

			}
			cout << sum << endl;
			break;

		}
		case 4: {
			int avg;
			//int sum = accumulate(mynumber.begin(),mynumber.end(),0);
			avg = sum / size;
			cout << avg << endl;
			break;
		}

		}
	} while (ch != 5);
}

