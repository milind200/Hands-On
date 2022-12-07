/*
9.Accept single digit number from user and print it into word. 
	
	Author:Milind Nalawade
	
	Date:24/06/2021
	
	language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class problem9
{
	static void Number(int value)
	{
		switch(value)
	{
		case 1:System.out.println("one");
					break;
		case 2:System.out.println("two");
					break;
		case 3:System.out.println("three");
					break;
		case 4:System.out.println("four");
					break;
		case 5:System.out.println("five");
					break;
		case 6:System.out.println("six");
					break;
		case 7:System.out.println("seven");
					break;
		case 8:System.out.println("eight");
					break;
		case 9:System.out.println("nine");
					break;
	}
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		int i=0;
		System.out.print("Enter your number : ");
		i=sobj.nextInt();
		if(i<0)
	{
		i=i*-1;
	}
		Number(i);
	}	
}

