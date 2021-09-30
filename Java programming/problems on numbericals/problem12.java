/*
	12. Write a program which accept number from user and display its table in reverse order
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class problem12
{

static void Tables(int no)
{
	int j=10;
	int ans=1;
	while(j>0)
	{
		ans=no*j;
		System.out.print(ans+" ");
		ans=1;
		j--;
	}		
}

  public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter your number : ");
		int ino=sobj.nextInt();
		Tables(ino);
	}
}

