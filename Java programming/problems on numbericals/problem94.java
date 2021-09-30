/*
94. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
	
	Input :  % 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 
	
	Author : Milind Nalawade
	
	Date: 13/07/2021
	
	language : C programming

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int Display(char ch)
	{
		int flag=0;
		if(ch==33||ch==35||ch==36||ch==37||ch==38||ch==42||ch==94||ch==64)
		{
			flag=1;
		}
		return flag;
	}
}

class problem94 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		int ret=Display(ch);
		if(ret == 1)
		{
			System.out.print("\n TRUE \n");
		}
		else
		{
			System.out.print("\n FALSE \n");
		}
	}	
}