/*
118. Write a program which accepts 2 strings from user and concat N characters of 
		second string after first string.Value of N should be accepted from user.
		(Implement strncat() function). Note : If third parameter is greater than the size 
		of second string then concat whole string after first string. 
	
		Input :   “Marvellous Infosystems”    “Logic Building”    5 
		
		Output :  “Marvellous Infosystems Logic”
		
		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static void Concat(String s1,String s2,int no)
	{
		StringBuffer arr=new StringBuffer();
		arr.append(s1);
		arr.append(' ');
		for(int i=0;i<no;i++)
		{
			arr.append(s2.charAt(i));
		}
		arr.toString();
		System.out.print("\n"+arr+"\n");
	}
}

class problem118 extends Logic
{
	public static void main(String argv[])
	{
		String s1= argv[0];
		String s2=argv[1];
		int no=Integer.parseInt(argv[2]);
		Concat(s1,s2,no);
	}
}