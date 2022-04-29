#include <iostream>

using namespace std;
int n, N, temp;
int main()
{
    cout << "enter a number for multiplication table  " ;
    cin>>n;
    cout<<"multiple up to: ";
    cin>>N;
    for(n=1;n<=N;n%n==0)
    {
        cout<<n<<",";
    }
    return 0;
}
