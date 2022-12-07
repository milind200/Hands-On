/*
 16.Write a program which accepts N from user and print all odd numbers up to N. 	
	
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
		i+=2;
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