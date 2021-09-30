/*
2. Write application which accept file name from user and create that file. 
	
	Input :  Demo.txt 
	
	Output :  File created successfully
	
	Author : Milind Nalawade

	Date : 27/08/2021

	Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;
import java.io.File;  
import java.io.IOException;  
class problem2
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter File name : ");
		String str=sobj.nextLine();
		boolean flag;
		File fd=new File(str);
		try
		{
			flag=fd.createNewFile();
			if(flag)
			{
				System.out.print("\n File created successfully !!! \n");
			}
			else
			{
				System.out.print("\n File already exists on that location !!!\n");
			}
			
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}