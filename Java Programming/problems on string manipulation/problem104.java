/*
104. Write a program which accept string from user and display only digits from that string.
		
		Input :   “marve89llous121” 
		Output :   89121 
		Input :   “Demo”
		
		Author : Milind Nalawade
		
		Date : 15/07/2021
		
		language : Java 14.0.2
		
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static void Convert(String arr)
	{
		for(int i=0;i<arr.length();i++)
		{
			if((arr.charAt(i)>=49) && (arr.charAt(i)<=57))
			{
				System.out.print(arr.charAt(i));
			}
		}
	}
}

class problem104 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Convert(str);
	}
	
}		