/*

9. Write a program which accept one number from user and toggle 7th and 10th bit of that number.
	Return modified number. 
	
	Input :  137 
	Output : 713 
	
	Author : Milind Nalawade
	
	Date : 02/08/2021
	
	Language : Java 14.0.2 

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int ChkBits(int ino)
	{
		int pos=0x00000240;
		int flag=pos|ino;
		return flag;
	}
}

class problem9 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.print("\n Enter your number : ");
		int no=sobj.nextInt();
		int ret=ChkBits(no);
		System.out.print("\n Output : "+ret+"\n");
	}
}