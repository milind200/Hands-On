/*

108.Write a program which accept string from user and accept one character. 
	 Return index of first occurrence of that character.
	
	Input :   "Marvellous Multi OS"   M 	
	Output :   0 
	Input :   "Marvellous Multi OS"    W 
	Output :   -1 
	Input :   "Marvellous Multi OS"    e 
	Output :   4 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java .util.*;

class Logic
{
	public static int ChkChar(String str,char ch)
	{
		int i=0;
		for(i=0;i<str.length();i++)
		{
			if (str.charAt(i)==ch)
			{
				break;
			}
		}
		if(i==str.length())
		{
		i=-1;
		}
		return i;
	}
}
class problem108 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		int ret=ChkChar(str,ch);
		System.out.println();
		System.out.print(" First occurence of the character "+ch+" is at index : "+ret );
		System.out.println();
	}	
}