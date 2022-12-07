/*
   7.Write a program which accept number from user and print even factors of that number. 
	
	Author: Milind Nalawade
	
	Date: 19/06/2021

	language: C programming
*/

#include<stdio.h>

//Entry point function

int main()
{
	int a=0,i=2,j=0;
	printf("Enter your number : ");
	scanf("%d",&a);
	j=100;
	while(j)
	{
		if(i%a==0)
	{	
		printf("%d ",i);
		
	}
	i=i+2;	
		j--;
	}
	return 0;
}

