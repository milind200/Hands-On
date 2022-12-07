/*
16.Write a program which accepts N from user and print all odd numbers up to N. 	

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;
//logic
class problem16
{
	static void Print(int no)
	{
		int i=1;
		while(i<=no)
		{
			System.out.print(i+" ");
			i+=2;
		}
	}
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number :");
		int i=sobj.nextInt();
		Print(i);
	}
}