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
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	static int RentPerkilometre(int kilometer)
	{
		int ret=0;
		if(kilometer<100)
		{
			ret= kilometer*25;
		}
		if(kilometer>100)
		{	
			ret= ((kilometer-100)*15)+2500;
		}
		return ret;
	}
}

class problem68
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter the current kilometer of the car : ");
		int km=sobj.nextInt();
		Logic lobj=new Logic();
		System.out.print("\n Your rent per kilometer is "+lobj.RentPerkilometre(km)+" Rs ");
		System.out.println();
		
	}
}