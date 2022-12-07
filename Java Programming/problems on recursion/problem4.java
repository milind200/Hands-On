/*
4.Write a recursive program which display below pattern.  
	
	Input : 6
	
	Output :   A B C D E F 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	static char ch='A';
	static void Print(int no)
	{
		if(no==0)
		{
			return;
		}
		else
		{
			System.out.print(" "+ch);
		}
		ch++;
		no--;
		Print(no);
	}	
}

class problem4 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		System.out.print("\n Output : ");
		Print(no);
		System.out.println();
	}
}