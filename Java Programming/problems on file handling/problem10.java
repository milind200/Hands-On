/*
10. Write a program which accepts file name and one count from user and read that number 
	  of characters from starting position. 
	
	Input : Demo.txt  12 
	
	Output : Display first 12 characters from Demo.txt 

	Author : Milind Nalawade

	Date : 01/09/2021

	Language : java 14.0.2

	
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class problem10
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String str=sobj.nextLine();
		System.out.print("\n Enter your number : ");
		int no=sobj.nextInt();
		String line="";
		int ret=0;
		try 
		{
			FileReader fd=new FileReader(str);
			
			for(int i=0;i<no;i++)
			{
				ret=fd.read();
				line+=(char)ret;
			}
			fd.close();
		}
		catch(IOException e)
		{
			System.out.print("\n Error in reading the file !!! \n");
		}
		System.out.print("\n Output : "+line+"\n");
	}
}
