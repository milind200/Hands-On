/*
39. Accept number of rows and number of columns from user and display below pattern. 
   Input :  iRow = 3  iCol = 4  
  Output : 
				* # * #    
				* # * #    
				* # * # 
	
	Author : Milind Nalawade
	
	Date : 01/07/2021

	Language : C programming

*/

#include<stdio.h>

//Logic
void Print(int row,int column)
{
	int i=0,j=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if (j%2==0)
			{	
				printf(" *");
			}
			else
			{
				printf(" #");
			}
		}
		printf("\n");
	}
}

//Entry point function

int main()
{
	int row=0,column=0;
	printf("Enter row : ");
	scanf("%d",&row);
	printf("Enter column : ");
	scanf("%d",&column);
	Print(row,column);
	return 0;
}	