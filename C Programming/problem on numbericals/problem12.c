/*
	12. Write a program which accept number from user and display its table in reverse order
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language :C programming
	
*/

#include<stdio.h>

//logic

void Tables(int no)
{
	int j=10;
	int ans=1;
	while(j>0)
	{
		ans=no*j;
		printf("%d ",ans);
		ans=1;
		j--;
	}	
}

//Entry point function

int main()
{
	int i=0;
	printf("Enter the number : ");
	scanf("%d",&i);
	Tables(i);
	return 0; 
}