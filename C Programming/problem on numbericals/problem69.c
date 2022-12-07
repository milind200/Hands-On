/*
69. Accept N numbers from user and return difference between 
	summation of even elements and summation of odd elements. 
	
	Input :  N :   6 
	Elements : 85 66 3 80 93 88  
	Output : 53 (234 - 181) 
	
	Author : Milind Nalawade

	Date : 07/07/2021

	Language : C programming

*/

#include<stdio.h>
#include<stdlib.h>

// Logic

int Difference(int* p,int size)
{
	int even=0,odd=0;
	for(int i=0;i<size;i++)
	{
		if(p[i]%2==0)
		{
			even+=p[i];
		}
		else
		{
			odd+=p[i];
		}
	}
	return (even-odd);
}

// Entry point function
int main()
{
	int size=0,ret=0;
	int *p=NULL;
	printf("\n Enter number of elements : ");
	scanf("%d",&size);
	
	p=(int*)malloc(sizeof(int));
	
	if(p==NULL)
	{
		printf(" Memory not allocated ");
		return -1;
	}
	
	printf("\n  Enter %d elements \n",size);
	
	for(int i=0;i<size;i++)
	{
		printf("\n Enter %d element :",i+1);
		scanf("%d",&p[i]);
	}
	ret=Difference(p,size);
	printf("\n Result is %d  \n",ret);
	free(p);
	return 0;
}