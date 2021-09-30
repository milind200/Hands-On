/*

27.Write a program which accept accept range from user and display all numbers in between that range in reverse order.

	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class problem27
{
	static void Range(int min,int max)
	{
		if(max<min)
		{
			System.out.println("Invalid range !!!\n");
			return;
		}
		System.out.println("Your entered range is :");
		while(max>=min)
		{
			
			System.out.print(max+" ");
			max--;
		}
	}
	
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		
		System.out.println("Enter your range : ");
		int min=sobj.nextInt();
		int max=sobj.nextInt();
		Range(min,max);
	}

}