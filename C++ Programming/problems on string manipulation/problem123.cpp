/*
123. Write a program which accept string from user and return length of largest word. 
	
	Input :   “Marvellous Multi OS Infosystems” 
	Output :   10 
	
			Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<string.h>
#include<ctype.h>
//Logic
int CntWord(char str[])
{
	int max=0;
	int cnt=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
		{
			cnt++;
		}	
		if(max<cnt)
		{
			max=cnt;
		}
		if(isspace(str[i]))
		{
			cnt=0;
		}
	}
	return max;
}

//Entry point function
int main()
{
	char arr[30];
	cout<<"\n Enter your string : ";
	scanf("%[^'\n']s",arr);
	int ret=CntWord(arr);
	cout<<"\n Output : "<<ret<<" \n";
	return 0;
}	