/*

71. Accept N numbers from user and display all such elements which are even and divisible by 5. 
	
	Input :  N :   6 
	Elements : 85 66 3 80 93 88  
	Output : 85 80   
	
	Author : Milind Nalawade
	
	Date : 07/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*	;


class Logic
{
		public static void Output(int arr[])
		{
			System.out.println("\n numbers divisible by 5 are : \n");
			for(int j=0;j<arr.length;j++)
			{
				if(arr[j]%5==0 && arr[j]%2==0)
				{	
					System.out.println(arr[j]);
				}	
			}
		}
		
}

class problem71 extends Logic
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		System.out.print("\n how many number to accept : ");
		int size=sobj.nextInt();
		int arr[]=new int[size];
		System.out.println();
		for(int i=0;i<size;i++)
		{
			System.out.print(" Enter "+(i+1)+" element : " );
			arr[i]=sobj.nextInt();
			System.out.println();
		}
		Output(arr);
	}
}