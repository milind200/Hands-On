/*
17.Write a program which accept N and print first 5 multiples of N. 
	
	Author : Milind Nalawade
	
	Date : 25/06/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem17
{
	static void Print(int no)
	{	
	int i=1;
		while(i<=no)
		{
			System.out.print(i*5+" ");
			i++;
		}
	}
	
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		Print(no);
	}
}
