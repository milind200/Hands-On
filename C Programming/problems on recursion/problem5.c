/*
5.Write a recursive program which display below pattern.  
	
	Input : 6
	
	Output :   a b c d e f 
		
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

char ch='a';
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