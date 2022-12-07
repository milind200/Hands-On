	/*

24. Write a program which accept range from user and display all even numbers in between that range

	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class problem24
{
	static void Range(int min,int max)
	{
		if(max<min)
		{
			System.out.println("Invalid range !!!\n");
			return;
		}
		
		while(min<=max)
		{
			if(min%2==0)
			{
				System.out.print(min+" ");
			}
			min++;
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