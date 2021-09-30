/*

82. Accept N numbers from user and return the smallest number. 
	
	Input :  N :   6 
	Elements : 85 66 3 66 93 88  
	Output : 3 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<stdlib.h>
//Logic

int MinNo(int* p,int size)
{
	int min=p[1];
	for(int i=0;i<size;i++)
	{
		if(min>p[i])
		{
			min=p[i];
		}
	}
	return min;
}

//Entry point function	

int main()
{
	int size=0,min=0;
	int* p=NULL;
	p=(int*)malloc(sizeof(int));
	printf("how many numbers to take as input : ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		printf("\n");
		printf(" Enter number at position %d : ",i);
		scanf("%d",&p[i]);
	}
	min=MinNo(p,size);
	printf("\n");
	printf(" the minimum number is : %d",min);
	printf("\n");
}
