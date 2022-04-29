#include <iostream>
using namespace std;


int main() 
{
	int ages, NumOfStdnt, sum=0, a;
	cout<<"state the number of studnt: \n";
	cin>>NumOfStdnt;
	for(a=1;a<=NumOfStdnt;a++)
	{
		cout<<"enter age:";
		cin>>ages;
		sum=ages+sum;
	}
	cout<<"the sum of the ages are"<<sum;
	return 0;
}
