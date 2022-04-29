#include <iostream>

using namespace std;
int a;
int x;
int y;
int main()
{
    cout << "enter the first variable: ";
    cin>> a;
    cout << "enter the second variable: ";
    cin>> x;
    y = (a*x*x*x) + (a*x*x) + (a*x) + a;
    cout << "the final result " << y;
    return 0;
}
