/*

75. Accept N numbers from user and return frequency of even numbers. 
	
   	Input :   7 
  
    Elements : 85 66 3 80 93 88 90 
	
	Output : 1 (4 -3) 

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
		int j=0,k=0;
		for(int i=0;i<size;i++)
		{
			if(arr[i]%2==0)
			{
				j++;
			}
			else
			{
				k++;
			}
		}
		return j-k;
	}
}

class problem75 extends Logic
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
		System.out.print("\n"+" difference between Frequency of odd and even numbers = "+ret);
	}	
}	
