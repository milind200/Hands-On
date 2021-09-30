/*
15.Write a program which accept one number from user and count number of ON (1) bits in it without 
	using % and / operator. 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Java 14.0.2

*/
import java.lang.*;

class Logic
{
	static int ChkBit(int no)
	{
		int count=0;
		while(no>0)
		{
			count+=no&1;
			no>>=1;
		}
		return count;
	}	
}

class problem15 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int ret=ChkBit(no);
		System.out.print("\n There are "+ret+" bits on "+"\n");
	}
}