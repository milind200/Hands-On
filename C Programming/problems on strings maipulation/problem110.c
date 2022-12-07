/*

110.Write a program which accept string from user reverse that string in place. 
	
	Input :   "abcd" 
	Output :   "dcba" 
	Input :   "abba" 
	Output :   "abba"

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<string.h>
void ChkChar(char* arr)
{	
	printf("\n Output : %s \n",strrev(arr));
}

//Entry point function
int main()
{
	char arr[20];
	char ch='\0';
	int ret=0;
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",&arr);
	ChkChar(arr);
	return 0;
}	