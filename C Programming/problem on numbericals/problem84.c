/*

84. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  
	Output : 665 953 858	 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<stdlib.h>

void Output(int* p ,int size)
{
	for(int i=0;i<size;i++)
	{
		if(99<p[i]&&999>p[i])
		{
			printf(" %d ",p[i]);
		}
	}
}

//Entry point function

int main()
{
	int size=0,max=0;
	int* p=NULL;
	p=(int*)malloc(sizeof(int));
	if(p == NULL) 
		{
		printf("Unable to allocate memory");   
		return -1;
		} 
	printf("how many numbers to take as input : ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		printf("\n");
		printf("Enter number at position %d : ",i);
		scanf("%d",&p[i]);
	}
	Output(p,size);
	free(p);
}