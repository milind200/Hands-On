/*
95. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format. 
	
	Input :   A 
	Output :  Decimal   65 
	Octal   0101    Hexadecimal  0X41 

	Author : Milind Nalawade
	
	Date: 13/07/2021
	
	language : C programming

*/

#include<stdio.h>

//Logic
int Display(char ch)
{
	printf("\n Decimal : %d\n",ch);
	printf("\n Octal : %o\n",ch);
	printf("\n Hexadecimal : %x\n",ch);

}

//Entry point function
int main()
{
	char ch='\0';
	int ret=0;
	printf("\n Enter your character : ");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}