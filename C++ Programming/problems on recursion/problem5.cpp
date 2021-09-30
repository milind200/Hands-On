/*
5.Write a recursive program which display below pattern.  
	
	Input : 6
	
	Output :   a b c d e f 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

char ch='a';

//Logic
	
void Print(int no)
{
	if(no==0)
	{
		return;
	}
	else
	{
		cout<<" "<<ch;
	}
	ch++;
	no--;
	Print(no);
}	

//Entry point function
int main()
{
	int no=0;
	cout<<"\n Input : ";
	cin>>no;
	cout<<"\n Output : ";
	Print(no);
	cout<<"\n";
	return 0;
}	