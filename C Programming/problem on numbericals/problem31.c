/*

31 .Write a program to find odd factorial of given number.  

	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

int Multiply(int no)
{
	int ans=1;
	while(no>=1)
	{
		if(no%2!=0)
		{	
			ans*=no;
		}
		no--;
	}
	return ans;
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
	printf(" Multipication of odd factors the given number is : %d",ret);
	return 0;
}	