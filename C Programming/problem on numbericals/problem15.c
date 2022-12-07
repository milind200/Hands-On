/*
15.Write a program which accept number from user and print its numbers line. 

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
void Print(int no)
{
	int i=-no;

	while(i!=no+1)
	{
		printf("%d ",i);
		i++;
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