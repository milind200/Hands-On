/*

81. Accept N numbers from user and return the largest number. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 93 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<stdlib.h>
//Logic

int MaxNo(int* p,int size)
{
	int max=0;
	for(int i=0;i<size;i++)
	{
		if(max<p[i])
		{
			max=p[i];
		}
	}
	return max;
}

//Entry point function	

int main()
{
	int size=0,max=0;
	int* p=NULL;
	p=(int*)malloc(sizeof(int));
	printf("how many numbers to take as input : ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		printf("\n");
		printf("Enter number at position %d : ",i);
		scanf("%d",&p[i]);
	}
	max=MaxNo(p,size);
	printf(" the maximum number is : %d",max);
	printf("\n");
}
