#include<iostream>
using namespace std;


	class Animal {
	private:
		string name, color;
		int weight;
	public:
		void eat() {
			cout << "this is parent class eat method" << endl;
		}
	public:
		void sleep() {
			cout << "this is parent class  sleep method" << endl;
		}

	};

	class Mammal: public Animal {
	private:
		int bones;
	public:
		void NumberOfHearts() {
			cout << "mammels has one heart" << endl;
		}
		void eat() {
			cout << "mammels can eat" << endl;
		}
		void sleep() {
			cout << "mammels can sleep" << endl;
		}
	};

	class Bird: public Animal {
	private:
		int wings, legs;
	public:
		void fly() {
			cout << "Birds can fly high" << endl;
		}
		void eat() {
			cout << "birds can eat" << endl;
		}
		void sleep() {
			cout << "birds can sleep" << endl;
		}
	};

	class Fish: public Animal {
	private:
		int fins;
	public:
		void swim() {
			cout << "Fish can only swim" << endl;
		}
		void eat() {
			cout << "fish can eat" << endl;
		}
		void sleep() {
			cout << "fish can sleep" << endl;
		}
	};

int main(){

	Animal a;
	a.eat();
	a.sleep();

   Mammal m;
   m.eat();
   m.sleep();
   m.NumberOfHearts();

   Bird b;
   b.fly();
   b.eat();
   b.sleep();

   Fish f;
   f.swim();
   f.sleep();
   f.eat();
	return 0;

}
