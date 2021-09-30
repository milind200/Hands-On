/*

111.Write a program which accept string from user and copy the contents of that string into another string.
 
	Input :   "Marvellous Multi OS"
	Output :   "Marvellous Multi OS"    in another string
	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java .util.*;

class Logic
{
	public static void CopyString(String str)
	{
		String dest= String.copyValueOf(str.toCharArray());
		System.out.print("\n Output : "+dest);
		System.out.println();
	}
}
class problem111 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		String str=" Hello World !! ";
		CopyString(str);
	}	
}