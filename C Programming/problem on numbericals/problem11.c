/*
	11.Write a program which accept number from user and display its table. 
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language :C programming
	
*/

#include<stdio.h>

//logic

void Tables(int no)
{
	int j=1;
	int ans=1;
	while(j<11)
	{
		ans=no*j;
		printf("%d ",ans);
		ans=1;
		j++;
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