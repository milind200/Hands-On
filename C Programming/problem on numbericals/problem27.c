/*

27.Write a program which accept accept range from user and display all numbers in between that range in reverse order.
	
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
	
	while(max>=min)
	{
		printf("%d ",max);
		max--;
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