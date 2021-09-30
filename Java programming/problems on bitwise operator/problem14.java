/*
	14. Write a program which accept one number from user and toggle contents of first and last nibble of the number.
	Return modified number. (Nibble is a group of four bits) 

	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : Java 4.0.2
	
*/
import java.lang.*;

class Logic 
{
	public static int ChkBit(int no)
	{
		int flag=0xf000000f;
		int ino=no|flag;
		return ino;		
	}
}

class problem14 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int ret= ChkBit(no);
		System.out.print("\n Output : "+ret+"\n");
	}
}