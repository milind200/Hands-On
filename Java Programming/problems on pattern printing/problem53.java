/*
53.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 5  iCol = 5  
	
	Output : $ * * * *   
				  * $ * * *   
				  * * $ * *   
				  * * * $ *   
				  * * * * $ 
				  
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : Java 14.0.2
*/

import java.lang.*;
import java.util.*;

class Logic
{
	static void Print(int row,int col)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i==j)
				{
					System.out.print(" $ ");
				}
				else
				{
					System.out.print(" * ");
				}
			}
			System.out.println();
		}
	}

}

class problem53
{
	
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter number of rows : ");
		int row=sobj.nextInt();
		System.out.print("Enter number of columns : ");
		int col=sobj.nextInt();
		Logic lobj=new Logic();
		lobj.Print(row,col);
	}
}	
