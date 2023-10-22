#include<iostream>
using namespace std;
#include<fstream>





int main(){
	//read data from file file_data
	string line;
	ifstream input("/Users/ponikjain/eclipse-workspace/CdacAssignment/days/day8/File_data.txt");
	cout<<"\n Now the position of file pointer is "<<input.tellg();

	//show all lines
	while (getline(input , line))
	{
		cout<<line<<endl;
	}
	cout<<"\n now the position of file pointer is" <<input.tellg();
	cout<<"\n"<<endl;


	input.clear();
	input.seekg(12);
	cout<<"skip first 12 from file\n"<<endl;
	cout<<endl;
	while(getline(input, line))
	{
		cout<<line<<endl;
	}




	return 0;
}
