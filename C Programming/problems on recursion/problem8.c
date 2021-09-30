/*
8. Write a recursive program which accept number from user and return its factorial.  
	
	Input :  5 
	
	Output : 120 
		
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
int factor=1;
int Factor(int no)
{
	if(no==1)
	{
		return factor;
	}
	else
	{
		factor*=no;
		no--;
		Factor(no);
	}
}	

//Entry point function
int main()
{
	int no=0,ret=0;
	printf("\n Input : ");
	scanf("%d",&no);
	ret=Factor(no);
	printf("\n Output : %d \n",ret);
	return 0;
}	