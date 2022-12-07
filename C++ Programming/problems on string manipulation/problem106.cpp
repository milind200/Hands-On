/*
106.Write a program which accept string from user and accept one character. Check whether that character is present in string or not. 
	
	Input :   “Marvellous Multi OS”    e 
	Output :   TRUE 
	Input :   “Marvellous Multi OS”    W 
	Output :   FALSE 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic
int ChkChar(char* str)
{
	char ch='\0';
	int flag=0;
	cout<<"\n Enter the character to search in the string : ";
	cin>>ch;
	while(*str!='\0')
	{
		if (*str==ch)
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
	cout<<"\n Enter your string : ";
	scanf("%[^'\n']s",&arr);
	ret=ChkChar(arr);
	if(ret==1)
	{
		printf("\n TRUE \n");
	}
	else
	{
		printf("\n FALSE \n");
	}
}	