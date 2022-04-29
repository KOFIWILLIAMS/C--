#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<<"enter two number"<<endl;
    cin>> a ;
    cin>> b ;

    if (b==0){
        cout<<"invalid";
    }
    else{
    	if(b==1){
    		cout<<"are you ok"<<endl;
		}
		else{
	 
	c=a/b;
    cout<<"the quotient = "<< c <<endl;
		
	}
	 
    }

    return 0;
}
