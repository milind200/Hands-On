/*
107.Write a program which accept string from user and accept one character. Return frequency of that character. 
	
	Input :   "Marvellous Multi OS"    M 
	Output :   2 
	Input :   "Marvellous Multi OS"    W 
	Output :   0 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int ChkChar(String str,char ch)
	{
		int count=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)==ch)
			{
				count++;
			}
		}
		return count;
	}
}

class problem107 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner (System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		int ret=ChkChar(str,ch);
		System.out.println();
		System.out.print("Frequency of "+ch+" in the string is : "+ret);
		System.out.println();
	}
}
