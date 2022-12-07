/*
97. Write a program which accept string from user and count number of small characters. 

	Input :   "Marvellous"
	Output :   9 

	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language :Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int CountSmall(String str)
	{
		int no=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='a' && str.charAt(i)<='z')
			{
				no++;
			}
		}
		return no;
	}
}

class problem97 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String arr=sobj.nextLine();
		int ret=CountSmall(arr);
		System.out.print("\n Number of small letters is : "+ret+"\n");
	}
}