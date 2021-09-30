/*
16. Write a program which accept two numbers from user and display position of common ON bits 
	from that two numbers. 
	
	Input :  10 15  (1010  1111) 
	Output :  2 8 
	
	Author : Milind Nalawade
	
	Date : 04/08/2021
	
	Language : Java 14.0.2

*/
import java.lang.*;

class Logic
{
	static void ChkBit(int no1,int no2)
	{
		int pos=1;
		int no=no1&no2;
		int count=0;
		System.out.print("\n Output : ");
		while(no>0)
		{
			count=no&1; 
			if(count==1)
			{
				System.out.print(" "+pos);
			}
			pos*=2;
			no>>=1;
			count=0;
		}
	}

}

class problem16 extends Logic
{
	public static void main(String args[])
	{
		int no1=Integer.parseInt(args[0]);
		int no2=Integer.parseInt(args[1]);
		ChkBit(no1,no2);
		System.out.println();
	}
}