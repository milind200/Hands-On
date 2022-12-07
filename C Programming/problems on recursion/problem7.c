/*
7. Write a recursive program which accept number from user and return summation of its digits. 
	
	Input :  879 
	
	Output :  24 
	
		Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
int sum=0,mod=0;
int Sum(int no)
{
	if(no==0)
	{
		return sum;
	}
	else
	{
		mod=no%10;
		sum+=mod;
		no=no/10;
		Sum(no);
	}
}	

//Entry point function
int main()
{
	int no=0,ret=0;
	printf("\n Input : ");
	scanf("%d",&no);
	ret=Sum(no);
	printf("\n Output : %d",ret);
	return 0;
}	