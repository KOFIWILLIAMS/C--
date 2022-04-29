#include<iostream>
using namespace std;
int main(){
	int mat[2][2],row1,row2,column1,column2,rowsum;
	cout<<"Enter the numbers for the row\n";
	cin>>row1>>row2;
	cout<<"Enter the numbers for the column\n";
	cin>>column1>>column2;
	mat[0][0]=row1;
	mat[0][1]=row2;
	mat[1][0]=column1;
	mat[1][1]=column2;
	
	cout<<mat[0][0]<<"\t";
	cout<<mat[0][1]<<"\t"<<"\n";
	cout<<mat[1][0]<<"\t";
	cout<<mat[1][1]<<"\t";
	rowsum=mat[0][0]+mat[0][1];
	cout<<endl;
	cout<<rowsum;
   
   return 0;
}
