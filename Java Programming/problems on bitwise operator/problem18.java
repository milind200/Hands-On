/*
18. Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF. 
	
	Input :  10 3 7 
	Output :  TRUE 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Java 14.0.2
		
*/

import java.lang.*;

class Logic
{
	static int ChkBit(int no,int first,int last)
	{
		int i=no&(1<<(first));
		int j=no&(1<<(last));
		if(i>0 || j>0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

}

class problem18 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int ino1=Integer.parseInt(args[1]);
		int ino2=Integer.parseInt(args[2]);
		int ret=ChkBit(no,ino1,ino2);
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