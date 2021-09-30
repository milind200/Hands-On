/*

18.Write a program which accept radius of circle from user and calculate its area.
		Consider value of PI as 3.14. (Area = PI * Radius * Radius) 
	
	Author : Milind Naalawade
	
	Date : 26/06/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem18
{
	static double Area(double no)
	{
		return (3.14*no*no);
	}
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter radius of the circle : ");
		double r = sobj.nextDouble();
		double A=Area(r);
		System.out.printf("Area of circle is : %.2f",A);
	}
}