/*
4.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	
	Output :   M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S     
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S 
	

	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<string.h>

//Logic 
void Output(char arr[])
{
	int i=0,j=0;
	printf("\n Output : \n\n");
	while(j!=strlen(arr))
	{
		printf("	");
		while(i!=strlen(arr))
		{
			
			if (arr[i]>=97 && arr[i]<=122)
			{
				printf("%c ",arr[i]-32);
			}
			else
			{
				printf("%c ",arr[i]);
			}	
			i++;
		}
		i=0;
		printf("\n");
		j++;
	}
}

//Entry point function
int main()
{
	char arr[30];
	printf("\n Enter your string : ");
	scanf("%[^'\n']s",arr);
	Output(arr);
	return 0;
}	