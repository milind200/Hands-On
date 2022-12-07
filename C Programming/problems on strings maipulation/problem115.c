/*
115. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function). 
	
	Input :   “Marvellous Infosystems”    “Logic Building” 
	Output :  “Marvellous Infosystems Logic Building” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming
	
*/

//Logic
#include<stdio.h>
#include<string.h>

//Logic
void StrCon(char* arr,char* brr,char* crr)
{
	
	while(*arr!='\0')
	{
		*crr=*arr;
		crr++;
		arr++;
	}
	while(*brr!='\0')
	{
		*crr=*brr;
		crr++;
		brr++;
	}
	*crr='\0';

}

//Entry point function
int main()	
{
	char arr[30];
	char brr[30];
	char crr[60];
	printf("\n Enter your string1 : ");
	scanf("%[^'\n']s",&arr);
	printf("\n Enter your string2 : ");
	scanf(" %[^'\n']s",&brr);
	StrCon(arr,brr,crr);
	printf("\n Output : %s\n",crr);
	return 0;
}