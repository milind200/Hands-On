/*
107.Write a program which accept string from user and accept one character. Return frequency of that character. 
	
	Input :   “Marvellous Multi OS”    M 
	Output :   2 
	Input :   “Marvellous Multi OS”    W 
	Output :   0 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
int ChkChar(char* str,char ch)
{	
	int counter=0;
	while(*str!='\0')
	{
		if (*str==ch)
		{
			counter++;
		}
		str++;
	}
	return counter;
}

//Entry point function
int main()
{
	char arr[20];
	char ch='\0';
	int ret=0;
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",&arr);
	printf("\n Enter the character : ");
	scanf(" %c",&ch);
	ret=ChkChar(arr,ch);
	printf("\n Frequency of the character %c is : %d \n",ch,ret);
	return 0;
}	