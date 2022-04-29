// Function with data and parameters
#include <iostream>

using namespace std;
int add(int x, int y){

int z;
z = x + y;
return (z);
}
int main()
{
int a, b, r;
cout << " Enter first number: ";
cin >> a;
cout << "Enter second number: ";
cin >> b;
r = add(a, b);
cout << "the result is: " << r;
    return 0;
}
