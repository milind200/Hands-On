/*

109.Write a program which accept string from user and accept one character.
	Return index of last occurrence of that character. 

	Input :   “Marvellous Multi OS”    M 
	Output :   11 
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
	int i=0,j=0;
	while(*str!='\0')
	{
		if (*str==ch)
		{
			j=i;
		}
		if(strlen(str)==i)
		{
			j=-1;
			break;
		}
		i++;
		str++;
	}
	return j;
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
	printf("\n Last occurance of the character %c is : %d \n",ch,ret);
	return 0;
}	