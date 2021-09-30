/*
2.Program to print a string multiple times on screen
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : java 14.0.2
*/

/*
imports
*/
import java.util.*;
import java.lang.*;

class Logic
{
	void print(String str,int no)
	{
		for(int i=0;i<no;i++)
		{
			System.out.println(str);
		}
	}
}
class problem2
{
	public static void main(String args[])
	{
		String str; 
		int no=0; 
		Scanner sobj=new Scanner (System.in);
		System.out.println("Enter your string : ");
		str=sobj.nextLine();
		Logic lobj=new Logic();
		System.out.println("How many times to print : ");
		no=sobj.nextInt();
		lobj.print(str,no);
	}
}

