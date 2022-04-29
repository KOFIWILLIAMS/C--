#include <iostream>
using namespace std;

int main()
 {
	int x;
	cout<<"Enter the list of numbers: ";
	cin>>x;
	
	int array[x];
	for(int a=0; a<x; a++);
	{
	cout<<"enter a number: ";
	cin>>array[x];	
	}
	for(int y=0; y<x; y++);
	{
		if ( array [y] % 2==0)
	{
		cout<<array[y]<<" is an even no. \n";
	}
	}
return 0;
}
