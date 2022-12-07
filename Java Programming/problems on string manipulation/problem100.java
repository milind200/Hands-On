/*
99. Write a program which accept string from user and check whether it contains vowels in it or not. 

	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language :Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static void Reverse(String str)
	{
		int no=str.length();
		System.out.print(" ");
		for(int i=no-1;i>=0;i--)
		{
			System.out.print(str.charAt(i));
		}
	}
}

class problem100 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String arr=sobj.nextLine();
		Reverse(arr);
	}
}