/*
3.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	Output :  
				M     
				M a    
				M a r     
				M a r v    
				M a r v e     
				M a r v e l    
				M a r v e l l    
				M a r v e l l o     
				M a r v e l l o u      
				M a r v e l l o u s 

	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class Logic
{
	static void Output(String arr)
	{
		int no=0;
		System.out.print("\n Output :\n\n");
		for(int i=0;i<arr.length();i++)
		{
			System.out.print("  ");
			for(int j=0;j<=no;j++)
			{
				System.out.print(arr.charAt(j));
			}
			no++;
			System.out.print("\n");
		}
	}

}

class problem3 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Output(str);
	}
}