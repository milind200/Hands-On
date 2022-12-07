/*
66. Design application for hotel. According to the management 
	team of hotel they are giving discount on total bill amount of 
	customer.  If  bill amount is less than 500 then there is no 
	discount , if bill amount is less than 1500 and more than 500 
	they give 10% discount.  And if the bill amount is more than 
	1500 then they give 15% discount.  Our application should 
	accept total bill amount and depends on the discount policy 
	we have to return the amount after applying discount.
	
	Input : 1200  
	Output : 1080 
	Input : 290   
	Output : 290 
	Input : 3700  
	Output : 3145 

	Author : Milind Nalawade
		
	Date : 05/07/2021
		
	Language :  C programming

*/

#include<stdio.h>

//Logic
int Discount(int amount) 
{
	if(amount<500)
	{
		return amount;
	}
	else if(amount>500 && amount<1500)
	{
		return amount-((amount/100)*10);
	}
	else
	{
		return amount-((amount/100)*15);
	}
}
//Entry point function
int main()
{
	int amount=0;
	printf("\nEnter the customer's amount in rupees : ");
	scanf("%d",&amount);
	int ret=Discount(amount);
	printf("\nTotal bill amount is : %d",ret);
	return 0;
}
	