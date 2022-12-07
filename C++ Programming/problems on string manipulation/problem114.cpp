/*

114. Write a program which accept string from user and copy small characters of that string into another string. 

	Input :   “Marvellous multi OS” 
	Output :   “arvellous multi” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<string.h>

//Logic
void CopyCap(char* arr,char* brr)
{
	
	while(*arr!='\0')
	{
		if (*arr>='a'&&*arr<='z'||*arr==' ')
		{
			*brr=*arr;
			brr++;	
		}
		arr++;
	}
	*brr='\0';
}

//Entry point function
int main()	
{
	char arr[30];
	char brr[30];
	cout<<"\n Enter your string : ";
	cin.getline(arr,30);
	CopyCap(arr,brr);
	cout<<"\n Output : "<<brr<<"\n";
	return 0;
}