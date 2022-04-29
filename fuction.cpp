#include <iostream>
using namespace std;


void kofi(string name, int age);


int main()

{
	kofi("ako", 2);
	kofi("ama", 7);
	kofi("yaa", 0);
	
	return 0;
}

void kofi(string name, int age)
{
	cout<<" hello "<<name<<" you are "<<age<< endl;
}
