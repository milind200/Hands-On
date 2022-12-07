/*

115. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function). 
	
	Input :   "Marvellous Infosystems"    "Logic Building" 
	Output :  "Marvellous Infosystems Logic Building” 	
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
		
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java .util.*;

class Logic
{
	public static String CopyString(String str1,String str2)
	{
		return str1+str2;
	}
}
class problem115 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter your string1 : ");
		String str1=sobj.nextLine();
		System.out.print("\n Enter your string2 : ");
		String str2=sobj.nextLine();
		String Dest=CopyString(str1,str2);
		System.out.print("\n Output : "+Dest);
		System.out.println();
	}	
}