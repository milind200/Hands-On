/*
81. Accept N numbers from user and return the largest number. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 93 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : Java 14.0.2
*/
import java.lang.*;
import java.util.*;

class Logic
{
	public static int Output(int arr[])
	{
		int max=0;
		for(int i=0;i<arr.length;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		return max;
	}
}

//main class

class problem81 extends Logic
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
		int ret=Output(arr);
		System.out.println();
		System.out.println(" The maximum number among the given numbers is : "+ret );
		System.out.println();
	}
}