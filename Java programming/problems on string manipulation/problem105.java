/*
105. Write a program which accept string from user and count number of white spaces 

	Input :   "MarvellouS" 
	Output :   0 
	Input :   "MarvellouS Infosystems" 
	Output :   1 				
		
	Author : Milind Nalawade
	
	Date : 15/07/2021
		
	language : Java 14.0.2
		
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int CountSpace(String arr)
	{
		int no=0;
		for (int i=0;i<arr.length();i++)
		{
			if(arr.charAt(i)==32)
			{
				no++;
			}	
		}
		return no;
	}
	
}

class problem105 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		int ret=CountSpace(str);
		System.out.print("\n Number of spaces in the given string are : "+ret);
		System.out.println();
	}
	
}		