/*
1. Write application which accept file name from user and open that file in read mode. 
	
	Input :  Demo.txt 
	
	Output :  File opened successfully.

	Author : Milind Nalawade

	Date : 27/08/2021

	Language : java 14.0.2

*/
import java.awt.Desktop;
import java.io.*;
import java.lang.*;
import java.util.*;

class problem1
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String str=sobj.nextLine();

	try
		{	
			File file =new File(str);
			if(!Desktop.isDesktopSupported())
			{
				System.out.print("\n not supported \n");
				return;
			}	
			Desktop desktop=Desktop.getDesktop();
			if(file.exists())
			{
				desktop.open(file);
				System.out.print("\n File opened successfully !!!\n");	
			}
			else
			{
				System.out.print("\n Unable to open file !!!\n");
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}
