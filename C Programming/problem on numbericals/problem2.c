/*
2.Program to print a string multiple times on screen
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : C Programming
*/

#include<stdio.h>

/*
logic function
*/

void Print(char str[])
{
	int n=0;
	printf("How many time to print the given string : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("\n");
		printf("%s\n",str);
	}
}

/*
Entry point function
*/
int main()
{
	char str[10];
	printf("Enter your string \n");
	gets(str);
	//function call
	
	Print(str);
	
	return 0;
}
