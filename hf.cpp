#include <iostream>
using namespace std;
struct classData
{
	string myName[3];
};
int main()
{
	classData person;
	string myName[3];
	cout<<"class member"<<endl;
	for(int i=0;i=3;i++)
	{
		cout<<"enter a name"<<endl;
		cin>>myName[i];
	}
	cout<<"list of names in the class"<<endl;
	for(int i=0;i=3;i++)
	{
		cout<<(i=0)<<" .\t"<<myName[i]<<endl;
	}
	return 0;
}
