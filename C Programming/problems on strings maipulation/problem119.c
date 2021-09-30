/*
119.Write a program which 2 strings from user and check whether contents of two strings are equal or not.
	  (Implement strcmp() function). 
	 
		Input :   “Marvellous Infosystems”   
				 “Marvellous Infosystems” 
		Output :  TRUE 
	
		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : C programming

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Logic
int StrCmp(char* s1,char* s2)
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	int flag=1;
	if(len1!=len2)
	{
		return 0;
	}
	
	for(int i=0;i<len1;i++)
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
	int ret=0;
	ret=StrCmp(s1,s2);
	if(ret==1)
	{
		printf("\n TRUE \n");
	}
	else
	{
		printf("\n FALSE \n");
	}
	return 0;
}