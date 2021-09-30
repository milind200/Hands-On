/*
19. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range. 
	
	Input : 897  9 13 
	Toggle all bits from position 9 to 13 of input number ie 7286.	
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<stdlib.h>

void ChkBit(int no,int first,int last)
{
	int ino=no^((1<<last)-first);
	cout<<" "<<ino;
}

int main(int argc,char* argv[] )
{
	int no=atoi(argv[1]);
	int first=atoi(argv[2]);
	int last=atoi(argv[3]);
	int ret=0;
	ChkBit(no,first,last);
	return 0;
}