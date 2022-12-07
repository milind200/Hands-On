/*

	12. Write a program which accept one number and position from user and off that bit. Return modified number. 
	
	Input :  10 2
	Output :  8 

	Author : Milind Nalawade
	
	Date : 03/08/2021
	
	Language : Java 4.0.2
	
*/
import java.lang.*;

class Logic 
{
	public static int ChkBit(int no,int pos)
	{
		int flag=0;
		flag=no^pos;
		return flag;		
	}
}

class problem12 extends Logic
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int pos=Integer.parseInt(args[1]);
		int ret= ChkBit(no,pos);
		System.out.print("\n Output : "+ret+"\n");
	}
}