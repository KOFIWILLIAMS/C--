#include <iostream>
using namespace std;
int main()
{
	bool ismale=false;
	bool istall=false;
	if (ismale && istall)
	{
		cout<<"you'r a tall male ";
	}
	else if (!ismale && istall)
	{
		cout<<"you'r are tall but not male";
	}
	else if(ismale && !istall)
	{
		cout<<"you'r are male but not tall";
	}
	else
	{
		cout<<"you'r not tall and you are not male";
	}
	
	
	return 0;
}

