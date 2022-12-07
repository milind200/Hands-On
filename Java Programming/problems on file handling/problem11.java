/*
11. Write a program which accept oinformation of students from user and write that information into the file. 
		
	   Author : Milind Nalawade

	   Date : 02/09/2021

	Language : Java 14.0.2

*/
import java .io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.util.*;

class problem11
{
	public static void main(String srgv[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String arr=sobj.nextLine();
		System.out.print("\n Intput : ");
		String brr=sobj.nextLine();
		try
		{
			FileWriter fw=new FileWriter(arr,true);
			BufferedWriter bw=new BufferedWriter(fw);
			bw.write("\n"+brr);
			bw.close();
		}
		catch(Exception e)
		{
			System.out.print(e);
		}
	}
}