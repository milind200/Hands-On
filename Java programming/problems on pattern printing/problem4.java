/*
4.Write a program which accept string from user and print below pattern. 
	
	Input :   "Marvellous"
	
	Output :   M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S     
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S 
	

	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class Logic
{
	static void Output(String str)
	{
		int j=0,i=0;
		System.out.print("\n Output : \n\n");
		while(i!=str.length())
		{
			System.out.print("	");
			while(j!=str.length())
			{
				System.out.print(Character.toUpperCase(str.charAt(j))+" ");
				j++;
			}
			j=0;
			i++;
			System.out.print("\n");
		}
	}
}

class problem4 extends Logic
{
	public static void main(String argc[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Output(str);
	}
}