/*
13.Write a program which accept number from user and print that number of $ & * on screen. 

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Java 14.0.2
	
*/

import java.util.*;
import java.lang.*;

class problem8_13
{
	static void Print(int ino)
	{
		while(ino!=0)
	{
		System.out.print("$ ");
		System.out.print("* ");
		ino--;
	}
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.print("Enter your number : ");
		int i=sobj.nextInt();
		Print(i);
	}
}
