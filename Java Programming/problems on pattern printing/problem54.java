/*
51.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 6  iCol = 5  
	
	Output :    * * * * *  
					*@ @ @*   
					*@ @ @*   
					*@ @ @*   
					*@ @ @*   
				     * * * * *
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : Java 14.0.2
*/

import java.lang.*;
import java.util.*;

class problem54
{
	static void Print(int row,int col)
	{
		for(int i=0;i<row;i++)
	{
			for(int j=0;j<col;j++)
			{
				if((i==0)||(j==0)||(j==col-1)||(i==row-1))
				{
					System.out.print(" * ");
				}
				else
				{
					System.out.print(" @ ");
				}
		
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
