/*
4. Accept one number and check whether is is divisible by 5 or not
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : C Programming
*/

#include<stdio.h>


// Entry point function

int main()
{
	int divident=0,divisor=0;
	printf("Enter the divident : ");
	scanf("%d",&divident);
	printf("Enter the divisor : ");
	scanf("%d",&divisor);
	
	if(divident%divisor==0)
	{
		printf("%d is divisible by %d",divident,divisor);
	}
	else
	{
		printf("%d is not divisible by %d",divident,divisor);
	}
}





