/*

92. Accept character from user. If character is small display its corresponding capital 
	character, and if it small then display its corresponding capital. In other cases display as it is. 

	Input :  Q 
	Output : q 
	Input :  m 
	Output : M 
	Input :  4 
	Output : 4   Input :  % 
	Output : % 
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : C programming
	
*/
#include<stdio.h>
#include<ctype.h>

//Logic
void Display(char ch)
{
	if(ch>=64  && ch<=90)
	{
		printf("\n Output : %c \n",tolower(ch));
		return;
	}
	else
	{
		printf("\n Output : %c \n",toupper(ch));
		return;
	}
	printf("\n Output : %c \n",ch);
	
}
//Entry point function	
int main()
{
	char ch='\0';
	printf("\n Enter your character : ");
	scanf("%c",&ch);
	Display(ch);
}