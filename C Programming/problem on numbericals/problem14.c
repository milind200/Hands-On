/*
14.Write a program which accept number from user and print numbers till that  number
	
	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//logic

void Print(int no)
{
	int i=0;
	while(i!=no)
	{
		printf("%d ",i+1);
		i++;
	}
}
// Entry point function

int main()
{
	int i=0;
	printf("Enter your number : ");
	scanf("%d",&i);
	Print(i);
	return 0;
}