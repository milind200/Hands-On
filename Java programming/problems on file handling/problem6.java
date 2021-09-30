/*
6. Write a program which accepts file name from user and count number of capital characters from that file. 
	
	Input : Demo.txt 
	
	Output : Number of capital characters are 23 

	Author : Milind Nalawade

	Date : 1/09/2021

	Language : java 14.0.2

	
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class problem6
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
					if(line.charAt(i)>='A' && line.charAt(i)<='Z')
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
		System.out.print("\n Number of capital letters are : "+cnt+"\n");
	}
}
