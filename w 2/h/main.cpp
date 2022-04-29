#include <iostream>

using namespace std;

int main()
{
    int row, column, rowSum = 0, columnSum = 0;
    cout << "Enter row number: ";
    cin >> row;

    cout << "Enter column number: ";
    cin >> column;

    int a[row][column];
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            cout << "Enter a number: ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            cout << a[i][j];
            cout << " ";
            rowSum += a[i][j];
        }
        cout << " = " << rowSum;
        rowSum = 0;
        cout << endl;
    }
    return 0;
}

