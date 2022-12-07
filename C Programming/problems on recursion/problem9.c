/*
9. Write a recursive program which accept number from user and return its  product of digits.  
	
	Input :  523 
	
	Output :  30	
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
int mul=1,mod=0;
int Output(int no)
{
	if(no==0)
	{
		return mul;
	}
	else
	{
		mod=no%10;
		mul*=mod;
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