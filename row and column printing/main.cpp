#include <iostream>

using namespace std;

int main()
{
 int kofi[3][4][5] = {{1,2,3,4},{6,7,8,9},{2,3,4,5}};
 for (int row=0; row<3; row++){
    for(int column=0; column<4; column++){
            for(row=0;row<5;row++){
                cout<<kofi[row][column][row]<< "  ";
            }
    cout<<"  =  ";

    cout<<endl;
    }

 }

return 0;
}

