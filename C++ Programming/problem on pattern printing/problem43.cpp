/*

43.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 3  iCol = 4  
	Output :  A A A A A   
				  B B B B B   
				  C C C C C 
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic

void Print(int row,int  col)
{
	char ch='A';
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<ch<<" ";	
		}
		ch++;
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