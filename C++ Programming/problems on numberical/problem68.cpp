/*
68. We have to design application for tourist company.  Tourist 
	company provides cars on rent.  Depends on the running of
	car they apply rent.If running is less than 100 kilometres then 
	they charge 25 rupees per kilometre .  And if running is more 
	than 100 kilometres then they apply 15 rupees per kilometre 
	after 100 kilometres.  We have to accept number of kilometres 
	from user and return the estimated rent. 

	Input : 73   Output : 1825 
	Input : 132   Output : 2980 
	Input : 189   Output : 3835 
	
	Author : Milind Nalawade
	
	Date : 06/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
//Logic
int RentPreKilometer(int kilometer)
{
		if(kilometer<100)
	{
		return kilometer*25;
	}
	if(kilometer>100)
	{	
		return ((kilometer-100)*15)+2500;
	}
}
	
//Entry point function

int main()
{
	int kilometer=0;
	cout<<"Enter current kilometer of the car : ";
	cin>>kilometer;
	cout<<"\n Your car rent per kilometer is : "<<RentPreKilometer(kilometer)<<"\n";
	return 0;
}	