/*
   6.Write a program which accept one number from user and print that number of even numbers on screen. 
	
	Author: Milind Nalawade
	
	Date: 19/06/2021

	language: Java 14.0.2
*/

import java.util.*;

class problem6
{
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		int i=2;
		
		for(int j=0;j<no;j++)
		{
			System.out.print(i+" ");
			i=i+2;
		}
	}
	
}


