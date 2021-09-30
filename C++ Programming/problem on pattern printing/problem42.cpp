/*

41.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 4  iCol = 4  
	Output : A B C D   
				  A B C D   
				  A B C D   
				  A B C D
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic

void Print(int row,int  col)
{
	char ch='A',ab='a';
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i%2==0)
			{	printf( " %c ",ch);
				ch++;
			}
			else
			{
				printf(" %c ",ab);
				ab++;
			}
		}
		ch='A';
		ab='a';
		cout<<"\n";
	}
}

//Entry point function

int main()
{
	int row=0,col=0;
	cout<<"Enter number of rows : ";
	cin>>row;
	cout<<"Enter number of columns :";
	cin>>col;
	Print(row,col);
	return 0;
}	