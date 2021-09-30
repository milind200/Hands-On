/*

	11.Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE. 
	
	Input :  10 2 
	Output :  TRUE 
	
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
	flag=no&pos;
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
int main(int argc,char * argv[])
{
	int no=atoi(argv[1]);
	int pos=atoi(argv[2]);
	int ret=-1;
	ret=ChkBit(no,pos);
	if(ret==1)
	{
		cout<<"\n TRUE \n";
	}
	else
	{
		cout<<"\n FALSE \n";
	}
	return 0;
}	