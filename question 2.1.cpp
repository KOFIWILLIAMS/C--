#include <iostream>

using namespace std;
int main()
{
	int N,a;
	cout<<"enter the number limit:";
	cin>>N;
	for(a=1;a<N;a++){
		a=a+1;
		if(N%2==0)//if N is even
		{
			N=N;
	}
		else{ //if N is odd
		N=N-1;
	
		}
		cout<<a<<endl;
	}
	return 0;
}
