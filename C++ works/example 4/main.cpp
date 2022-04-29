// Function with void and void
#include <iostream>

using namespace std;
void add(){
int n1, n2, n3;
cout << "Enter the first number: ";
cin >> n1;
cout << "Enter the second number: ";
cin >> n2;
n3 = n1 + n2;
cout << "The result is: " << n3;
}
int main()
{
    add();
    return 0;
}
