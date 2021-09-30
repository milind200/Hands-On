/*
36. Accept number of rows and number of columns from user and display below pattern. 
   Input :  iRow = 4  iCol = 3  
  Output : 
					* * *   
	    			* * *   
		    		* * *   
			    	* * *
	
	Author : Milind Nalawade
	
	Date : 01/07/2021

	Language : C++ programming

*/
using namespace std;
#include<iostream>

//Logic
void Print(int row,int column)
{
	int i=0,j=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout<<" * ";
		}
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