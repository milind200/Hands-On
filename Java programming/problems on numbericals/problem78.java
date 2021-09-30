/*
78. Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 2 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : 0
	
	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int Output(int arr[],int size)
	{
		int j=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println();
		System.out.print(" Enter your number : ");
		int no=sobj.nextInt();
		System.out.println();
		for(int i=0;i<size;i++)
		{
			if(arr[i]==no)
			{
				j++;
			}
		}
		return j;
	}
}

class problem78 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("\n How many elements to enter : ");
		int size=sobj.nextInt();
		int arr[]=new int[size];
		for(int i=0;i<size;i++)
		{
			System.out.print("\n"+"Enter "+(i+1)+" element : ");
			arr[i]=sobj.nextInt();
			System.out.println();
		}
		int ret=Output(arr,size);
		System.out.print("\n"+" Frequency of no is : "+ret);
		System.out.println();
	}	
}	
