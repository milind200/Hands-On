/*
40. Accept number of rows and number of columns from user and display below pattern. 
   Input :  iRow = 4  iCol = 4 
  Output : 
				 1 1 1 1    
				 2 2 2 2   
				 3 3 3 3   
				 4 4 4 4
				 
	
	Author : Milind Nalawade
	
	Date : 01/07/2021

	Language : C++ programming

*/
using namespace std;
#include<iostream>

//Logic
void Print(int row,int column)
{
	int i=0,j=0,no=1;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout<<" "<<no<<" ";
		}
		no++;
		cout<<"\n";
	}
}

//Entry point function

int main()
{
	int row=0,column=0;
	cout<<"Enter row : ";
	cin>>row;
	cout<<"Enter column : ";
	cin>>column;
	Print(row,column);
	return 0;
}	