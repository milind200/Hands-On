/*

103.Write a program which accept string from user and toggle the case. 
	
		Input :   “Marvellous Multi OS” 
		Output :   mARVELLOUS mULTI os 
		
		Author : Milind Nalawade
		
		Date : 15/07/2021
		
		language : C++ programming

*/
using namespace std;
#include<iostream>
#include<string.h>

void Covert(char* arr)
{
	for (int i=0;i<strlen(arr);i++)
	{
		if((arr[i]>=97)&&(arr[i]<=122))
		{
			char temp=arr[i]-32;
			arr[i]=temp;
		}
		else if(arr[i]>=65&&arr[i]<=90)
		{
			char ch=arr[i]+32;
			arr[i]=ch;
		}
	}	
	cout<<" ";
	cout<<arr;
}

//Entry point function

int main()
{	
	char arr[20];
	cout<<"\n Enter your string : ";
	scanf("%[^'\n']s",arr);
	Covert(arr);
	return 0;
}		