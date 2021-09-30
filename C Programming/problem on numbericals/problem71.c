/*

70. Accept N numbers from user and display all such elements which are even and divisible by 5. 

	Input :  N :   6 
	Elements : 85 66 3 80 93 88  
	Output : 85 80   
	
	Author : Milind Nalawade
	
	Date : 07/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<stdlib.h>

//Logic

void Output(int* p,int size)
{
	printf("\n Nunber divisible by 5 are :- \n");
	int i=0;
	while( i!=size-1)
	{	
		if(p[i]%5==0&&p[i]%2==0)
		{
			printf(" %d ",p[i]);
			
		}
		i++;
	}
}

//Entry point function

int main()
{	
	int size=0;
	printf("\n Enter number of element : ");
	scanf("%d",&size);
	int* p=(int *)malloc(sizeof(int));
	if(p==NULL)
	{
		printf(" Memory not avalible");
	}
	for(int i=0;i<size;i++)
	{
		printf("\n Enter %d element : ",i+1);
		scanf("%d",&p[i]);
	}
	Output(p,size);
	free(p);
	return 0;
} 	