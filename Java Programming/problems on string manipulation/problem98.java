/*
98. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
	
	Input :   "MarvellouS"
	Output :   6 (8-2) 

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language :Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int Difference(String str)
	{
		int no1=0,no2=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='A' && str.charAt(i)<='Z')
			{
				no1++;
			}
			if(str.charAt(i)>='a' && str.charAt(i)<='z')
			{
				no2++;
			}
			
		}
		return no2-no1;
	}
}

class problem98 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String arr=sobj.nextLine();
		int ret=Difference(arr);
		System.out.print("\n Number of small letters is : "+ret+"\n");
	}
}