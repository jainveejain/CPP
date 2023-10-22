#include<iostream>
using namespace std;
//Shape Hierarchy:
//Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle,
//and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.

class Shape {
protected:
	int a, pi = 3.14,p;
	virtual void area() {
	}
	virtual void perimeter() {
	}
};


class Circle : Shape {
private:
	int r;
public:
	void area() {
		cout << "Enter the radius" << endl;
		cin>>r;
		a=pi*r*r;
		cout<<"the area of circle is:"<<a<<endl;
	}
	void perimeter(){
		cout << "Enter the radius" << endl;
		cin>>r;
		p = 2*pi*r;
		cout<<"the Perimeter of circle is:"<<p<<endl;
	}
};


class Rectangle : Shape {
private:
	int l, b;
public :	void area(){
		cout<<"Enter length and breadth:"<<endl;
		cin>>l>>b;
		a = l*b;
		cout<<"the area of Ractangle is:"<<a<<endl;

	}
	void perimeter(){
			cout << "Enter the length and breadth" << endl;
			cin>>l>>b;
			p = 2*(l+b);
			cout<<"the Perimeter of Rectangle is:"<<p<<endl;
	}
};


class Triangle :Shape {
private:
	int ba, hi;
public:	void area(){
		cout<<"Enter the base nd hight:"<<endl;
		cin>>ba>>hi;
		 float a = (0.5)*ba*hi;
		cout<<"the area of triangle is:"<<a<<endl;
	}
	void perimeter(){
			cout << "Enter the base and hight" << endl;
			cin>>ba>>hi;
			p = 3*ba;
			cout<<"the Perimeter of Triangle is:"<<p<<endl;
	}
};


int main() {

Circle c;
c.area();
c.perimeter();

Rectangle r;
r.area();
r.perimeter();

Triangle t;
t.area();
t.perimeter();


	return 0;
}
