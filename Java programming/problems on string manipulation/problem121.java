/*
121. Accept string from user and check whether the string is palindrome or not without considering its case.
		
		Input :   “1abccBA1” 
		Output :   TRUE 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : Java 14.0.2

*/

import java.util.*;
import java.lang.*;

class Logic
{
	static boolean ChkStr(String str)
	{
		int no=str.length()/2;
		String brr=str.substring(0,no);
		StringBuilder arr=new StringBuilder( str.substring(no,str.length()));
		arr.reverse();
		boolean ret=brr.equalsIgnoreCase(arr.toString());
		return ret;
	}
}

class problem121 extends Logic
{
	public static void main(String argv[])
	{
		String str=argv[0];
		boolean ret=ChkStr(str);
		if (ret== true)
		{
			System.out.print("\n TRUE \n");
		}
		else
		{
			System.out.print("\n FALSE \n");
		}	
		
	}
}