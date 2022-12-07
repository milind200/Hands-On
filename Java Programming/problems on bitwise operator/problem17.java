/*
17. Write a program which accept one number from user and check whether 9th or 12th bit is on or off. 
	
	Input :  257  
	Output :  TRUE
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Java 14.0.2
		
*/

import java.lang.*;

class Logic
{
	static int ChkBit(int no)
	{
		int t1,t2,t3;
		t1=0x00000100;
		t2=0x00000800;
		t3=0x00000900;
		int ino=no&t3;
		if(ino==t1||ino==t2||ino==t3)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

class problem17 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int ret=ChkBit(no);
		if(ret==1)
		{
			System.out.print("\n TRUE \n");
		}
		else
		{
			System.out.print("\n FALSE \n");
		}
	}
}