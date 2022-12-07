/*

34. Accept number from user and display below pattern. 
	Input :  5  
	Output : 5 # 4 # 3 # 2 # 1 #

	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

void Print(int no)
{
	while(no!=0)
	{
		printf(" %d #",no);
		no--;
	}
}

//Entry point function
 
int main()
{
	int no=0;
	printf("Enter your number : ");
	scanf("%d",&no);
	Print(no);
	return 0;
}	