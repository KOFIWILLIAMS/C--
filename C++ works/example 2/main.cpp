// Function with data and void
#include <iostream>

using namespace std;
int add(){
int x, y, z;
cout << "Enter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
z = x + y;
return (z);
}
int main()
{
int r;
r = add();
cout << "The result is: " << r;
    return 0;
}
