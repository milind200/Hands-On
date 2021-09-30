/*
49 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 5  iCol = 5  
		  
Output :  1  2  3  4  5   
			  -1 -2 -3 -4 -5    
			   1  2  3  4  5   
			  -1 -2 -3 -4 -5    
			   1  2  3  4  5
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : C programming
*/

#include<stdio.h>

//Logic

void Print(int row , int col)
{
	int no1=1,no2=-1;
	for(int i=0;i<row;i++)
	{	
		no1=1;
		no2=-1;
		for(int j=0;j<col;j++)
		{
			if (i%2==0)
			{
				printf(" %d ",no1);
				no1=no1+1;
			}
			else
			{
				printf("%d ",no2);
				no2=no2-1;
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