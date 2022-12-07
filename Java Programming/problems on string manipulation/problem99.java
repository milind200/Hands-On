/*
99. Write a program which accept string from user and check whether it contains vowels in it or not. 

	Input :   “marvellous” 
	Output :   TRUE 
	Input :   “Demo” 
	Output :   TRUE 
	Input :   “xyz” 
	Output :   FALSE

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language :Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int Vowels(String str)
	{
		int flag=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)=='A' || str.charAt(i)<='a'||str.charAt(i)=='e'||str.charAt(i)=='E'||str.charAt(i)=='i'||str.charAt(i)=='I'||str.charAt(i)=='o'||str.charAt(i)=='O'||str.charAt(i)=='u'||str.charAt(i)=='U')
			{
				flag=1;
			}
	
		}
		return flag;
	}
}

class problem99 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String arr=sobj.nextLine();
		int ret=Vowels(arr);
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