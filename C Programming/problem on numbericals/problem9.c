/*
9. Accept single digit number from user and print it into word. 
	
	Author:Milind Nalawade
	
	Date:24/06/2021
	
	language : C programming
	
*/
#include<stdio.h>

// Logic
void Number(int value)
{
	switch(value)
	{
		case 1:printf("one");
					break;
		case 2:printf("two");
					break;
		case 3:printf("three");
					break;
		case 4:printf("four");
					break;
		case 5:printf("five");
					break;
		case 6:printf("six");
					break;
		case 7:printf("seven");
					break;
		case 8:printf("eight");
					break;
		case 9:printf("nine");
					break;
	}
}
//Entry point function
int main()
{
	int i=0;
	printf("Enter your number : ");
	scanf("%d",&i);
	if(i<0)
	{
		i=i*-1;
	}
	Number(i);
	return 0;
}	