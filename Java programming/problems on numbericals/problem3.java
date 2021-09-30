/*
3. Program to print 5 to 1 numbers on screen.  
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : java 14.0.2
*/

// imports 

import java.util.*;

class problem3
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		
		while(no!=0)
		{
			System.out.print(no+" ");
			no--;
		}
	}	
}

