#include <iostream>

using namespace std;

int main()
{
 int kofi[3][4] = {{1,2,3,4},{6,7,8,9}};
 for (int row=0; row<3; row++){
    for(int column=0; column<4; column++){
    cout<<kofi[row][column]<< "  " <<row + row <<column+column ;
    }
    cout<<"="<<endl;
 }

return 0;
}


