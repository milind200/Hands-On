/*

18.Write a program which accept radius of circle from user and calculate its area.
		Consider value of PI as 3.14. (Area = PI * Radius * Radius) 
	
	Author : Milind Naalawade
	
	Date : 26/06/2021
	
	Language : C programming
	
*/
#include<stdio.h>

//Logic

float Area(float no)
{
	return (3.14*no*no);
}

//Entry point function

int main()
{
	float r=0.0;
	float A=0.0;
	printf("Enter Radius of the circle : ");
	scanf("%f",&r);
	A=Area(r);
	printf("Area of the circle is : %.2f",A);
	return 0;
}