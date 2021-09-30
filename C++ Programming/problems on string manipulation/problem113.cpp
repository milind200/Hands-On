/*

113. Write a program which accept string from user and copy capital characters of that string into another string. 
	
	Input :   “Marvellous Multi OS” 
	Output :   “MMOS” 
	
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
	int no=0;
	while(*arr!='\0')
	{
		if (*arr>='A'&&*arr<='Z')
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