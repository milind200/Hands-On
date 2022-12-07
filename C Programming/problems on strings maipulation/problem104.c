/*
104. Write a program which accept string from user and display only digits from that string.
	Input :   “marve89llous121” 
	Output :   89121 
	Input :   “Demo” 
	
	Author : Milind Nalawade
	
	Date : 15/07/2021
		
	language : C programming

*/


#include<stdio.h>
#include<string.h>

void Digit(char* arr)
{
	
	for (int i=0;i<strlen(arr);i++)
	{
		if(arr[i]>=49&&arr[i]<=57)
		{
			printf(" %c",arr[i]);
		}
	}	
}

//Entry point function

int main()
{	
	char arr[20];
	int ret=0;
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",arr);
	Digit(arr);
	return 0;
}	