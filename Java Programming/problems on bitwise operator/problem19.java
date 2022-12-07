/*
19. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range. 
	
	Input : 897  9 13 
	Toggle all bits from position 9 to 13 of input number ie 7286.	
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Java 14.0.2
		
*/

import java.lang.*;

class Logic
{
	static void ChkBit(int no,int first,int last)
	{
		int ino=no^((1<<last)-first);
		System.out.print(" "+ino);
	}


}

class problem19 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int ino1=Integer.parseInt(args[1]);
		int ino2=Integer.parseInt(args[2]);
		ChkBit(no,ino1,ino2);
	}
}