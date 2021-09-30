/*

83. Accept N numbers from user and return the difference between largest and smallest number. 

	Input :  N :   6 
	Elements : 85 66 3 66 93 88  
	Output : 90 (93 -3) 

	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>
#include<stdlib.h>
//Logic

int Diff(int* p,int size)
{
	int max=0;
	int min=p[1];
	for(int i=0;i<size;i++)
	{
		if(min==max)
		{
			return 0;
		}
		if(max<p[i])
		{
			max=p[i];
		}
		if(min>p[i])
		{
			min=p[i];
		}
	}
	return max-min;
}

//Entry point function	

int main()
{
	int size=0,ret=0;
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
	ret=Diff(p,size);
	printf("\n the differenc betweem maximum and minimum number is : %d",ret);
	printf("\n");
}
