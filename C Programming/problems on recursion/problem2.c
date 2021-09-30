/*
2. Write a recursive program which display below pattern.  

	Input : 5

	Output :   1 2 3 4 5
	
		Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic
int i=1;		
void Print(int no)
{
	if(no==0)
	{
		return;
	}
	else
	{
		printf(" %d",i);
	}
	i++;
	no--;
	Print(no);
}	

//Entry point function
int main()
{
	int no=0;
	printf("\n Input : ");
	scanf("%d",&no);
	printf("\n Output : ");
	Print(no);
	printf("\n");
	return 0;
}	