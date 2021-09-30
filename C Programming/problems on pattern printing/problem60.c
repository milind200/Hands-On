/*

59. Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 4  iCol =  4  
	
	Output : 1 2 3 4    
					 2 3 4      
						3 4      
						   4
							
	Author : 	Milind Nalawade
	
	Date : 05/07/2021
	
	Language : C programming

*/

#include<stdio.h>

//Logic

void Print(int row ,int col)
{
	int no=1;
	for(int i=0;i<row;i++)
	{
		no=1;
		for(int j=0;j<col;j++)
		{
			if(i<=j)
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
	Print(row,col);
	return 0;
}	