/*

110.Write a program which accept string from user reverse that string in place. 
	
	Input :   "abcd" 
	Output :   "dcba" 
	Input :   "abba" 
	Output :   "abba"

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java .util.*;

class Logic
{
	public static void reverse(String str)
	{
		StringBuffer sbr = new StringBuffer(str);
        sbr.reverse();
		System.out.print("\n Output : "+sbr);
	}
}
class problem110 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		reverse(str);
	}	
}