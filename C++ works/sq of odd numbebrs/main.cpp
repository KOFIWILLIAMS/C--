#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << " enter n: ";
    cin >> n;
    for(int f=2;f<n;f++)
        if(f%2==1)
    {
        cout <<f<<" ,";
    }
    cout << endl;
    return 0;
}
