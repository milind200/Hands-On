/*
120. Write a program which 2 strings from user and check whether first N contents of two strings are equal or
	    not. (Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
		
		Input :   "Marvellous Infosystems"   
					 "Marvellous Logic Building"    10
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : C programming
*/

import java.lang.*;
import java.util.*;

class Logic
{
	static int StrCmp(String s1,String s2,int no)
	{
		int flag=1;
		for(int i=0;i<no;i++)
		{
			if(i==s1.length()||i==s2.length())
			{
				flag=0;
				break;
			}
			if(s1.charAt(i)!=s2.charAt(i))
			{
				flag=0;
				break;
			}
		}
		return flag;
	}
}

class problem120 extends Logic
{
	public static void main(String args[])
	{
		String s1=args[0];
		String s2=args[1];
		int no=Integer.parseInt(args[2]);
		int ret=StrCmp(s1,s2,no);
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