/*
13. Write a program which accept one number and position from user and on that bit. Return modified number. 
	
	  Input :  10 4
	  Output :  14 
	
	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : C programming
	
*/
#include<stdio.h>
#include<stdlib.h>

//Logic 
int ChkBit(int no,int pos)
{
	int flag=0;
	flag=no|pos;
	return flag;		
}

//Entry point function 
int main(int argc,char * argv[])
{
	int no=atoi(argv[1]);
	int pos=atoi(argv[2]);
	int ret=ChkBit(no,pos);
	printf("\n Output : %d \n",ret);
	return 0;
}		