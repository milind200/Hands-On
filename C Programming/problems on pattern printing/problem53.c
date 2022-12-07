/*

53.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 5  iCol = 5  
	
	Output : $ * * * *   
				  * $ * * *   
				  * * $ * *   
				  * * * $ *   
				  * * * * $ 
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : C programming

*/

#include<stdio.h>

//Logic

void Print(int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==j)
			{
				printf(" $ ");
			}
			else
			{
				printf(" * ");
			}
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