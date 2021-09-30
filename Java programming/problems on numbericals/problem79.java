/*

79. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 1 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : -1  
	
	Author : Milind Nalawade
	
	Date : 10/07/2021
	
	Language : Java 14.0.2

*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static void Output(int arr[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n"+" Enter your number : " );
		int no=sobj.nextInt();
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==no)
			{
				System.out.print(" Number found at index "+i);
				System.out.println();
				return;
			}
		}
		System.out.println();
		System.out.print(" Number not found in array !!!");
		System.out.println();
	}
}
class problem79 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n Enter size of array : ");
		int size=sobj.nextInt();
		int arr[]=new int[size];
		for(int i=0;i<size;i++)
		{
			System.out.print(" \n "+" Enter the number at index "+i+" : ");
			arr[i]=sobj.nextInt();
		}
		Output(arr);
	}
}