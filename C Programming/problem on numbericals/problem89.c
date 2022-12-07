/*
89. Accept Character from user and check whether it is small case or not (a-z). 

	Input :  g 
	Output :  TRUE 
	Input :  D 
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
	if ( 97<=ch && ch<=122 )
	{
		flag=1;	
	}
	return flag;
}

int main()
{
	char ch='\0';
	int ret=0;
	printf("\n Enter your character : ");
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
		