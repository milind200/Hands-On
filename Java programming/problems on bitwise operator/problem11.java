/*

	11.Write a program which accept one number and position from user and check whether bit at that position 
	is on or off. If bit is one return TURE otherwise return FALSE. 
	
	Input :  10 2 
	Output :  TRUE 
	
	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : Java 4.0.2
	
*/
import java.lang.*;

class Logic 
{
	public static int ChkBit(int no,int pos)
	{
		int flag=0;
		flag=no&pos;
		if(flag==pos)
		{
			return 1;
		}
		else
		{
			return 0;
		}		
	}
}

class problem11 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int pos=Integer.parseInt(args[1]);
		int ret= ChkBit(no,pos);
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