#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
    int w;
	int c;
	int d;
	int t;

	cout<<"enter w: "<<endl;
	cin>>w;

	cout<<"enter c: "<<endl;
	cin>>c;

	cout<<"enter d: "<<endl;
	cin>>d;

    if (d != 0){
	t = ( 5 * w + 3 * c ) / d;
	cout<<"your t ="<<t<<endl;
}
    else {
        cout<<"d should not be = 0"<<endl;
    }
	system("pause");
	return 0;
}
