/*

20.  Write a program which accept distance in kilometre and convert it into meter. 
		(1 kilometre = 1000 Meter)  

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Java 14.0.2
	
*/	

import java.lang.*;
import java.util.*;

class problem20
{
	static int Kilometer(int m)
	{
		return (m*1000);
	}

	public static void main(String args[])
	{
		Scanner sobj=new Scanner (System.in);
		int m=0,ret=0;
		System.out.print("Enter Kilometer : ");
		m=sobj.nextInt();
		ret=Kilometer(m);
		System.out.print("Kilometer into meter is : "+ret+" m");
	}
}	