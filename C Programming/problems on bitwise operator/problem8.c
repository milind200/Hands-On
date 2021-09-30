/*
8. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number. 
	
	Input :  137
	Output : 201 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : C programming 

*/

#include<stdio.h>
//Logic
int ChkBits(int ino)
{
	int pos=0x00000040;
	int flag=pos|ino;
	return flag;
}

//Entry point function
int main()
{
	int no=0,ret=0;
	printf("\n Enter the number :");
	scanf("%d",&no);
	ret=ChkBits(no);
	printf("\n Output : %d\n",ret);
	return 0;
}		