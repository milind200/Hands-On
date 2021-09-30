/*
6. Write a recursive program which accept number from user and display below pattern.  
	
	Input :  5 
	
	Output :  5 * 4 * 3 * 2 * 1 *  
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	static int i=1;
	static void Print(int no)
	{
		if(no==0)
		{
			return;
		}
		else
		{
			System.out.print(" "+i+" *");
		}
		i++;
		no--;
		Print(no);
	}	
}

class problem6 extends Logic
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