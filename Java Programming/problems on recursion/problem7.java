/*
7. Write a recursive program which accept number from user and return summation of its digits. 
	
	Input :  879 
	
	Output :  24 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int mod=0,sum=0;
	static void Sum(int no)
	{
		if(no==0)
		{
			return ;
		}
		else
		{
			mod=no%10;
			sum+=mod;
			no=no/10;
			Sum(no);
		}
	}	
}

class problem7 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		Sum(no);
		System.out.print("\n Output : "+sum+"\n");
	}
}