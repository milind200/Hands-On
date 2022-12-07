/*
   6.Write a program which accept one number from user and print that number of even numbers on screen. 
	
	Author: Milind Nalawade
	
	Date: 19/06/2021

	language: C language
*/

#include<stdio.h>

//Entry point function

int main()
{
	int a=0,i=2;
	printf("Enter your number : ");
	scanf("%d",&a);
	while(a)
	{
		printf("%d ",i);
		i=i+2;
		a--;
	}
	return 0;
}


