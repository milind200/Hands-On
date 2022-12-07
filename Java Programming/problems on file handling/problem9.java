/*
9. Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file. 
	
	Input : Demo.txt  ‘M’ 
	
	Output : Frequency of M is 7 

	Author : Milind Nalawade

	Date : 01/09/2021

	Language : java 14.0.2

	
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class problem9
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String str=sobj.nextLine();
		System.out.print("\n Enter your letter : ");
		char ch=sobj.next().charAt(0);
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
					if(line.charAt(i)==ch)
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
		System.out.print("\n Frequency of "+ch+" is : "+cnt+"\n");
	}
}
