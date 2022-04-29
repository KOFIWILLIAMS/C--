#include <iostream>

using namespace std;
double pocketMoney,newPocketMoney,npm;
string gender;
int main()
{
    cout << "please enter your gender " << endl;
    cin >> gender;
    cout << "enter your pocket money " << endl;
    cin >> pocketMoney;
    if(gender == "Male"){
        npm = (0*1)* pocketMoney;
        newPocketMoney = pocketMoney + npm;
    }
    else {
        npm = (0*2) * pocketMoney;
        newPocketMoney = pocketMoney + npm;
    cout << "your new pocket money is " << newPocketMoney << endl;
    }
    return 0;
}
