/*
5. Accept one number from user and print that number of * on screen.  
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : C programming
*/
#include<stdio.h>

//Entry point function

int main()
{
	int no=0;
	printf("Enter your number : ");
	scanf("%d",&no);
	
	while(no)
	{
		printf("* ");
		no--;
	}
}

