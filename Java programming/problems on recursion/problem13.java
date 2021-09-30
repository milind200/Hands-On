/*
13.  Write a recursive program which accept number from user and return smallest digit 
	
		Input : 87983 
	
		Output : 3 
	
		Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int min=8,mod=0;
	static void Min(int no)
	{
		if(no==0)
		{
			return ;
		}
		else
		{
			mod=no%10;
			if(min>mod)
			{
				min=mod;
			}
			no=no/10;
			Min(no);
		}
	}	
}

class problem13 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		Min(no);
		System.out.print("\n Output : "+min+"\n");
	}
}