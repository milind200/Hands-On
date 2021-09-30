/*

55.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 6  iCol = 5  
	
	Output :  1 2 3 4   
				   1 * * 4   
				   1 * * 4   
				   1 2 3 4 
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : C programming

*/

#include<stdio.h>

//Logic

void Print(int row,int col)
{
	int no=1;
	for(int i=0;i<row;i++)
	{
		no=1;
		for(int j=0;j<col;j++)
		{
			if((i==0)||(j==0)||(j==col-1)||(i==row-1))
			{
				printf(" %d ",no);
			}
			else
			{
				printf(" * ");
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
	Print(row,col);
	return 0;
}	