/*
4. Write application which accept file name from user and display size of file. 
	
	Input :  Demo.txt 
	
	Output :  File size is 56 bytes 
	
	Author : Milind Nalawade

	Date : 31/08/2021

	Language :Java 14.0.2

*/

import java.lang.*;
import java.util.*;
import java.io.File;
class problem4
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String str=sobj.nextLine();
		File fd=new File(str);
		if(fd==null)
		{
			System.out.print("\n Unable to open file "+str+"\n");
		}
		long no=fd.length();
		System.out.print("\n Size of file "+str+" is "+no+" bytes \n");
	}
}