/*

26.Write a program which accept range from user and return addition of all even numbers in between that range.
    (Range should contains positive numbers only)

	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class problem26
{
	static int Range(int min,int max)
	{
		if(max<min)
		{
			System.out.println("Invalid range !!!\n");
			return 0;
		}
		int ans=0;
		while(min<=max)
		{
			if(min%2==0)
			{
				ans=ans+min;
			}
			min++;
		}
		return ans;
	}
	
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		
		System.out.println("Enter your range : ");
		int min=sobj.nextInt();
		int max=sobj.nextInt();
		int ret=Range(min,max);
		System.out.print("Even Addition of given range is : "+ret);
	}

}