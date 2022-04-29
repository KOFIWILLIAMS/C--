#include <iostream>

using namespace std;

int main()
{
int marks, sum, min, max;
float average;
sum = 0; average = 0;
int count = 1;
cout<<"enter marks of student" << count << ":";
cin>> marks;
sum = sum + marks;
if (count == 1) {
        min = marks; max = marks;
}
else {
        min = (min > marks) ? marks:min; max = (max < marks) ? marks: max;
}
count = count + 1;

    return 0;
}
