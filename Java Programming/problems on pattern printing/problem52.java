/*

52.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 4  iCol = 4  
	
	Output : * * * *   
				  * * * #   
				  * * # #   
				  * # # #    
				  
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language :Java 14.0.2

*/



import java.lang.*;
import java.util.*;

class problem52
{
	static void Print(int row,int col)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=col;j>0;j--)
			{
				if(i<j)
				{
					System.out.print(" * ");
				}
				else
				{
					System.out.print(" # ");
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
