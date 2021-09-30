/*

19. Write a program which accept width & height of rectangle from user and calculate its area. 
	(Area = Width * Height) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : C programming
	
*/	

#include<stdio.h>

//Logic
float Area(float w,float h)
{
	return (w*h);
}

// Entry point function

int main()
{
	float w=0.0,h=0.0,ret=0.0;
	printf("Enter width : ");
	scanf("%f",&w);
	printf("Enter heigth : ");
	scanf("%f",&h);
	ret=Area(w,h);
	printf("Area of rectangle is : %.3f",ret);
	return 0;
}