/*
16. Write a program which accept two numbers from user and display position of common ON bits 
	from that two numbers. 
	
	Input :  10 15  (1010  1111) 
	Output :  2 8 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : C programming

*/

#include<stdio.h>
#include<stdlib.h>

//Logic
void ChkBit(int no1,int no2)
{
	int pos=1;
	int no=no1&no2;
	int count=0;
	printf("\n Output : ");
	while(no)
	{
		count=no&1;
		if(count==1)
		{
			printf(" %d ",pos);
		}
		pos*=2;
		no>>=1;
		count=0;
	}
}

//Entry point function
int main(int argc,char* argv[])
{
	int no1=atoi(argv[1]);
	int no2=atoi(argv[2]);
	ChkBit(no1,no2);
	printf("\n");
	return 0;
}