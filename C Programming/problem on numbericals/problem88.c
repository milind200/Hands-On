/*
87.  Accept Character from user and check whether it is digit or not (0-9). 
	
	Input :  7 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 
	
	Author : Milind Nalawade

	Date : 12/07/2021

	Language : C++ programming

*/
//Logic
#include<stdio.h>
int Chkchar(char ch)
{
	int flag=0;
	if (49<=ch && ch<=57 )
	{
		flag=1;	
	}
	return flag;
}

int main()
{
	int ch='\0';
	int ret=0;
	printf("\n Enter your number : ");
	scanf("%c",&ch);
	ret=Chkchar(ch);
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
	