/*
122.Write a program which accept string from user count number of words from string  
		
		Input :   “Marvellous Multi OS” 
		Output :   3 
		Input :   “          Marvellous Multi            OS       Pune” 
		Output :   4 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : C programming

*/
using namespace std;
#include<iostream>
#include<string.h>

//Logic
int ChkWord(char str[])
{
	int cnt=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '&&str[i+1]!=' ')
		{
			cnt++;
		}
	}
	return cnt+1;
}

//Entry point function
int main()
{
	char arr[30];
	cout<<"\n Enter your string : ";
	scanf("%[^\n]s",arr);
	int ret=ChkWord(arr);
	cout<<ret;
	return 0;
}	