/*
9. Write a recursive program which accept number from user and return its  product of digits.  
	
	Input :  523 
	
	Output :  30	
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int mod=0,mul=1;
	static void Mul(int no)
	{
		if(no==0)
		{
			return ;
		}
		else
		{
			mod=no%10;
			mul*=mod;
			no=no/10;
			Mul(no);
		}
	}	
}

class problem9 extends Logic
{
	public static	void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		Mul(no);
		System.out.print("\n Output : "+mul+"\n");
	}
}