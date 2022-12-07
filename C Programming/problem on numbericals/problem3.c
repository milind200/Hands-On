/*
3. Program to print 5 to 1 numbers on screen.  
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : C programming
*/
#include<stdio.h>

//Entry point function

int main()
{
	int no=0;
	printf("Enter the number : ");
	scanf("%d",&no);
	
	while(no)
	{
		printf("%d ",no);
		no--;
	}
	return 0;
}

