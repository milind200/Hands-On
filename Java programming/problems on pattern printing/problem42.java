/*
41.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 4  iCol = 4  
	Output : A B C D   
				  a b c d  
			  	  A B C D    
				  a b c d 
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem42	
{
	static void Print(int row,int col)
	{
			char ch='A';
			char ab='a';
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i%2==0)
			{	
				System.out.print(ch+" ");
				ch++;
			}
			else
			{
				System.out.print(ab+" ");
				ab++;
			}
		}
		ch='A';
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