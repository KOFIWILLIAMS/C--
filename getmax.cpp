#include <iostream>
using namespace std;

int getmax( int num1, int num2, int num3)
{
	int result;
	
	if(num1 >= num2 && num1 >= num3)
	{
		return num1;
	}
	else if(num2 >= num1 && num2 >= num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
	return result;
}
int main() 
{
cout<<getmax(10, 20, 30);
return 0;
}
