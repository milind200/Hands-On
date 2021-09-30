/*

87. Accept Character from user and check whether it is capital or not (A-Z). 
	
	Input :  F 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 
	
	Author : Milind Nalawade

	Date : 12/07/2021

	Language : C++ programming

*/
using namespace std;
#include<iostream>
int Chkchar(char ch)
{
	int flag=0;
	if (65<=ch && ch<=90)
	{
		flag=1;	
	}
	return flag;
}

int main()
{
	char ch='\0';
	int ret=0;
	cout<<"\n Enter your character : ";
	cin>>ch;
	ret=Chkchar(ch);
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
