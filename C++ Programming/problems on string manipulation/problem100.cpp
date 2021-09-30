/*
100. Write a program which accept string from user and display it inn reverse order. 
	
	Input :   “MarvellouS” 
	Output :   “SuollevraM”
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/
using namespace std;
#include<iostream>
#include<string.h>
//Logic
void Reverse(char *str)
{
	 int size=strlen(str);
	for(int i=size-1;i>=0;i--)
	{
		cout<<str[i];
	}
}

//Entry point function

int main()	
{
	char arr[20];
	int ret=0;
	cout<<"\n Enter your string : ";
	gets(arr);
	Reverse(arr);
	return 0;
}	