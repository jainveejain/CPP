//Write a program to store characters 'A' to 'Z' in the file .
//   Display the contents of file.#include<iostream>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("AtoZ.txt");
	cout<<"File is successfully created : "<<endl;
	cout<<"enter the character from A to Z one by one : "<<endl;
	for(int i=65;i<91;i++)
	{
		out.put(char(i)); //put character is used to add character in file.
	}
	out.close();
	ifstream input("AtoZ.txt");
	char ch;
	while(input.get(ch)) //get character is used to print the character from the file.
	{
		cout<<ch<<endl;
	}
	input.close();

	return 0;
}
