/*

35. Accept number from user and display below pattern. 
	Input :  5  
	Output : 1 * 2 * 3 * 4 * 5 *   
	
	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

void Print(int no)
{
	int i=1;
	while(i!=no+1)
	{
		printf(" %d *",i);
		i++;
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