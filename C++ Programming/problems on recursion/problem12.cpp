/*
12. Write a recursive program which accept string from user and count number of small characters. 
	
	Input : HElloWOrlD 
	
	Output : 5 
	
	Author : Milind Nalawade
	
	Date : 26/08/2021
	
	Language : C programming
	
*/

using namespace std;
#include<iostream>
#include<string.h>
int cnt=0,i=0;
int Output(char* arr)
{
	if(*arr=='\0')
	{
		return cnt;
	}
	if(*arr>=97 && *arr<=122)
	{
		cnt++;
	}
	arr++;
	Output(arr);
}	

//Entry point function
int main()
{
	char arr[20];
	int ret=0;
	cout<<"\n Input : ";
	cin.getline(arr,20);
	ret=Output(arr);
	cout<<"\n Output : "<<cnt<<"\n";
	return 0;
}	