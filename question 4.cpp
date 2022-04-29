#include <iostream>

using namespace std;

int main()
{
    int N,M,rSum=0,cSum=0,row,column,c,b;
    cout<<"Enter the number of rows: ";
    cin>>N;
    cout<<"Enter the number of colunms: ";
    cin>>M;
    int Mat[N][M];
    for(b=1;b<=N;b++){
        cout<<"Enter row value\n";
        cin>>row;
        rSum=rSum+b;

    }
    for(c=1;c<=M;c++){
        cout<<"Enter column value\n";
        cin>>column;
        cSum=cSum+c;
    }
    cout<<"sum of row numbers = "<<rSum<<"\n"<<"Sum of column numbers = "<<cSum;
    return 0;
}
