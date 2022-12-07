/*
122.Write a program which accept string from user count number of words from string  
		
		Input :   "Marvellous Multi OS" 
		Output :   3 
		Input :   "          Marvellous Multi            OS       Pune"
		Output :   4 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : Java 14.0.2
*/

import java.lang.*;
import java.util.*;

class Logic
{
	static int ChkWord(String str)
	{
		int count=0;
		char ch[]=new char[str.length()];
		if(str.length()==0)
		{
			count=0;
			return count;
		}
		for(int i=0;i<str.length();++i)
		{
			ch[i]=str.charAt(i);
			if((i>0)&&(ch[i]==' ')&&(ch[i-1]!=' ')||(ch[i]!=' ')&&(i==0))
			{
				count++;
			}
		}
		return count;
	}
}		

class problem122 extends Logic
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		int ret=ChkWord(str);
		System.out.print("\n Output : "+ret+"\n");
	}
}