/*

22. Write a program which accept area in square feet and convert it into square meter.
	(1 square feet = 0.0929 Square meter) 
	
	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Java 14.0.2
	
*/	
import java.lang.*;
import java.util.*;

class problem22
{
	static float square_meter(float SF)
	{
		return SF*0.0929;
	}

	public static void main(String args[])
	{
		Scanner sobj = new Scanner (System.in);
		float SF=0.0,ret=0.0;
		System.out.print("Enter area in square feet : ");
		SF=sobj.nextFloat();
		ret=square_meter(SF);
		System.out.println("area in square meter is : "+ret);
	}
}