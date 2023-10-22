#include<iostream>
using namespace std;
//Abstract class overridden
//we can't create object of Abstract class fruit f;->not applicable;
class Fruit {
public:
	string name, color;
	double weight, price;

public:
	virtual void taste();

};

class Apple: public Fruit {
public:
	void taste() {
		cout << "Apple taste Sweet" << endl;
	}

public:
	void jam() {
		cout << " Apple jam" << endl;
	}
};

class Mengo: public Fruit {

public:
	void taste() {
		cout << "Mengo taste Sweet" << endl;
	}
public:
	void pulp() {
		cout << " Mengo pulp" << endl;
	}
};

class Orange: public Fruit {
public:
	void taste() {
		cout << "Orange taste Sweet" << endl;
	}
public:
	void juice() {
		cout << " Orange juice" << endl;

	}
};

int main() {

	Fruit f;
	f.taste();
	cout << "\n" << endl;

	Apple a;
	a.taste();
	a.jam();
	cout << "\n" << endl;

	Mengo m;
	m.pulp();
	m.taste();
	cout << "\n" << endl;

	Orange o;
	o.juice();
	o.taste();
	cout << "\n" << endl;

	Fruit *ptr = &m; // fruit class pointer created which has refrence of mengo/apple/orange &A &o
	ptr->taste();     //pointer points method at given address  (parent=child)

	Fruit *basket[4];  //fruit type pointer array
	basket[0] = &m;
	basket[1] = &o;
	basket[2] = &f;
	basket[3] = &a;

	cout << "/n" << endl;

	for (int i = 0; i < 4; i++) {
		basket[i]->taste();

		if (typeid(*basket[i]) == typeid(Orange)) {
			cout << "----orange is basket-----" << endl;

		}
		Orange *oObj = dynamic_cast<Orange*>(basket[i]);
		oObj->juice();
		//dynamic_cast<Orange*>(basket[i]))->juice();
	}
	return 0;
}

