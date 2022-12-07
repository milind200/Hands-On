/*

35. Accept number from user and display below pattern. 
	Input :  5  
	Output : 1 * 2 * 3 * 4 * 5 *   
	
	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language :Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem35
{
	
	static void Print(int no)
	{
		int i=0;
		while(i!=no)
		{
			System.out.print((i+1)+" * ");
			i++;
		}
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		Print(no);
	}	
}