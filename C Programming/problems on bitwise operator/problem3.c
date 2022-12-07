/*

3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.  
	
	input : 135282759
	output : The 7th & 15th & 21st , 28th bit is on
	
	input : 14598
	output : The 7th & 15th & 21st , 28th is off
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : C programming 

*/

#include<stdio.h>
//Logic
int ChkBits(int ino)
{
	int pos=0x08104040;
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
		printf("\n The 7th & 15th & 21st , 28th bit are On \n");
	}
	else
	{
		printf("\n The 7th & 15th & 21st , 28th bit are  off \n");
	}
	return 0;
}	