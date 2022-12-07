/*
93. Accept character from user. If it is capital then display all the characters from 
	the input characters till Z. If input character is small then print all the characters 
	in reverse order till a. In other cases return directly. 

	Input :  Q 
	Output : Q R S T U V W X Y Z 
	Input :  m 
	Output : m l k j i h g f e d c b a 
	Input :  8 
	Output :  
	
	Author : Milind Nalawade
	
	Date: 13/07/2021
	
	language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;

class Logic
{
	public static void Output(char ch)
	{
		System.out.print("\n Output : ");
		while(ch>=65&&ch<=90||ch>=97&&ch!=122)
		{
			System.out.print(" "+ch+" ");
			ch++;
		}
		System.out.print("\n");
	}
}

class problem93 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		Output(ch);
	}
}