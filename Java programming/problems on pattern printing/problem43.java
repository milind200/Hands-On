/*
43.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 3  iCol = 4  
	Output :  A A A A A   
				  B B B B B   
				  C C C C C 
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem43	
{
	static void Print(int row,int col)
	{
			char ch='A';
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			System.out.print(ch+" ");
		}
		ch++;
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