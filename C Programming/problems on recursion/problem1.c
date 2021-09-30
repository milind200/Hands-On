/*
1. Write a recursive program which display below pattern.  
	
	Input : 5
	
	Output :   * * * * * 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
	
void Print(int no)
{
	if(no==0)
	{
		return;
	}
	else
	{
		printf(" *");
	}
	no--;
	Print(no);
}	

//Entry point function
int main()
{
	int no=0;
	printf("\n Input : ");
	scanf("%d",&no);
	printf("\n Output : ");
	Print(no);
	printf("\n");
	return 0;
}	