/*
118. Write a program which accepts 2 strings from user and concat N characters of 
		second string after first string.Value of N should be accepted from user.
		(Implement strncat() function). Note : If third parameter is greater than the size 
		of second string then concat whole string after first string. 
	
		Input :   “Marvellous Infosystems”    “Logic Building”    5 
		
		Output :  “Marvellous Infosystems Logic”
		
		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<stdlib.h>
#include<string.h>

//Logic
void ConCat(char* s1,char* s2,int no)
{
	char* arr=s1;
	int j=strlen(arr);
	arr[j]=' ';
	j++;
	for(int i=0;i<no;i++)
	{
		arr[j]=s2[i];
		arr[j+1]='\0';
		j++;
	}
	cout<<arr;
}

//Entry point function
int main(int argc,char* argv[])
{
	char* s1=argv[1];
	char* s2=argv[2];
	int no=atoi(argv[3]);
	ConCat(s1,s2,no);
	return 0;
}