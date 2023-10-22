#include<iostream>
using namespace std;
template<class T> class MyGenClass {
public:
	T val1;
public:
	MyGenClass(T v) {
		this->val1 = v;
	}
	void print() {
		cout << "Value1:" << val1 << endl;
	}
};

class NonGenClass {
public:
	int val1;
public:
	NonGenClass(int v) {
		this->val1 = v;
		cout << "value1 =" << val1;
	}

};
int main() {

	NonGenClass obj1(30);
	obj1.val1 = 20;
	cout << "value1=" << obj1.val1 << endl;

//NonGenClass obj2("iacsd");//error
	//obj2.val1=true;//error
	int a = 10;
	MyGenClass<int> mg1(a);	//T-->int
//	mg1.val1="12gfdfg";//error
	mg1.print();

	MyGenClass<string> mg2("IACSD");
	mg2.print();
	MyGenClass<double> mg3(90.4563);
	mg3.print();

	return 0;
}
