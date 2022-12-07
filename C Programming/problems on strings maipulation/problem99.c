/*
99. Write a program which accept string from user and check whether it contains vowels in it or not. 

	Input :   “marvellous” 
	Output :   TRUE 
	Input :   “Demo” 
	Output :   TRUE 
	Input :   “xyz” 
	Output :   FALSE
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

int Vowels(char* str)
{
	int flag=0;
	
	while(*str!='\0')
	{		
		if(*str=='A'||*str=='a'||*str=='E'||*str=='e'||*str=='i'||*str=='I'||*str=='o'||*str=='O'||*str=='u'||*str=='U')
		{	
			flag=1;
		}
		str++;
	}	
	return flag;	
}

//Entry point function

int main()	
{
	char arr[20];
	int ret=0;
	printf("\n Enter your string : ");
	gets(arr);
	ret=Vowels(arr);
	if(ret==1)
	{
		printf("\n TRUE \n");
	}
	else
	{
		printf("\n FALSE \n");
	}
	return 0;
}