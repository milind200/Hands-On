/*
85. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  	
	Output : 17 17 3 13 17 21

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
		int size=arr.length;
		int brr[]=new int [size];
		int no=0,temp=0,sum=0;
		for(int i=0;i<arr.length;i++)
		{
			no=arr[i];
			while(no!=0)
			{
				temp=no%10;
				sum+=temp;
				no=no/10	;			
			}
			brr[i]=sum;
			sum=0;
		}
	
		for(int j=0;j<size;j++)
		{
			System.out.print(" "+brr[j]);
		}
	}
}

class problem85 extends Logic
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