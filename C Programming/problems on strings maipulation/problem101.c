/*

101.Write a program which accept string from user and convert it into lower case. 
		
		Input :   "Marvellous Multi OS" 
		Output :   marvellous multi os 
		
		Author : Milind Nalawade
		
		Date : 15/07/2021
		
		language : C programming

*/

#include<stdio.h>
#include<string.h>

void CovertSmall(char* arr)
{
	for (int i=0;i<strlen(arr);i++)
	{
		if(arr[i]>='A'&&arr[i]<='Z')
		{
			char temp=arr[i]+32;
			arr[i]=temp;
		}
	}	
	printf(" ");
	printf("%s",arr);
}

//Entry point function

int main()
{	
	char arr[20];
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",arr);
	CovertSmall(arr);
	return 0;
}		