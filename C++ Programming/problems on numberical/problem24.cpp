/*

24. Write a program which accept range from user and display all even numbers in between that range

	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : C++ programming
	
*/

using namespace std;
#include<iostream>

//Logic

void Range(int min,int max)
{
	if(max<min)
	{
		cout<<"Invalid range !!!\n";
	}
	
	while(min<=max)
	{
		if(min%2==0)
		{
			cout<<min<<" ";
		}
		min++;
	}
}

//Entry point function

int main()
{
	int i=0,j=0;
	
	cout<<" Enter your range : ";
	cin>>i>>j;
	Range(i,j);
}