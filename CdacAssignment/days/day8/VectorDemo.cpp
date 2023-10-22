#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
class Book{

};
int  main(){

	vector<Book> books;
	Book b1;
	books.push_back(b1);

			cout<<"1:Add "<<endl;
			cout<<"2:display "<<endl;
			cout<<"3:remove  "<<endl;
			cout<<"4:sum "<<endl;
			cout<<"5:avrage "<<endl;
			cout<<"6:size "<<endl;
			vector<string> names;//LAB
	//
	vector<int> myNumbers;
	int ch,no;
	do{
	cout<<"Enter Choice:";
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"Enter Number to Add:";
			cin>>no;
			//store number into vector
			myNumbers.push_back(no);
			cout<<"added:"<<endl;
			break;
		}
		case 2:{
			int size=myNumbers.size();
//			for(int i=0;i<size;i++)
//			{
//				cout<<"\t\t"<<myNumbers[i]<<endl;
//			}


            //using iterator
            vector<int>::iterator it1=myNumbers.begin();//first

            vector<int>::iterator it2=myNumbers.end();//last
            while(it1!=it2){
            	cout<<"\t\t\t"<<*it1<<endl;
            	it1++;
			}

			break;
		}
		case 6:{
			cout<<"Total Number of Element:"<<myNumbers.size();
			cout<< endl;
			break;
		}
		case 3:{
			myNumbers.pop_back();
			cout<<"Removed:"<<endl;
			break;
		}
		case 4:{
			int sum=accumulate(myNumbers.begin(),myNumbers.end(),0);
			cout<<"\t\tsum of:"<<sum<<endl;
			break;
		}
	}


	}while(ch!=7);




}

