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
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
int Standard(int std)
{
	switch(std)
	{
		case 1 : return 8900;
					  break;
		case 2 : return 12790;
					  break;
		case 3 : return 21000;
					  break;
		case 4 : return 23450;
					  break;
		default : return 1;
						break;
	}
}

//Entry point function

int main()
{
	int std=0,ret=0;
	printf("Enter your standard : ");
	scanf("%d",&std);
	ret=Standard(std);
	if(ret!=1)
	{
		printf("\n Total fees of the student is : %d\n",ret);
	}
	else
	{
		printf(" \n Invalid input \n");
	}
}