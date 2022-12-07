/*
105. Write a program which accept string from user and count number of white spaces 

	Input :   "MarvellouS" 
	Output :   0 
	Input :   "MarvellouS Infosystems" 
	Output :   1 

	Author : Milind Nalawade
	
	Date : 15/07/2021
		
	language : C programming

*/


#include<stdio.h>
#include<string.h>

int CountSpace(char* arr)
{
	int no=0;
	for (int i=0;i<strlen(arr);i++)
	{
		if(arr[i]==32)
		{
			no++;
		}
	}
	return no;
}

//Entry point function

int main()
{	
	char arr[20];
	int ret=0;
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",arr);
	ret=CountSpace(arr);
	printf(" Number of whitespaces are : %d",ret);
	return 0;
}	