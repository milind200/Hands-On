/*
48 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 5  iCol = 5  
		Output : a b c d e   
					  1 2 3 4 5   
					  a b c d e   
					  1 2 3 4 5   
					  a b c d e  
		
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : C++ programming
*/
using namespace std;
#include<iostream>

//Logic

void Print(int row , int col)
{
	char no1='a';
	int no2=1;
	for(int i=0;i<row;i++)
	{	
		no1='a';
		no2=1;
		for(int j=0;j<col;j++)
		{
			if (i%2==0)
			{
				cout<<" "<<no1<<" ";
				no1=no1+1;
			}
			else
			{
				cout<<" "<<no2<<" ";
				no2=no2+1;
			}
		}
		printf("\n");
	}
}

//Entry point function

int main()
{
	int row=0;
	int col=0;
	printf("Enter number of row : ");
	scanf("%d",&row);
	printf("Enter number of column : ");
	scanf("%d",&col);
	Print(row,col);
	return 0;
}		