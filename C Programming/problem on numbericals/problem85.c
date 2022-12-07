/*
85. Accept N numbers from user and display summation of digits of each number. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  	
	Output : 17 17 3 13 17 21 
		
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C programming
	
*/


#include<stdio.h>
#include<stdlib.h>

//Logic
void Output(int* p ,int size)
{
	int arr[size];
	int no=0,temp=0,sum=0;
	for(int i=0;i<size;i++)
	{
		no=p[i];
		while(no!=0)
		{
			temp=no%10;
			sum+=temp;
			no=no/10	;
			
		}
		arr[i]=sum;
		sum=0;
	}
	
	for(int j=0;j<size;j++)
	{
		printf(" %d ",arr[j]);
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