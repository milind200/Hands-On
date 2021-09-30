/*
	8.Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large. 
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language : C programming
	
*/
#include<stdio.h>

//logic

void Number(int value)
{
	if(value<50)
	{
		printf("small\n");
	}
	else if(value>50&&value<=100)
	{
		printf("medium\n");
	}
	else
	{
		printf("large\n");
	}
}
// Entry point function
int main()
{
	int ino=0;
	printf("Enter your number : ");
	scanf("%d",&ino);
	Number(ino);
	return 0;
}
