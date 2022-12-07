/*

67. Design application for school management system.  
	As school is primary there are 4 standards from 1 to 4.
	School fees of each standard is different.  For first standard 
	fees are 8900, for second standard 12790, for third standard 
	21000 and for fourth standard fees are 23450.  We have to 
	accept standard from user and display the corresponding fees. 
	
	Input : 2   Output : 12790 
	Input : 4   Output : 23450 
	Input : 6   Output : Wrong input 

	Author : Milind Nalawade
	
	Date  : 05/07/2021
	
	Language : Java 14.0.2
	
*/

import java.lang.*;
import java.util.*;

class Logic
{
	static int Standard(int std)
	{
		int ans =0;
		switch(std)
		{
			case 1 : return 8900;
			
			case 2 : return 12790;
			
			case 3 : return 21000;
			
			case 4 : return 23450;
			
			default : return 1;
			
		}
	}
}


class problem67
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print(" Enter your standard : ");
		int std=sobj.nextInt();
		Logic lobj=new Logic();
		int ret=lobj.Standard(std);
		if(ret!=1)
		{
			System.out.print("\n Total fees of the student is : "+ret+"\n");
		}
		else
		{
			System.out.print(" \n Invalid input \n");
		}
	}
}