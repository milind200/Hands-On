/*

23.Write a program which accept range from user and display all numbers in between that range.

	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : C programming
	
*/
#include<stdio.h>

//Logic

void Range(int min,int max)
{
	if(max<min)
	{
		printf("Invalid range !!!\n");
	}
	
	while(min<=max)
	{
		printf("%d ",min);
		min++;
	}
}

//Entry point function

int main()
{
	int i=0,j=0;
	
	printf(" Enter your range : ");
	scanf("%d  %d",&i,&j);
	Range(i,j);
}