/*
91. Display ASCII value of given character
	
	Author :Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

void DisplayASCII(char ch)
{
	cout<<"\n The ASCII value of the "<<ch" is = "<<int(ch);
}

int main()
{
	char ch='\0';
	cout<<"\n Enter your character : ";
	cin>>ch;
	DisplayASCII(ch);
	return 0;
}	
