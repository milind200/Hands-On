/*
5. Accept one number from user and print that number of * on screen.  

	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : java 14.0.2
*/

import java.util.*;
import java.lang.*;

class problem5
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number : ");
		int no1=sobj.nextInt();
		
		while(no1!=0)
	{
		System.out.print("* ");
		no1--;
	}
	}
}


