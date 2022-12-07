///////////////////////////////////////////////////
//	1.	write a program to divide two numbers
///////////////////////////////////////////////////
//header file :
///////////////////
#include<stdio.h>


/////////////////////////
//Logic of the program 
////////////////////////

float Divide(int a, int b)
{
	float ret=0.0;
	ret=a/(float)b;
	return ret;
}

/////////////////////////
//entry point function
//////////////////////////
int main()
{
	int a=0,b=0;
	float ans=0.0;
	
	//step 1: take input from user
	printf("Enter the numbers to divide \n");
	printf("\n");
	printf("Enter the divident : ");
	scanf("%d",&a);
	printf("Enter the divisior : ");
	scanf("%d",&b);
	
	//step 2: call the function Divide
	ans=Divide(a,b);
	
	//step 3:Display the result

	printf("Division of %d and %d is = %.2f",a,b,ans);
	
	return 0;	
}