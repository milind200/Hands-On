/*

88.  Accept Character from user and check whether it is digit or not (0-9). 
	
	Input :  7 
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
	if (49<=ch && ch<=57)
	{
		flag=1;	
	}
	return flag;
}

int main()
{
	char ch='\0';
	int ret=0;
	cout<<"\n Enter your number : ";
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
