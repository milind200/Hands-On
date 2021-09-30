/*
96.Write a program which accept string from user and count number of capital characters. 
	
	Input :   "Marvellous Multi OS"
	Output :   4

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int CountCapital(String str)
	{
		int no=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='A' && str.charAt(i)<='Z')
			{
				no++;
			}
		}
		return no;
	}
}

class problem96 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String arr=sobj.nextLine();
		int ret=CountCapital(arr);
		System.out.print("\n Number of capital letters is : "+ret+"\n");
	}
}