/*
119.Write a program which 2 strings from user and check whether contents of two strings are equal or not.
	   (Implement strcmp() function). 
	
		Input :   “Marvellous Infosystems”   
				 “Marvellous Infosystems” 
		Output :  TRUE 
	
		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Java 14.0.2
*/
import java.lang.*;
import java.util.*;

class Logic
{
	static int StrCmp(String s1,String s2)
	{
		int flag=1;
		int l1=s1.length();
		int l2=s2.length();
		if(l1!=l2)
		{
			flag=0;
			return flag;
		}
		
		for(int i=0;i<l1;i++)
		{
			if(s1.charAt(i)!=s2.charAt(i))
			{
				flag=0;
				break;
			}
		}
		return flag;
	}
}

class problem119 extends Logic
{
	public static void main(String args[])
	{
		String s1=args[0];
		String s2=args[1];
		int ret=StrCmp(s1,s2);
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