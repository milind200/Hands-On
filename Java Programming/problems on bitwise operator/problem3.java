/*
3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.  

	input : 13528265
	output : The 7th & 15th & 21st , 28th bit is on
	
	input : 14598
	output : The 7th & 15th & 21st , 28th is off
	
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
		int mask=0x08104040;
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

class problem3 extends Logic
{
	public static void main(String args[]) 
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your number : ");
		int no=sobj.nextInt();
		int ret=Chkbit(no);
		
		if(ret==1)
		{
			System.out.print("\n 7th & 15th & 21st , 28th bit is on \n");
		}
		else
		{
			System.out.print("\n 7th & 15th & 21st , 28th bit is off \n");
		}
	}
}