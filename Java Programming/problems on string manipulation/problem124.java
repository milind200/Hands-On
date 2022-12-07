/*
124. Write a program which accept string from user and reverse each word in place. 
		
		Input :   “Marvellous Multi OS” 
		Output :   “suollevraM itluM SO”

		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;

class Logic
{
	static void Output(String str)
	{
		int i=0;
		Stack <Character> s1=new Stack <>();
		System.out.print("\n Output : ");
		while(i!=str.length())
		{
			s1.push(str.charAt(i));
			
			if(str.charAt(i)==' '||i==str.length()-1)
			{		
				while(s1.empty()==false)
				{
					System.out.print(s1.pop());
				}
				System.out.print(" ");
			}
			i++;
		}
		System.out.print("\n");
	}	
}

class problem124 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Output(str);
	}
}