/*
125. Write a program which accept string from user and copy the contents into another string by 
		removing extra white spaces. 
		
		Input :   “Marvellous    multi     OS” 
		Output :   “Marvellous multi OS” 
		
		Author : Milind Nalawade
	
		Date : 06/08/2021
	
		Language : C programming

*/

#include<stdio.h>
#include<string.h>

//Logic
void Output(char arr[])
{
	char brr[30];
	int j=0;
	for(int i=0 ;arr[i]!='\0';i++)
	{
		if(arr[i]==' ')
		{
			while(arr[i]==' ')
			{
				i++;
			}
			brr[j]=' ';
			j++;
		}
		brr[j]=arr[i];
		j++;
	}
	brr[j]='\0';
	printf("\n Output : %s \n",brr);
}

//Entry point function
int main()
{
	char arr[30];
	printf(" \n Enter your string : ");
	scanf("%[^'\n']s",arr);
	Output(arr);
	return 0;
}