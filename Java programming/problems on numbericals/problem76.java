/*

76. Accept N numbers from user and return frequency of even numbers. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 3

	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class Logic
{
	public static int ChkNo(int arr[],int size)
	{	
		int flag=0;
		for(int i=0;i<size;i++)
		{
			if(arr[i]==11)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			return 1;
		}
		return -1;
	}

}

class problem76 extends Logic
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
		int ret=ChkNo(arr,size);
		if (ret==1)
		{
			System.out.print("\n 11 is present \n");
		}
		else
		{
			System.out.print("\n 11 is not present \n");
		}
	}	
}