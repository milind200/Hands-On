/*

5. Write a program which checks whether first and last bit is On or OFF.
	First bit means bit number 1 and last bit means bit number 32.

	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : C programming 

*/

using namespace std;
#include<iostream>

//Logic
int ChkBits(int ino)
{
	int pos=0x80000001;
	int flag=pos*&ino;
	if(flag==2147483647)
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
		cout<<"\n The first and last bit is on \n";
	}
	else
	{
		cout<<"\n The first and last bit is off \n";
	}
	return 0;
}	