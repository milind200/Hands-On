/*
15.Write a program which accept number from user and print its numbers line. 

	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Java 14.0.2
	
*/

import java.util.*;
import java.lang.*;

class problem15
{
	static void Print(int no)
	{
		int i=-no;

	while(i!=no+1)
	{
		System.out.print(i+" ");
		i++;
	}
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number : ");
		int i= sobj.nextInt();
		Print(i);
	}
}
