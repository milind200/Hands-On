/*
47 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 4  iCol = 5  
		Output : 2 4 6 8 10   
					  1 3 5 7 9   
					  2 4 6 8 10   
				      1 3 5 7 9 
		
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : Java 4.0.2
*/

import java.lang.*;
import java.util.*;

class problem47
{
	static void Print(int row,int col)
	{
			int no1=2,no2=1;
	for(int i=0;i<row;i++)
	{	
		no1=2;
		no2=1;
		for(int j=0;j<col;j++)
		{
			if (i%2==0)
			{
				System.out.print(" "+no1+" ");
				no1=no1+2;
			}
			else
			{
				System.out.print(" "+no2+" ");
				no2=no2+2;
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