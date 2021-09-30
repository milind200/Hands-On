/*

41.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 4  iCol = 4  
	Output : A B C D   
				  A B C D   
				  A B C D   
				  A B C D
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

void Print(int row,int  col)
{
	char ch='A';
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf( " %c ",ch);
			ch++;
		}
		ch='A';
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