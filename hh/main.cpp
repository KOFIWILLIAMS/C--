#include <iostream>

using namespace std;

int main()
{
    int rowSum=0;
    int a[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"enter a number: ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<a[i][j]<<"";
            rowSum += a[j][j];
        }
        cout<<"="<<rowSum;
        rowSum=0;
        cout<<endl;
    }
    return 0;
}
