/*

25. Write a program which accept range from user and return addition of all numbers in between that range. 
	(Range should contains positive numbers only)
	
	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : C programming
	
*/
#include<stdio.h>

//Logic

int Range(int min,int max)
{
	int ans =0;
	
	if(max<min || min<0)
	{
		printf("Invalid range !!!\n");
	}
	
	while(min<=max)
	{
		ans=ans+min;
		min++;
	}
	return ans;
}

//Entry point function

int main()
{
	int i=0,j=0,ret=0;
	
	printf(" Enter your range : ");
	scanf("%d  %d",&i,&j);
	ret=Range(i,j);
	printf("Addition of the range is : %d ",ret);
}