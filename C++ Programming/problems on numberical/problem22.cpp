/*

22. Write a program which accept area in square feet and convert it into square meter.
	(1 square feet = 0.0929 Square meter) 
	
	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : C++ programming
	
*/	
using namespace std;
#include<iostream>

//Logic
float square_meter(float SF)
{
	return SF*0.0929;
}

// Entry point function

int main()
{
	float SF=0.0,ret=0.0;
	printf("Enter area in square feet : ");
	scanf("%f",&SF);
	
	ret=square_meter(SF);
	printf("area in square meter is : %f",ret);
	return 0;
}