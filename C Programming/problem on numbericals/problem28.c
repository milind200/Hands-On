/*

28.Write a program which accept number from user and display below pattern.

	Author : Milind Nalawade
	
	Date: 18/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

void Print(int no)	
{
	int i=0;
	while(i<=no*2)
	{
		if(i<no)
		{
			printf("* ");
		}
		else
		{
			printf("# ");
		}
		i++;
	}
}
//Entry point function

int main()
{
	int no=0;
	printf("Enter your number : ");
	scanf("%d",&no);
	if(no<0)
	{
		no*=-1;
	}
	Print(no);	
	return 0;
}
	