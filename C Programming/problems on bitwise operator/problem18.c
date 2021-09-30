/*
18. Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF. 
	
	Input :  10 3 7 
	Output :  TRUE 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : C programming

*/

#include<stdio.h>
#include<stdlib.h>

int ChkBit(int no,int first,int last)
{
	int i=1<<(first);
	int j=1<<(last);
	if(no&i||no&j)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc,char* argv[] )
{
	int no=atoi(argv[1]);
	int first=atoi(argv[2]);
	int last=atoi(argv[3]);
	int ret=0;
	ret=ChkBit(no,first,last);
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