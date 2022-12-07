/*
7. Write a program which accepts file name from user and count number of small characters from that file. 
	
	Input : Demo.txt 
	
	Output : Number of small characters are 21 

	Author : Milind Nalawade

	Date : 31/08/2021

	Language : java 14.0.2

	
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class problem7
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
					if(line.charAt(i)>='a' && line.charAt(i)<='z')
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
