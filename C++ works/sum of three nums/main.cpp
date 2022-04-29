#include <iostream>

using namespace std;
int a,b,c,d;
int res;
int main()
{
    cout << "Enter the first number: ";
    cin>> a;
    cout << "Enter the second number: ";
    cin>> b;
    cout << "Enter the third number: ";
    cin>> c;
    cout << "Enter the forth number: ";
    cin>> d;
    res = a + b + c + d;
    cout << "The sum of three numbers is: " << res;
    return 0;
}
