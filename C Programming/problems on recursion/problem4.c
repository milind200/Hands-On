/*
4.Write a recursive program which display below pattern.  
	
	Input : 6
	
	Output :   A B C D E F 
		
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

char ch='A';
void Print(int no)
{
	if(no==0)
	{
		return;
	}
	else
	{
		printf(" %c",ch);
	}
	ch++;
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