// Function with void and parameter
#include <iostream>

using namespace std;
void add(int a, int b){
int c;
c = a + b;
cout << "The result is: " << c;
 }
int main()
{
int x, y;
cout << "Enter first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
add(x, y);
return 0;
}
