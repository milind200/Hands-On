/*

33. Accept number from user and display below pattern. 
	  Input :  5  
	 Output : A B C D E 

	Author : Milind Nalawade
	
	Date: 29/06/2021
	
	language : java 14.0.2

*/

import java.lang.*;
import java.util.*;

class problem33
{
	static void Print(int no)
	{
		char ch='A';
		while(no!=0)
		{
			System.out.print(ch+" ");
			ch++;
			no--;
		}
	}	
	
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		Print(no);
	}
}