/*
1.Write a program which checks whether 15th bit is On or OFF.
	
	input : 16385
	output : The 15th bit is on
	
	input : 14
	output : The 15th bit is off
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : C++ programming 

*/
using namespace std;
#include<iostream>

//Logic
int ChkBits(int ino)
{
	int pos=0x00004000;
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
	cout<<"\n Enter the number :";
	cin>>no;
	ret=ChkBits(no);
	if(ret==1)
	{
		cout<<"\n The 15th bit is on \n";
	}
	else
	{
		cout<<"\n The 15th bit is off \n";
	}
	return 0;
}	