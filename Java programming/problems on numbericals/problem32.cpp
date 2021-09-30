/*

32. Write a program which returns difference between Even factorial and odd factorial of given number

	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

int Multiply(int no)
{
	int odd=1,even=1;
	while(no>=1)
	{
		if(no%2!=0)
		{	
			odd*=no;
		}
		else
		{
			even*=no;
		}
		no--;
	}
	return even-odd;
}

int main()
{
	int no=0,ret;
	printf("Enter your number : ");
	scanf("%d",&no);
	if(no<0)
	{
	    no*=-1;
	}
	ret=Multiply(no);
	printf("Difference between odd factors of the given number is : %d",ret);
	return 0;
}	