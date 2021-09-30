/*
103.Write a program which accept string from user and toggle the case. 
	
		Input :   “Marvellous Multi OS” 
		Output :   mARVELLOUS mULTI os 
	
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
		int ln=arr.length();
		char str[] =new char[arr.length()];
		for (int i=0;i<ln;i++)
		{
			str[i]=arr.charAt(i);
			if(str[i]>=65&&str[i]<=90)
			{
				char temp=Character.toLowerCase(str[i]);
				str[i]=temp;
			}
			else if(str[i]>=97&&str[i]<=122)
			{
				char temp=Character.toUpperCase(str[i]);
				str[i]=temp;
			}
		}
		System.out.println();
		for(int j=0;j<ln;j++)
		{
			System.out.print(str[j]);
		}
		System.out.println();
	}
}

class problem103 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Convert(str);
	}
	
}		