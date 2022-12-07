/*

65. Accept number of rows and number of columns from user and display below pattern. 
	  
	  Input :  iRow = 5  iCol = 5  
	  
	  Output : 1 2 3 4 5
					1 2       5
					1    3    5
					1       4 5
					1 2 3 4 5	
	  Author : 	Milind Nalawade

	  Date	: 05/07/2021
	  
	  Language : C programming

*/

#include<stdio.h>

//Logic

void Pattern(int row,int col)
{
	int no=1;
	for(int i=0;i<row;i++)
	{
		no=1;
		for(int j=0;j<col;j++)
		{	
			if (i==j||i==0||j==0||i==row-1||j==col-1)
			{
				printf(" %d ",no);
			}
			else
			{
				printf("   ");
			}
			no++;
		}
		printf("\n");
	}
}
//Entry point function	  

int main()
{
	int row=0,col=0;
	
	printf("Enter number of rows : ");
	scanf("%d",&row);
	printf("Enter number of columns : ");
	scanf("%d",&col);
	Pattern(row,col);
	return 0;
}