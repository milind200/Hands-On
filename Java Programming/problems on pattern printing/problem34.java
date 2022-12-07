/*

34. Accept number from user and display below pattern. 
	Input :  5  
	Output : 5 # 4 # 3 # 2 # 1 #

	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language :Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem34
{
	
	static void Print(int no)
	{
		while(no!=0)
		{
			System.out.print(no+" # ");
			no--;
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