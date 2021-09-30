/*

91. Display ASCII value of given character
	
	Author :Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class Logic 
{
	public static void DisplayASCII(char ch)
	{
		int ascii1=ch;
		System.out.println("\n The ASCII value of "+ch+" is ="+ascii1);
	}
}

class problem91 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		DisplayASCII(ch);
	}	
}