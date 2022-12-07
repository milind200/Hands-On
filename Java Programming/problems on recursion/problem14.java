/*
14. Write a recursive program which accept number from user and return its reverse number.  
	
	    Input :  523 
	
	    Output :  325
    	
		Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;

class Logic
{
	static int ino=0,mod=0;
	static void Output(int no)
	{
		if(no==0)
		{
			return ;
		}
		else
		{
			mod=no%10;
			ino=ino*10+mod;
			no=no/10;
			Output(no);
		}
	}
}

class problem14 extends Logic
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Input : ");
		int no=sobj.nextInt();
		Output(no);
		System.out.print("\n Output : "+ino+"\n");
	}
}