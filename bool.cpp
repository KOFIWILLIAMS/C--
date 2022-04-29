#include <iostream>
using namespace std;
int main()

{
	
bool ismale = false;
bool istall = false;

if(ismale && istall)
{
	cout<<"you'r a tall male";
} 
	else if(!ismale && istall)
	{
	cout<<"you'r not male but tall";
	}
	else if(ismale && !istall)
	{
	cout<<"you'r male but not tall";
	}
	else 
	{
	cout<<"you'r not tall male";
	}
	
return 0;
}
