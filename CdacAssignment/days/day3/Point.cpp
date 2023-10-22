#include<iostream>
using namespace std;
//4. Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this
//class in main method and invoke all the methods in that class.
class Point {

private:
	int x, y;
public:
	void acceptPoint() {
		cout << "Enter point x:";
		cin >> x;
		cout << "Enter point y:";
		cin >> y;
	}
	void displayPoint() {
		cout << "Point x:" << x << "  " << "Point y:" << y;
	}

};

int main() {
	Point p;
	p.acceptPoint();
	p.displayPoint();
	return 0;
}
