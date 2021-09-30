/*
100. Write a program which accept string from user and display it inn reverse order. 
	
	Input :   “MarvellouS” 
	Output :   “SuollevraM”
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/
#include<stdio.h>
#include<string.h>
//Logic
void Reverse(char *str)
{
	 int size=strlen(str);
	 printf(" ");
	for(int i=size-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

//Entry point function

int main()	
{
	char arr[20];
	int ret=0;
	printf("\n Enter your string : ");
	gets(arr);
	Reverse(arr);
	return 0;
}	