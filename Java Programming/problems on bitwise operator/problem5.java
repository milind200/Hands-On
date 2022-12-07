/*
4. Write a program which checks whether first and last bit is On or OFF. 	

	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;
class Logic
{
	public static int Chkbit(long no)
	{
		long mask=0x80000001;
		System.out.print(mask);
		long flag=mask&no;
		if(flag==mask)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

class problem5 extends Logic
{
	public static void main(String args[]) 
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your number : ");
		long no=sobj.nextLong();
		int ret=Chkbit(no);
		
		if(ret==1)
		{
			System.out.print("\n first and last bit is on \n");
		}
		else
		{
			System.out.print("\n first and last bit is off \n");
		}
	}
}