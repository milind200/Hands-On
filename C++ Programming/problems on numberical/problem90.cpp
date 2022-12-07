/*
90.Accept division of student from user and depends on the division display exam timing.
	There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at
	9.20 AM and D at 10.30 AM. (Application should be case insensitive) 

	Input :  C 
	Output :  Your exam at 9.20 AM 
	Input :  d 
	Output :  Your exam at 10.30 AM
	
	Author : Milind Nalawade

	Date : 12/07/2021

	Language : C programming
	
*/


//Logic
using namespace std;
#include<iostream>
void Chkchar(char ch)
{
	int flag=0;
	if (ch=='a' || ch=='A')
	{
		cout<<"\n Your exam time is 7 AM \n";
	}
	else if (ch=='b' || ch=='B')
	{
		cout<<"\n Your exam time is 8.30 AM \n";
	}
	else if (ch=='c' || ch=='C')
	{
		cout<<"\n Your exam time is 9.20 AM \n";
	}
	else if (ch=='d' || ch=='D')
	{
		cout<<"\n Your exam time is 10.30 AM \n";
	}
	else
	{
		cout<<"\n Invalid Input !!!\n";
	}
		
}

int main()
{
	char ch='\0';
	int ret=0;
	cout<<"\n Enter your Division : ";
	cin>>ch;
	Chkchar(ch);
	return 0;
}	
	