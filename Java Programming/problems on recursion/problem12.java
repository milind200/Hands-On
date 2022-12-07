/*
12. Write a recursive program which accept string from user and count number of small characters. 
	
	Input : HElloWOrlD 
	
	Output : 5 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int cnt=0,i=0;
	static void Output(String str)
	{
		if(str.length()==i)
		{
			return ;
		}
		if(str.charAt(i)>=97 && str.charAt(i)<=122)
		{
			cnt++;
		}
		i++;
		Output(str);
	}	
}

class problem12 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		String str;
		System.out.print("\n Input : ");
		str=sobj.nextLine();
		Output(str);
		System.out.print("\n Output : "+cnt+"\n");
	}
}