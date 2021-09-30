/*
126. Write a program which accept string from user and replace each occurrence of 
		first character of each word into capital case. 
		
		Input :   “marvellous infosystems ” 
		Output :  “Marvellous Infosystems ” 
		
		Author : Milind Nalawade
	
		Date : 06/08/2021
	
		Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;

class Logic
{
	static void Output(String arr)
	{
		int i=0;
		StringBuffer s =new StringBuffer(); 
		for(i=0;i<arr.length();i++)
		{
				if(i==0)
			{
				s.append(Character.toUpperCase(arr.charAt(i)));
				i++;
			}		
			if(arr.charAt(i-1)==' ')
			{	
				s.append(Character.toUpperCase(arr.charAt(i)));
				i++;
			}
			s.append(arr.charAt(i));
		}
		System.out.print("\n Output : "+s+"\n");
	}
}

class problem126 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String arr=sobj.nextLine();
		Output(arr);
	}
	
}