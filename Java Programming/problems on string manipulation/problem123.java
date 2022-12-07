/*
123. Write a program which accept string from user and return length of largest word. 
	
	Input :   "Marvellous Multi OS Infosystems" 
	Output :   10 
	
			Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;
import java.lang.Character.*;

class Logic
{
	static int ChkWord(String str)
{
	int max=0;
	int cnt=0;
	for(int i=0;i!=str.length();i++)
	{
		if(Character.isAlphabetic(str.charAt(i)))
		{
			cnt++;
		}	
		if(max<cnt)
		{
			max=cnt;
		}
		if(str.charAt(i)==' ')
		{
			cnt=0;
		}
	}
	return max;
}

}		

class problem123 extends Logic
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner (System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		int ret=ChkWord(str);
		System.out.print("\n Output : "+ret+"\n");
	}
}