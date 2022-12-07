/*

20.  Write a program which accept distance in kilometre and convert it into meter. 
		(1 kilometre = 1000 Meter)  

	Author : Milind Nalawade
	
	Date:26/06/2021
		
	Language : C++ programming
	
*/	
using namespace std;
#include<iostream>

//Logic
int Kilometer(int m)
{
	return (m*1000);
}

// Entry point function

int main()
{
	int m=0,ret=0;
	cout<<"Enter Kilometer : ";
	cin>>m;
	ret=Kilometer(m);
	printf("Kilometer into meter is : %d m",ret);
	return 0;
}