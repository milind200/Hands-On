/*
46. Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 4  iCol = 4  
		Output : 1 2 3 4   
					  5 6 7 8
					  9 1 2 3
					  4 5 6 7 
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : Java 14.0.2
*/

import java.lang.*;
import java.util.*;

class problem46
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
				if(no==10)
				{
					no=1;
				}
			}
			System.out.println();
		}
		
	}
	public static void main(String srgs[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("Enter number of rows : ");
		int row=sobj.nextInt();
		System.out.print("Enter number of column : ");
		int col=sobj.nextInt();
		Print(row,col);
		
	}
}