/*
15.Write a program which accept one number from user and count number of ON (1) bits in it without 
	using % and / operator. 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : C programming

*/

#include<stdio.h>
#include<stdlib.h>

//Logic
int ChkBit(int no)
{
	int count=0;
	while(no)
	{
		count+=no&1; // 6=0110 1=0001 || 6&1=011
		no>>=1;
	}
	return count;
}

//Entry point function
int main(int argc,char* argv[])
{
	int no=atoi(argv[1]);
	int ret=0;
	ret=ChkBit(no);
	printf("\n there are %d bits on \n",ret);
}