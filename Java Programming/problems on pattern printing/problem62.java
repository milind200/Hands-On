/*
61. Accept number of rows and number of columns from user and display below pattern. 
	  
	  Input :  iRow = 4  iCol = 4  
	  
	  Output : * * * #   
					* * # *    
					* # * *    
					# * * * 
	  
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
			for(int j=col-1;j>=0;j--)
			{
				if(i>j)
				{
					System.out.print(" @ ");
				}
				else if(i==j)
				{
					System.out.print(" # ");
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

class problem62
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