/*

21. Write a program which accept temperature in Fahrenheit and convert it into celsius.
		(1 celsius = (Fahrenheit -32) * (5/9)) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Java 14.0.2
	
*/	

import java.lang.*;
import java.util.*;

class problem21
{
	static double celsius(double F)
	{
		return ((F-32)*(0.5556));
	}

	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		double F=0.0,ret=0.0;
		System.out.print("Enter temperature in Fahrenheit : ");
		F=sobj.nextDouble();
	
		ret=celsius(F);
		System.out.println("temperature in celsius : "+ret);
	}
}	