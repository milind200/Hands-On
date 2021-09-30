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
using namespace std;
#include<iostream>

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
	cout<<"\n Enter your string : ";
	gets(arr);
	ret=Vowels(arr);
	if(ret==1)
	{
		cout<<"\n TRUE \n";
	}
	else
	{
		cout<<"\n FALSE \n";
	}
	return 0;
}