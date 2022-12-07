/*
6. Write a recursive program which accept number from user and display below pattern.  
	
	Input :  5 
	
	Output :  5 * 4 * 3 * 2 * 1 *  
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>


int i=1;
//Logic
	
void Print(int no)
{
	if(no==0)
	{
		return;
	}
	else
	{
		cout<<" "<<i<<" *";
	}
	i++;
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