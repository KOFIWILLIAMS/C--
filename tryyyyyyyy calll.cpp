#include <iostream>
using namespace std;

int add(int a, int b)
	{
	int add=a+b;	
	}
	
int sub(int a, int b)
{
	int sub=a-b;
}
	

int div(int a, int b)
{
	int div=a/b;
}
	

int mult(int a, int b)
{
	int mult=a*b;
}
	
	
main()
{
	double option, a, b, result;
cout<<"select option\n";
cout<<"1. addtion\n";
cout<<"2. subtraction\n";
cout<<"3. division\n";
cout<<"4. multiplicaiton\n";
cin>>option;

if(option==1)
{
	cout<<"enter 2 nombers to add\n";
	cin>>a>>b;
	result=a+b;
	cout<<result;
}

if (option==2)
{
	cout<<"enter 2 number to subtracti\n";
	cin>>a>>b;
	result=a-b;
	cout<<result;

}
if(option==3)
{
	cout<<"enter 2 numbers to divide\n";
	cin>>a>>b;
	result=a/b;
	cout<<result;
}
if(option==4)
{
	cout<<"enter 2 numbers to multiply\n";
	cin>>a>>b;
	result=a*b;
	cout<<result;
}

	return 0;
	
}
