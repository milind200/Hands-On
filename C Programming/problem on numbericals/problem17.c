/*
17.Write a program which accept N and print first 5 multiples of N. 
	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : C language
	
*/

#include<stdio.h>

//Logic

void Print(int no)
{
	int i=1;
	while(i<=no)
	{
		printf("%d ",i*5);
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