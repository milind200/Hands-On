/*

29. Accept amount in US dollar and return its corresponding value in Indian currency.
	Consider 1$ as 70 rupees
	
	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : C programming

*/

#include<stdio.h>

int DtoR(int no)
{
	return no*70;
}

int main()
{
	int D=0,ret=0;
	printf("Enter your amount in dollar : ");
	scanf("%d",&D);
	ret=DtoR(D);
	printf("amount in rupees : %d rs",ret);
	return 0;
}