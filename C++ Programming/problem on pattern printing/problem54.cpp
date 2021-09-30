/*

51.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 6  iCol = 5  
	
	Output :    * * * * *  
					*@ @ @*   
					*@ @ @*   
					*@ @ @*   
					*@ @ @*   
				     * * * * *
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : C++ programming

*/
using namespace std;
#include<iostream>

//Logic

void Print(int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if((i==0)||(j==0)||(j==col-1)||(i==row-1))
			{
				cout<<" * ";
			}
			else
			{
				cout<<" @ ";
			}
		
		}
		cout<<"\n";
	}
}
//Entry point function

int main()
{
	int row=0,col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of columns : ";
	cin>>col;
	Print(row,col);
	return 0;
}	