/*
98. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
	
	Input :   “MarvellouS” 
	Output :   6 (8-2) 

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

int Difference(char* str)
{
	int no1=0,no2=0;
	
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{	
			no1++;
		}
		if(*str>='a'&&*str<='z')
		{	
			no2++;
		}
		str++;
	}
	return no2-no1;
}

//Entry point function

int main()	
{
	char arr[20];
	int ret=0;
	printf("\n Enter your string : ");
	gets(arr);
	ret=Difference(arr);
	printf("\n The difference between capital and small letters is : %d\n",ret);
	return 0;
}