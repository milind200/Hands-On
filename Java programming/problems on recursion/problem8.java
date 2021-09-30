/*
8. Write a recursive program which accept number from user and return its factorial.  
	
	Input :  5 
	
	Output : 120 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int factor=1;
	static void Factor(int no)
	{
		if(no==1)
		{
			return ;
		}
		else
		{
			factor*=no;
			Factor(no-1);
		}
	}	
}

class problem8 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		Factor(no);
		System.out.print("\n Output : "+factor+"\n");
	}
}