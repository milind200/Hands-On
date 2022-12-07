/*
102.Write a program which accept string from user and convert it into upper case. 
	
	Input :   "Marvellous Multi OS" 
	Output :   MARVELLOUS MULTI OS 
	
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
		System.out.println("\n"+arr.toUpperCase());
	}
}

class problem102 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Convert(str);
	}
	
}		