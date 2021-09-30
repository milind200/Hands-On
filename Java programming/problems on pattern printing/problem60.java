/*
60.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 4  iCol =  4  
	
	Output : 1 2 3 4    
					 2 3 4      
						3 4      
						   4
							
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : Java 14.0.2
*/

import java.lang.*;
import java.util.*;

class problem60
{
	static void Print(int row,int col)
	{
		for(int i=0;i<row;i++)
	{
		int no=1;
			for(int j=0;j<col;j++)
			{
				if(i<=j)
				{
					System.out.print(" "+no+" ");
				}
				else
				{
					System.out.print("   ");
				}
				no++;
			}
			System.out.println();
		}
	}
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter number of rows : ");
		int row=sobj.nextInt();
		System.out.print("Enter number of columns : ");
		int col=sobj.nextInt();
		Print(row,col);
	}
}	
