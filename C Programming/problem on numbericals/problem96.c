/*
96.Write a program which accept string from user and count number of capital characters. 
	
	Input :   “Marvellous Multi OS” 
	Output :   4

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

int CountCapital(char* str)
{
	int no=0;
	
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{	
			no++;
		}
		str++;
	}
	return no;
}

//Entry point function

int main()	
{
	char arr[20];
	int ret=0;
	printf("\n Enter your string : ");
	gets(arr);
	ret=CountCapital(arr);
	printf("\n The number of capital : %d\n",ret);
	return 0;
}