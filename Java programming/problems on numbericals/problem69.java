/*

69. Accept N numbers from user and return difference between 
	summation of even elements and summation of odd elements. 
	
	Input :  N :   6 
	Elements : 85 66 3 80 93 88  
	Output : 53 (234 - 181) 
	
	Author : Milind Nalawade

	Date : 07/07/2021

	Language : Java 14.0.2

*/
import java.lang.*;
import java.util.*;

class Logic
{
	public static int Difference(int arr[])
	{
		int even=0,odd=0;
		for(int j=0;j<arr.length;j++)
		{
			if(arr[j]%2==0)
			{
				even+=arr[j];
			}
			else
			{
				odd+=arr[j];
			}
		}
		return (even-odd);
	}
}

class problem69 extends Logic
{
	public static void main(String args[])
	{
		int no=0;
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter how many number of elements : ");
		int size=sobj.nextInt();
		int arr[]=new int[size];
		System.out.println();
		System.out.println(" Enter "+size+" elements : ");
		System.out.println();
		int i=0;
		while(i<size)
		{
			System.out.print("Enter "+i+" element : ");
			arr[i]=sobj.nextInt();
			System.out.println();
			i++;
		}
		int ret=Difference(arr);
		System.out.println("\n Output : "+ret);
	}
}