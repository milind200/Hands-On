/*

1.Program to divide two numbers 
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : java 14.0.2
	
*/
import java.util.*;
import java.lang.*;

class Divide
{
	float division(int a ,int b)
	{
		return (float)a/(float)b;
	}	
}

class problem1
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		Divide obj1=new Divide();
		int a,b;
		float ans;
		System.out.println();
		System.out.print("Enter Divident : ");
		a=sobj.nextInt();
		System.out.println();
		System.out.print("Enter the Divisor : ");
		b=sobj.nextInt();
		ans=obj1.division(a,b);
		System.out.println();
		System.out.println("The division of "+a+" and "+b+" is = "+ans);	
	}
}