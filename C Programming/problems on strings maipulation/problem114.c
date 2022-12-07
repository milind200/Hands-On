/*
114. Write a program which accept string from user and copy small characters of that string into another string. 

	Input :   “Marvellous multi OS” 
	Output :   “arvellous multi” 

	Author : Milind Nalawade
	
	Date : 16/07/2021
		
	Language : C progrmming 
	
*/	

#include<stdio.h>
#include<string.h>

//Logic
void CopyCap(char* arr,char* brr)
{
	
	while(*arr!='\0')
	{
		if (*arr>='a'&&*arr<='z'||*arr==' ')
		{
			*brr=*arr;
			brr++;	
		}
		arr++;
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
	CopyCap(arr,brr);
	printf("\n Output : %s\n",brr);
	return 0;
}