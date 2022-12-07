/*
94. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
	
	Input :  % 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 
	
	Author : Milind Nalawade
	
	Date: 13/07/2021
	
	language : C++ programming

*/

using namespace std;
#include<iostream>

//Logic
int Display(char ch)
{
	int flag=0;
	if(ch==33||ch==35||ch==36||ch==37||ch==38||ch==42||ch==94||ch==64)
	{
		flag=1;
	}
	return flag;
}

//Entry point function
int main()
{
	char ch='\0';
	int ret=0;
	cout<<"\n Enter your character : ";
	cin>>ch;
	ret=Display(ch);
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