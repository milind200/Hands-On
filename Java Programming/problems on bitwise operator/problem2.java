/*
2. Write a program which checks whether 5th & 18th bit is On or OFF.  

	input : 131088
	output : The 5th and 18 bit is on
	
	input : 14598
	output : The 5th and 18 bit is off
	
	Author : Milind Nalawade
	
	Date : 01/08/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;
class Logic
{
	public static int Chkbit(int no)
	{
		int mask=0x0020010;
		int flag=mask&no;
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

class problem2 extends Logic
{
	public static void main(String args[]) 
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your number : ");
		int no=sobj.nextInt();
		int ret=Chkbit(no);
		
		if(ret==1)
		{
			System.out.print("\n 5th and 18th bit is on \n");
		}
		else
		{
			System.out.print("\n 5th and 18th bit is off \n");
		}
	}
}