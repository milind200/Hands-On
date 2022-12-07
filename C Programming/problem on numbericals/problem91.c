/*
91. Display ASCII value of given character
	
	Author :Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

void DisplayASCII(char ch)
{
	printf("\n The ASCII value of the %c is = %d \n",ch,ch);
}

int main()
{
	char ch='\0';
	printf("\n Enter your character : ");
	scanf("%c",&ch);
	DisplayASCII(ch);
	return 0;
}	
