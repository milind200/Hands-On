/*

4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF. 	
	
	input : 448
	output : The 7th & 8th & 9th bit is on
	
	input : 445
	output : The 7th & 8th & 9th is off
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : C programming 

*/

#include<stdio.h>
//Logic
int ChkBits(int ino)
{
	int pos=0x000001c0;
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
		printf("\n The 7th & 8th & 9th bit are On \n");
	}
	else
	{
		printf("\n The 7th & 8th & 9th bit are  off \n");
	}
	return 0;
}	