#include<iostream>
using namespace std;
//Create a class Book with data members as bname,id,author,price. Write AcceptBook function . Also add the display function. Create Default and Parameterized constructors. Create
//the object of this class in main method and invoke all the methods in that class.

class Book {
private:
	string bName, author;
	int id, price;
public:
	void acceptBook() {
		cout << "Enter the book name:" << endl;
		cin>>bName;
		cout << "Enter the author name;" << endl;
		cin>>author;
		cout << "Enter the id:" << endl;
		cin>>id;
		cout << "Enter the price:" << endl;
		cin>>price;
	}
	void displayDetails() {
		cout << "BookName:" << bName<<"  "<< "AuthorName:" << author <<"  "<< "Id:" << id<<"  "
				<< "Price:" << price;
	}

};

int main() {
	Book b1;
	b1.acceptBook();
	b1.displayDetails();
	Book b2;
	b2.acceptBook();
	b2.displayDetails();

	return 0;
}
