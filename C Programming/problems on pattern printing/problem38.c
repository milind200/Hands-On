/*
38. Accept number of rows and number of columns from user and display below pattern. 
   Input :  iRow = 3  iCol = 5  
  Output : 
				5 4 3 2 1   
				5 4 3 2 1   
				5 4 3 2 1 
	
	Author : Milind Nalawade
	
	Date : 01/07/2021

	Language : C programming

*/

#include<stdio.h>

//Logic
void Print(int row,int column)
{
	int i=0,j=0,no=column;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf(" %d ",no);
			no--;
		}
		no=column;
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