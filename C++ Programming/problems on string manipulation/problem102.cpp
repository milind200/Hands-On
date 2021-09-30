/*

102.Write a program which accept string from user and convert it into upper case. 
	
	Input :   "Marvellous Multi OS" 
	Output :   MARVELLOUS MULTI OS 
		
		Author : Milind Nalawade
		
		Date : 15/07/2021
		
		language : C++ programming

*/
using namespace std;
#include<iostream>
#include<string.h>

void CovertSmall(char* arr)
{
	for (int i=0;i<strlen(arr);i++)
	{
		if(arr[i]>='a'&&arr[i]<='z')
		{
			char temp=arr[i]-32;
			arr[i]=temp;
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
	CovertSmall(arr);
	return 0;
}		