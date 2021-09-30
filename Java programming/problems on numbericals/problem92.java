/*

92. Accept character from user. If character is small display its corresponding capital 
	character, and if it small then display its corresponding capital. In other cases display as it is. 

	Input :  Q 
	Output : q 
	Input :  m 
	Output : M 
	Input :  4 
	Output : 4   Input :  % 
	Output : % 
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Java 14.0.2 
	
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public char ch1;
	Logic(char ch)
	{
		this.ch1=ch;
	}
	void Display()
	{
		
		if(ch1>=64  && ch1<=90)
		{
			System.out.print("\n Output : "+Character.toLowerCase(ch1)+"\n");
			return;
		}
		else if(ch1>=97  && ch1<=122)
		{
			System.out.print("\n Output : "+Character.toUpperCase(ch1)+"\n");
			return;
		}
		else
		{
			System.out.print("\n Output : "+ch1+"\n");
		}	
	}
}

class problem92
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		Logic obj=new Logic(ch);
		obj.Display();
	}
}