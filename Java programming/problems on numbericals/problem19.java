/*

19. Write a program which accept width & height of rectangle from user and calculate its area. 
	(Area = Width * Height) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Java 14.0.2
	
*/	

import java.util.*;
import java.lang.*;

class problem19
{
	static float Area(float w,float h)
	{
		return (w*h);
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		float w,h;
		System.out.print("Enter width : ");
		w=sobj.nextFloat();
		System.out.print("Enter height : ");
		h=sobj.nextFloat();
		float ret=Area(w,h);
		System.out.println("Area of rectangle is : "+ret);
	}
}