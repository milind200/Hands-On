/*
3.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	Output :  
				M     
				M a    
				M a r     
				M a r v    
				M a r v e     
				M a r v e l    
				M a r v e l l    
				M a r v e l l o     
				M a r v e l l o u      
				M a r v e l l o u s 
	
	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<string.h>

//Logic 
void Output(char arr[])
{
	int no=0;
	printf("\n Output :\n\n");
	for(int i=0;i<strlen(arr);i++)
	{
		printf("  ");
		for(int j=0;j<=no;j++)
		{
			printf("%c",arr[j]);
		}
		no++;
		printf("\n");
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