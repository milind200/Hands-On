/*
10. Write a recursive program which accept string from user and count white spaces. 
	
	Input : HE llo WOr lD 
	
	Output : 3
	
	Author : Milind Nalawade
	
	Date : 26/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<string.h>
int cnt=0,i=0;
int Output(char* arr)
{
	if(*arr=='\0')
	{
		return cnt;
	}
	if(*arr==' ')
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
	printf("\n Input : ");
	gets(arr);
	ret=Output(arr);
	printf("\n Output : %d \n",cnt);
	return 0;
}	