/*
116. Write a program which accept string from user and copy that characters of that 
		string into another string in reverse order. 
	
		Input :   "Marvellous Python" 
		Output :   "nohtyP suollevraM" 
	
		Author : Milind Nalawade
	
		Date : 16/07/2021
	
		Language : Java 14.0.2
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static void Output(String arg,StringBuilder arr)
	{
		for(int i=(arg.length())-1;i>=0;i--)
		{
			arr.append(arg.charAt(i));
		}
	}	
}
class problem116 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		StringBuilder arr=new StringBuilder(str.length());
		Output(str,arr);
		System.out.println("\n Output : "+arr);
	}
}
	