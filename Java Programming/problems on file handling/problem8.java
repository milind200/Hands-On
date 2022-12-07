/*
8. Write a program which accepts file name from user and count number of white spaces from that file. 
	
	Input : Demo.txt 
	
	Output : Number of white spaces are 13 

	Author : Milind Nalawade

	Date : 01/09/2021

	Language : java 14.0.2

	
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class problem8
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String str=sobj.nextLine();
		String line=null;
		int cnt=0;
		try 
		{
			FileReader fd=new FileReader(str);
			BufferedReader bf=new BufferedReader(fd);
			
			while((line = bf.readLine())!=null)
			{
				for(int i=0;i<=(line.length()-1);i++)
				{
					if(line.charAt(i)==' ')
					{
						cnt++;
					}
				}
			}
			bf.close();
		}
		catch(IOException e)
		{
			System.out.print("\n Error in reading the file !!! \n");
		}
		System.out.print("\n Number of spaces are : "+cnt+"\n");
	}
}
