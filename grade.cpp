#include <iostream>
using namespace std;
int mk;
int main()
{
cout<<"enter marks\n";
cin>>mk;
switch(mk) 

{	case 80:
	cout<<"grade A";
	break;
	
	case 70:
	cout<<"grade B";
	break;
	
	case 60:
	cout<<"grade C";
	break;
	
	case 50:
	cout<<"grade D";
	default:
		
	cout<<"grade F"; 
}
return 0;

}
