/*
14. Write a program which accept one number from user and toggle contents of first and last nibble of the number.
	Return modified number. (Nibble is a group of four bits) 
		
	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>

//Logic 
int ChkBit(int no)
{
	int flag=0xf000000f;
	int ino=no|flag;
	return ino;		
}

//Entry point function 
int main(int argc,char * argv[])
{
	int no=atoi(argv[1]);
	int ret=ChkBit(no);
	cout<<"\n Output : "<<ret<<"\n";
	return 0;
}	