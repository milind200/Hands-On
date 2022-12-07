/*

21. Write a program which accept temperature in Fahrenheit and convert it into celsius.
		(1 celsius = (Fahrenheit -32) * (5/9)) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : C programming
	
*/	

#include<stdio.h>

//Logic
float celsius(float F)
{
	return (F-32)*(0.5556);
}

// Entry point function

int main()
{
	float F=0.0,ret=0.0;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&F);
	
	ret=celsius(F);
	printf("temperature in celsius : %.3f",ret);
	return 0;
}