/*

31 .Write a program to find odd factorial of given number.  

	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem31
{
	static int Multiply(int no)
	{
		int ans=1;
		while(no>=1)
		{
			if(no%2!=0)
			{	
				ans*=no;
			}
			no--;
		}
		return ans;
	}

	public static void main(String args[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.print("Enter your number : ");
		int no=sobj.nextInt();
		if(no<0)
		{
			no*=-1;
		}
		int ret=Multiply(no);
		System.out.print("Multiplication is = "+ret);
	}
}