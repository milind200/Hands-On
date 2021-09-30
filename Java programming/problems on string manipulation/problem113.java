/*

113. Write a program which accept string from user and copy capital characters of that string into another string. 
	
	Input :   “Marvellous Multi OS” 
	Output :   “MMOS” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
		
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java .util.*;

class Logic
{
	public static String CopyString(String str)
	{
		int j=0;
		StringBuilder dest=new StringBuilder();
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='A'&&str.charAt(i)<='Z')
			{
				dest.append(str.charAt(i));
			}
		}
		return dest.toString();
	}
}
class problem113 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		String Dest=CopyString(str);
		System.out.print("\n Output : "+Dest);
		System.out.println();
	}	
}