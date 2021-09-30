/*
65. Accept number of rows and number of columns from user and display below pattern. 
	  
	  Input :  iRow = 5  iCol = 5  
	  
	   Output : 1 2 3 4 5
					1 2       5
					1    3    5
					1       4 5
					1 2 3 4 5	
	  
	  Author : 	Milind Nalawade

	  Date	: 05/07/2021
	  
	  Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	static void Pattern(int row,int col)
	{
		for(int i=0;i<row;i++)
		{
			int no=1;
			for(int j=0;j<col;j++)
			{
				if(i==j||i==row-1||j==0||i==0||j==col-1)
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
}

class problem65
{
	public static void  main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("Enter number of rows : ");
		int row=sobj.nextInt();
		System.out.print("Enter number of columns : ");
		int col=sobj.nextInt();
		Logic lobj=new Logic();
		lobj.Pattern(row,col);
	}
}