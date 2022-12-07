/*
95. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format. 
	
	Input :   A 
	Output :  Decimal   65 
	Octal   0101    Hexadecimal  0X41 

	
	Author : Milind Nalawade
	
	Date: 13/07/2021
	
	language :Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static void Display(char ch)
	{
		int no=(int)ch;
		System.out.print("\n Decimal "+(int)ch+"\n");
		System.out.print("\n Octal "+ Integer.toOctalString(no)+"\n");
		System.out.print("\n Hexadesimal "+Integer.toHexString(no)+"\n");
		
	}
}

class problem95 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter your character : ");
		char ch=sobj.next().charAt(0);
		Display(ch);
	}
} 
