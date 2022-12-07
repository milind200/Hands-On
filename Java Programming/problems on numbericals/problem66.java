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
		
	Language :  Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	static int Discount(int amount)
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
}

class problem66
{
	public static void main(String args[])
	{	
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter the amount of the customer in rupees : ");
		int amount=sobj.nextInt();
		Logic lobj=new Logic();
		int ret=lobj.Discount(amount);
		System.out.println("\n Total bill amount : "+ret);
	}
}