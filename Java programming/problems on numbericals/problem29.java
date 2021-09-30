/*

29. Accept amount in US dollar and return its corresponding value in Indian currency.
	Consider 1$ as 70 rupees
	
	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;

class problem29
{
	static int DtoR(int no)
	{
		return no*70;
	}
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.print("Enter your amount in dollars : ");
		int d=sobj.nextInt();
		int ret=DtoR(d);
		System.out.println("Amount in rupees is "+ret+" rs");
	}
}
