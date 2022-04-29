#include <iostream>
using namespace std;
int main()
{
	int x1, x2, y1, y2, f;
	
	 
	 cout<<"enter 1st no.";
	 cin>>x1;
	 
	 cout<<"enter 2nd no.";
	 cin>>x2;
	 
	 cout<<"enter 3rd no.";
	 cin>>y1;
	 
	 cout<<"enter 4th no.";
	 cin>>y2;
	 
	 f = ((x1*x1)+(x2*x2))/((y1*y1)-(y2*y2));
	 cout<<"display f"<<f;
	 
	 return 0;
}
