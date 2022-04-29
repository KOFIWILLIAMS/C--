#include <iostream>
using namespace std;
struct personalData
{
	string name;
	int age;
};
int main()
{
	personalData person;
	person.name="wages";
	person.age=21;
	
	cout<<person.name<<endl;
	cout<<person.age;
	
	return 0;
	
}

