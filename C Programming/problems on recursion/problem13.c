/*
13.  Write a recursive program which accept number from user and return smallest digit 
	
		Input : 87983 
	
		Output : 3 
	
		Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : C programming
	
*/

#include<stdio.h>

//Logic
int min=8,mod=0;
int Output(int no)
{
	if(no==0)
	{
		return min;
	}
	else
	{
		mod=no%10;
		if(min>mod)
		{
			min=mod;
		}
		no=no/10;
		Output(no);
	}
}	

//Entry point function
int main()
{
	int no=0,ret=0;
	printf("\n Input : ");
	scanf("%d",&no);
	ret=Output(no);
	printf("\n Output : %d\n",ret);
	return 0;
}	