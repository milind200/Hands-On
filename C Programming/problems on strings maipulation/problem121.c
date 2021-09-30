/*
121. Accept string from user and check whether the string is palindrome or not without considering its case.
		
		Input :   “1abccBA1” 
		Output :   TRUE 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : C programming

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Logic
int StrCmp(char* s1)
{
	int no=strlen(s1)/2,ret=0;
	char* arr=s1+no; // copy characters after no/2
	char brr[no];
	brr[no]='\0';
	strncpy(brr,s1,no);
	strrev(brr);
	return strcmpi(brr,arr);
}

//Entry point function
int main(int argc,char* argv[])
{
	char* s1=argv[1];
	char* s2=argv[2];
	int no=atoi(argv[3]);
	int ret=0;
	ret=StrCmp(s1);
	if(ret==0)
	{
		printf("\n TRUE \n");
	}
	else
	{
		printf("\n FALSE \n");
	}
	return 0;
}