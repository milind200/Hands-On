/*
112. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function) 
	
	Input :   "Marvellous Multi OS"    10 
	Output :   " Marvellous "
	Note : If third parameter is greater than the size of source string then copy whole string into destination. 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
//Logic
void CopyString(char* arr,char* brr)
{
	int no=0;
	cout<<"\n Enter your number : ";
	cin>>no;
	for(int i=0;i<no;i++)
	{
		*brr=*arr;
		*arr++;
		*brr++;
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
	CopyString(arr,brr);
	cout<<"\n Output : "<<brr<<"\n";
	return 0;
}