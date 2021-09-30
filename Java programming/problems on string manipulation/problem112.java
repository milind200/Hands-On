/*

112. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function) 
	
	Input :   "Marvellous Multi OS"    10 
	Output :   " Marvellous "
	Note : If third parameter is greater than the size of source string then copy whole string into destination. 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java .util.*;

class Logic
{
	public static String CopyString(String str,int no)
	{
		return str.substring(0,no);
	}
}
class problem112 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string : ");
		String str=sobj.nextLine();
		System.out.print("\n Enter number : ");
		int no=sobj.nextInt();
		String dest=CopyString(str,no);
		System.out.print("\n Output : "+dest);
		System.out.println();
	}	
}