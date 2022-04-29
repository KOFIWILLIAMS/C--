#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    string names[n];
    int ages[n];

    //STORE STUDENT DETAILS
    for(int i = 0; i < n; i++) {
        cout << "Enter the name: " << endl;
        cin >> names[i];
        cout << "Enter the age: ";
        cin >> ages[i];
    }
    // PRINT STUDENT DETAILS
    cout << "Name ---------- Age" << endl;
    for(int j = 0; j < n; j++) {
        cout << names[j] << "       " << ages[j] << endl;
    }
    // SEARCH FOR STUDENT DETAILS
    string student;
    bool test = true; int y = 0;
    while(test == true){
        cout << "Search for a student: ";
        cin >> student;
        for(int x = 0; x < n; x++) {
            if(student == names[x]) {
                cout << names[x] << " is " << ages[x] << " years of age" << endl;
                y++;
            }
        }
        if (y == 0){
            cout << "STOP" << endl;
            test = false;
        }else {
            y = 0;
        }
    }
    return 0;
}
