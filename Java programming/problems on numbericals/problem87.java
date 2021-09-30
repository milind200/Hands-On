/*
87. Accept Character from user and check whether it is capital or not (A-Z). 
	
	Input :  F 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 

	Author : Milind Nalawade

	Date : 12/07/2021

	Language : java 14.0.2

*/

import java.lang.*;
import java.util.Scanner;

class Logic
{
	public static int Chkchar(char ch)
	{
		int flag=0;
		if (65<=ch && ch<=90)
		{
			flag=1;	
		}
		return flag;
	}
}


class problem87 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		int ret=Chkchar(ch);
		if(ret==1)
		{
			System.out.println("\nTRUE \n");
		}
		else
		{
			System.out.println("\n FALSE \n");
		}
	}
}