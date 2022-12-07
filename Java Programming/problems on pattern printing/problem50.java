/*
50 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 4  iCol =  4  
		
		Output : 1 2 3 4
					  2 3 4 5    
					  3 4 5 6    
					  4 5 6 7 		
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : Java 4.0.2
*/

import java.lang.*;
import java.util.*;

class problem50
{
	static void Print(int row,int col)
	{
	int ino=0;
	for(int i=0;i<row;i++)
	{
		ino=i+1;
		for(int j=0;j<col;j++)
		{
			System.out.print(" "+ino);
			ino++;
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