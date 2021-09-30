/*

120. Write a program which 2 strings from user and check whether first N contents of two strings are equal or
	    not. (Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
		
		Input :   “Marvellous Infosystems”    
					 “Marvellous Logic Building”    10
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<stdlib.h>
#include<string.h>

//Logic
int StrCmp(char* s1,char* s2,int no)
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	int flag=1;
	
	for(int i=0;i<no;i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=0;
			break;
		}
	}	
	return flag;
}

//Entry point function
int main(int argc,char* argv[])
{
	char* s1=argv[1];
	char* s2=argv[2];
	int no=atoi(argv[3]);
	int ret=0;
	ret=StrCmp(s1,s2,no);
	if(ret==1)
	{
		cout<<"\n TRUE \n";
	}
	else
	{
		cout<<"\n FALSE \n";
	}
	return 0;
}