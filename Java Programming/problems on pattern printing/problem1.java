/*
1.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	
	Output :   M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s     
					M a r v e l l o u s     
					M a r v e l l o u s 
	
	Input : "Hello"
	
	Output : H e l l o
				  H e l l o
				  H e l l o
				  H e l l o
				  H e l l o
				 
	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : C programming
	
*/
import java.lang.*;
import java.util.*;

class Logic
{
	static void Output(String str)
	{
		int j=0,i=0;
		while(i!=str.length())
		{
			while(j!=str.length())
			{
				System.out.print(" "+str.charAt(j));
				j++;
			}
			j=0;
			i++;
			System.out.print("\n");
		}
	}
}

class problem1 extends Logic
{
	public static void main(String argc[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Output(str);
	}
}