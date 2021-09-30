/*
90.Accept division of student from user and depends on the division display exam timing.
	There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at
	9.20 AM and D at 10.30 AM. (Application should be case insensitive) 

	Input :  C 
	Output :  Your exam at 9.20 AM 
	Input :  d 
	Output :  Your exam at 10.30 AM
	
	Author : Milind Nalawade

	Date : 12/07/2021

	Language : java 14.0.2

*/

import java.lang.*;
import java.util.Scanner;

class Logic
{
	public static void Chkchar(char ch)
	{
		if (ch=='a' || ch=='A')
		{
			System.out.print("\n Your exam time is 7 AM \n");
		}
		else if (ch=='b' || ch=='B')
		{
			System.out.print("\n Your exam time is 8.30 AM \n");
		}
		else if (ch=='c' || ch=='C')
		{
			System.out.print("\n Your exam time is 9.20 AM \n");
		}
		else if (ch=='d' || ch=='D')
		{
			System.out.print("\n Your exam time is 10.30 AM \n");
		}
		else
		{
			System.out.print("\n Invalid Input !!!\n");
		}
	}
}


class problem90 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter your Division : ");
		char ch=sobj.next().charAt(0);
		Chkchar(ch);
	}
}