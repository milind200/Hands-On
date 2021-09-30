/*
11. Write a recursive program which accept number from user and return largest digit 
	
	Input : 87983 
	
	Output : 9  
	
	Author :Milind Nalawade
	
	Date : 26/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int max=0,mod=0;
	static void Mul(int no)
	{
		if(no==0)
		{
			return ;
		}
		else
		{
			mod=no%10;
			if(max<mod)
			{
				max=mod;
			}
			no=no/10;
			Mul(no);
		}
	}	
}

class problem11 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		Mul(no);
		System.out.print("\n Output : "+max+"\n");
	}
}