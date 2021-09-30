/*

108.Write a program which accept string from user and accept one character. 
	 Return index of first occurrence of that character.
	 
	Input :   “Marvellous Multi OS”    M 
	Output :   0 
	Input :   “Marvellous Multi OS”    W 
	Output :   -1 
	Input :   “Marvellous Multi OS”    e 
	Output :   4 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<string.h>
int ChkChar(char* str,char ch)
{	
	int i=0;
	while(*str!='\0')
	{
		if (*str==ch)
		{
			break;
		}
		if(strlen(str)==i)
		{
			i=-1;
			break;
		}
		i++;
		str++;
	}
	return i;
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
	printf("\n First occurance of the character %c is : %d \n",ch,ret);
	return 0;
}	