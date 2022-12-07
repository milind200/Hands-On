/*
84. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  
	Output : 665 953 858

	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : Java 14.0.2
*/
import java.lang.*;
import java.util.*;

class Logic
{
	public static void Output(int arr[])
	{
		System.out.println(" Three digit numbers are : ");
		for(int i=0;i<arr.length;i++)
		{
			if(99<arr[i]&&999>arr[i])
			{
				System.out.print(arr[i]+" ");
			}
		}
	}
}

//main class

class problem84 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print(" How many elements to take as input : ");
		int size=sobj.nextInt();
		int arr[]=new int[size];
		System.out.println();
		System.out.print("Enter "+size+" elements :-");
		
		for(int i=0;i<size;i++)
		{
			System.out.println();
			System.out.print(" Enter element number "+i+" : ");
			arr[i]=sobj.nextInt();
		}
		Output(arr);	
	}
}