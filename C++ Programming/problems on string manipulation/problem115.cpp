/*

115. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function). 
	
	Input :   “Marvellous Infosystems”    “Logic Building” 
	Output :  “Marvellous Infosystems Logic Building” 
	
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
		*crr=*arr;
		crr++;
		arr++;
	}
	while(*brr!='\0')
	{
		*crr=*brr;
		crr++;
		brr++;
	}
	*crr='\0';
}

//Entry point function
int main()	
{
	char arr[30];
	char brr[30];
	char crr[60];
	cout<<"\n Enter your string1 : ";
	cin.getline(arr,30);
	cout<<"\n Enter your string2 : ";
	cin.getline(brr,30);
	CopyCap(arr,brr,crr);
	cout<<"\n Output : "<<crr<<"\n";
	return 0;
}