/*
7.Write a program which accept number from user and print even factors of that number. 
		
	Author: Milind Nalawade
	
	Date: 19/06/2021

	language: Java 14.0.2

*/
import java.lang.*;
import java.util.*;
class problem7
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter your number : ");
		int no=sobj.nextInt();
		int i=2 ,j=100;
		
		while(j!=0)
		{
			if(i%no==0)
			{
				System.out.print(i+" ");
			}
			i=i+2;
			j--;
		}
	}
}