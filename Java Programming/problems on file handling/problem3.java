/*
3. Write application which accept file name from user and read all data from that file and display contents on screen. 
	
	Input :  Demo.txt 
	
	Output :  Display all data of file.

	Author : Milind Nalawade

	Date : 31/08/2021

	Language : java 14.0.2

	
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class problem3
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String str=sobj.nextLine();
		String line=null;
		try 
		{
			FileReader fd=new FileReader(str);
			BufferedReader bf=new BufferedReader(fd);
			
			while((line = bf.readLine())!=null)
			{
				System.out.println("\n"+line);
			}
			bf.close();
		}
		catch(IOException e)
		{
			System.out.print("\n Error in reading the file !!! \n");
		}
	}
}