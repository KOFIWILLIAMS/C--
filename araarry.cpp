#include <iostream>
using namespace std;

int main()
{
	int kofi[3]={1,2,3};
	int sum=0;
	
	
	for(int x=0; x<4; x++)
	{
		sum+=kofi[x];
		cout<<sum<<endl;
	}
	
}

