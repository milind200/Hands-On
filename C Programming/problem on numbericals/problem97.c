/*
97. Write a program which accept string from user and count number of small characters. 

	Input :   "Marvellous"
	Output :   9 

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

int CountSmall(char* str)
{
	int no=0;
	
	while(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
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
	ret=CountSmall(arr);
	printf("\n The number of small letters are : %d\n",ret);
	return 0;
}