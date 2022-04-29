#include <iostream>

using namespace std;
int age;
string nationality;
int main()
{
    cout << "Enter your age " << endl;
    cin >> age;
    cout << "Enter your nationality \n";
    cin >> nationality;
    if(age>=18){
        if(nationality=="Ghanaian "){
    cout << "Qualified" << endl;
        }else{
    cout << "Not Qualified "<<endl;
    }
    }


    return 0;
}
