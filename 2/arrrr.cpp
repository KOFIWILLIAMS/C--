#include <iostream>

using namespace std;

int main()
{
    int EvenNO, a;
    cout<<"enter no. limit \n";
    cin>>EvenNO;
    for(a=1;a<EvenNO;a++);
    {
        a=a+1;
        if(EvenNO%2==0)//if N is even
        {
            EvenNO=EvenNO;
        }
        else{//if EvenNO is Odd
            EvenNO=EvenNO-1;
        }
        cout<<a<<endl;
    }
    return 0;
}
