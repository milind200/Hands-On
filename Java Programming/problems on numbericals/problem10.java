/*
10.Write a program to find factorial of given number.  
	
	Author : Milind Nalawade
	
	Date:24/06/2021
	
	Language : java 14.0.2

*/

import java.util.*;
import java.lang.*;

class problem10
{
	static int Factorial(int no)
	{
		int i=1;
		while(no!=0)
		{
			i=i*no;
			no--;
		}
		return i;
	}
	
	public static void main(String args[])
	{
			Scanner sobj=new Scanner(System.in);
			System.out.print("Enter your number : ");
			int ino=sobj.nextInt();
			int ret=Factorial(ino);
			System.out.println("The factorial of "+ino+" is "+ret);
	}
}