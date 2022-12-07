/*

63. Accept number of rows and number of columns from user and display below pattern. 
	  
	  Input :  iRow = 4  iCol = 4  
	  
	  Output : * * * *   
					*    * *    
					*  *   *    
					* * * * 
	  
	  Author : 	Milind Nalawade

	  Date	: 05/07/2021
	  
	  Language : C programming

*/

#include<stdio.h>

//Logic

void Pattern(int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=col-1;j>=0;j--)
		{
			if(i==0||j==0||i==row-1||j==col-1||i==j)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
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
	Pattern(row,col);
	return 0;
}