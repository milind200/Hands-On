/*
83. Accept N numbers from user and return the difference between largest and smallest number. 

	Input :  N :   6 
	Elements : 85 66 3 66 93 88  
	Output : 90 (93 -3) 
	
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
		int min=arr[1];
		for(int i=0;i<arr.length;i++)
		{
			if(min==max)
			{
				return 0;
			}
			if(max<arr[i])
			{
				max=arr[i];
			}
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		return max-min;
	}
}

//main class

class problem83 extends Logic
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
		System.out.println(" The difference between maximum and minimum numbers is : "+ret );
		System.out.println();
	}
}