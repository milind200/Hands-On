/*
7. Write a recursive program which accept number from user and return summation of its digits. 
	
	Input :  879 
	
	Output :  24 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>


int sum=0,mod=0;
//Logic
	
int Sum(int no)
{
	if(no==0)
	{
		return sum;
	}
	else
	{
	   mod=no%10;
	   sum+=mod;
	   no=no/10;
	   Sum(no); 
	}
}	

//Entry point function
int main()
{
	int no=0;
	cout<<"\n Input : ";
	cin>>no;
	int ret=Sum(no);
	cout<<"\n Output : "<<ret<<"\n";
	return 0;
}	