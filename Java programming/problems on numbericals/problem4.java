/*
4. Accept one number and check whether is is divisible by 5 or not
	
	Author: Milind Nalawade
	
	Date:18/06/2021
	
	language : java 14.0.2
*/

import java.util.*;
import java.lang.*;

class problem4
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter divident : ");
		int no1=sobj.nextInt();
		System.out.print("Enter divisor : ");
		int no2=sobj.nextInt();
		
		if(no1/no2==0)
		{
			System.out.println(no1+" is divisible by "+no2);
		}
		else
		{
			System.out.println(no1+" is not divisible by "+no2);
		}
	}
}


