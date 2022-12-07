/*

29. Accept amount in US dollar and return its corresponding value in Indian currency.
	Consider 1$ as 70 rupees
	
	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : C++ programming

*/
using namespace std;
#include<iostream>

int DtoR(int no)
{
	return no*70;
}

int main()
{
	int D=0,ret=0;
	cout<<"Enter your amount in dollar : ";
	cin>>D;
	ret=DtoR(D);
	cout<<"amount in rupees : "<<ret<<" rs";
	return 0;
}