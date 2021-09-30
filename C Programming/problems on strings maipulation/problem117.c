/*
117. Write a program which accept string from user and copy that characters of that 
		string into another string by removing all white spaces. 
		
		Input :   “Marvel   lous Pyth   on” 
		Output :   “MarvellousPython”
		
		Author : Milind Nalawade
	
		Date : 16/07/2021
	
		Language : Java 14.0.2
*/		

#include<stdio.h>

//Logic
void RemoveSpace(char* str,char* brr)
{
	while(*str!='\0')
	{
		if(*str==' ')
		{
			str++;
		}
		*brr=*str;
		str++;
		brr++;
	}
	*brr='\0';
}
//Entry point function
int main()	
{
	char arr[30];
	char brr[30];
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",&arr);
	RemoveSpace(arr,brr);
	printf("\n Output : %s \n",brr);	
	return 0;
}