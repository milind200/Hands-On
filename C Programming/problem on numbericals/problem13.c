/*
13.Write a program which accept number from user and print that number of $ & * on screen. 

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

void Print(int ino)
{
	while(ino!=0)
	{
		printf("$ ");
		printf("* ");
		ino--;
	}
}

//Entry point function
int main()
{
	int i=0;
	printf("Enter your number : ");
	scanf("%d",&i);
	Print(i);
}