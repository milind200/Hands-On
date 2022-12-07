/*
5. Write a program which checks whether first and last bit is On or OFF.
	First bit means bit number 1 and last bit means bit number 32.

	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : C programming 

*/

#include<stdio.h>
//Logic
int ChkBits(int ino)
{
	int pos=0x80000001;
	int flag=pos&ino;
	if(flag==pos)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//Entry point function
int main()
{
	int no=0,ret=0;
	printf("\n Enter the number :");
	scanf("%d",&no);
	ret=ChkBits(no);
	if(ret==1)
	{
		printf("\n The first and last are On \n");
	}
	else
	{
		printf("\n The first and last bit are  off \n");
	}
	return 0;
}		