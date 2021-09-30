/*
48 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 5  iCol = 5  
		Output : a b c d e   
					  1 2 3 4 5   
					  a b c d e   
					  1 2 3 4 5   
					  a b c d e 
		
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : Java 4.0.2
*/

import java.lang.*;
import java.util.*;

class problem48
{
	static void Print(int row,int col)
	{
			char no1='a';
			int no2=1;
	for(int i=0;i<row;i++)
	{	
		no1='a';
		no2=1;
		for(int j=0;j<col;j++)
		{
			if (i%2==0)
			{
				System.out.print(" "+no1+" ");
				no1++;
			}
			else
			{
				System.out.print(" "+no2+" ");
				no2=no2+1;
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