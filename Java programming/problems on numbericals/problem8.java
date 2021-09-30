/*
	8.Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large. 
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language :Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem8
{
	static void Number(int no)
	{
		if(no<50)
		{
			System.out.println("small");
		}
		else if (no>50&&no<100)
		{
			System.out.println("medium");
		}
		else
		{
			System.out.println("large");
		}
	}
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		Number(no);
	}
}
