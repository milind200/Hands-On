/*
39. Accept number of rows and number of columns from user and display below pattern. 
   Input :  iRow = 3  iCol = 4  
  Output : 
				* # * #    
				* # * #    
				* # * # 
	
	Author : Milind Nalawade
	
	Date : 01/07/2021

	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class problem39
{
	static void Print(int row,int col)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(j%2==0)
				{	
					System.out.print(" *");
				}
				else
				{
					System.out.print(" #");
				}
			}
			System.out.println();
		}
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter row : ");
		int row=sobj.nextInt();
		System.out.print("Enter column : ");
		int col=sobj.nextInt();
		Print(row,col);
	}
}