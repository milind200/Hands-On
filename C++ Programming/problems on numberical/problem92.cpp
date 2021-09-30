/*

92. Accept character from user. If character is small display its corresponding capital 
	character, and if it small then display its corresponding capital. In other cases display as it is. 

	Input :  Q 
	Output : q 
	Input :  m 
	Output : M 
	Input :  4 
	Output : 4   Input :  % 
	Output : % 
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<ctype.h>

//Logic
void Display(char ch)
{
	if(ch>=64  && ch<=90)
	{
		cout<<"\n Output : "<<char(tolower(ch))<<"\n";
		return;
	}
	else
	{
		cout<<"\n Output : "<<char(toupper(ch))<<"\n";
		return;
	}
	cout<<"\n Output : "<<ch<<"\n";
	
}
//Entry point function	
int main()
{
	char ch='\0';
	cout<<"\n Enter your character : ";
	cin>>ch;
	Display(ch);
}