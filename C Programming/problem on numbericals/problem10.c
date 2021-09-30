/*
10.Write a program to find factorial of given number.  
	
	Author : Milind Nalawade
	
	Date:24/06/2021
	
	Language : C programming

*/
#include<stdio.h>

//Logic
int Factorial(int ino)	
{
	static int i=1;
	if(ino!=1)
	{
		i=i*ino;
		ino--;
		Factorial(ino);
	}
	return i;
}
// Entry point function

int main()
{
	int ino=0,ret=0;
	printf("Enter your number : ");
	scanf("%d",&ino);
	ret=Factorial(ino);
	printf("The factorial of %d is %d",ino,ret);
}
