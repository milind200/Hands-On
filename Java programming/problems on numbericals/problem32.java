/*

32. Write a program which returns difference between Even factorial and odd factorial of given number

	Author : Milind Nalawade
	
	Date : 28/06/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem32
{
static int Multiply(int no)
{
	int odd=1,even=1;
	while(no>=1)
	{
		if(no%2!=0)
		{	
			odd*=no;
		}
		else
		{
			even*=no;
		}
		no--;
	}
	return even-odd;
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
		System.out.print("Difference between odd and even factor is = "+ret);
	}
}