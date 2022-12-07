/*
45.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 3  iCol = 4  
	Output :1 2 3 4   
				5 6  7 8   
				9 10 11 12
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem45	
{
	static void Print(int row,int col)
	{
		int no=1;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print(no+" ");
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