/*

	12. Write a program which accept one number and position from user and off that bit. Return modified number. 
	
	Input :  10 2
	Output :  8 

	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>

//Logic 
int ChkBit(int no,int pos)
{
	int flag=0;
	flag=no^pos;
	return flag;		
}

//Entry point function 
int main(int argc,char * argv[])
{
	int no=atoi(argv[1]);
	int pos=atoi(argv[2]);
	int ret=ChkBit(no,pos);
	cout<<"\n Output :"<<ret<<"\n";
	return 0;
}	