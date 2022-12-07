/*
1.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	
	Output :   M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s    
					M a r v e l l o u s     
					M a r v e l l o u s     
					M a r v e l l o u s 
	
	Input : "Hello"
	
	Output : H e l l o
				  H e l l o
				  H e l l o
				  H e l l o
				  H e l l o
				 
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
	while(j!=strlen(arr))
	{
		while(i!=strlen(arr))
		{
			printf("%c ",arr[i]);
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