/*
106.Write a program which accept string from user and accept one character. Check whether that character is present in string or not. 
	
	Input :   "Marvellous Multi OS"    e 
	Output :   TRUE 
	Input :   "Marvellous Multi OS"    W 
	Output :   FALSE 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int ChkChar(String str)
	{
		char ch='\0';
		int flag=0;
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your character to search in the string : ");
		ch=sobj.next().charAt(0);
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)==ch)
			{
				flag=1;
			}
		}
		return flag;
	}
}

class problem106 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner (System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		int ret=ChkChar(str);
		if(ret==1)
		{
			System.out.print("\n TRUE \n");
		}
		else
		{
			System.out.print("\n FALSE \n");
		}
	}
}
