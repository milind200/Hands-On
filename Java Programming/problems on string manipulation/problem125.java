/*
125. Write a program which accept string from user and copy the contents into another string by 
		removing extra white spaces. 
		
		Input :   “Marvellous    multi     OS” 
		Output :   “Marvellous multi OS” 
		
		Author : Milind Nalawade
	
		Date : 06/08/2021
	
		Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;

class Logic
{
	static void Output(String str)
	{
		StringBuffer s=new StringBuffer();
		for(int i=0;i<str.length();i++)
		{			
			if(str.charAt(i)==' ')
			{
				while(str.charAt(i)==' ')
				{
					i++;
				}
				s.append(' ');
			}
			s.append(str.charAt(i));
		}
		System.out.print("\n Output : "+s+"\n");
	}
}

class problem125 extends Logic
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		Output(str);
	}
}