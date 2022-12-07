/*

45.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 3  iCol = 4  
	Output : 	
				1 2 3 4   
				5 6  7 8   
				9 10 11 12
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

void Print(int row,int  col)
{
	int no=1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf( " %d ",no);	
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