/*
5. Write application which accept file name from user and one string from user. Write that string at the end of file. 
	
	Enter file name :  Demo.txt 

	Input:	Hello World 
	
	Output :  Write Hello World at the end of Demo.txt file
		
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : Java 14.0.2

*/
import java .io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.util.*;

class problem5
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
			bw.write(" ");
			bw.write(brr);
			bw.close();
		}
		catch(Exception e)
		{
			System.out.print(e);
		}
	}
}