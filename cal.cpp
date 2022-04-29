#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;
    char op;

    cout<< " enter 1st number ";
    cin>>num1;

    cout<< " enter operator ";
    cin>>op;

    cout<< " enter second number ";
    cin>>num2;

    if(op=='+')
    {
        result = num1 + num2;
    }
    else if (op=='-')
    {
        result = num1 - num2;
    }
    else if (op=='*')
    {
        result = num1 * num2;
    }
    else if (op=='/')
    {
        result = num1 / num2;
    }
    else {cout<<"invalid operator";}
    cout<<result;
    return 0;
}
