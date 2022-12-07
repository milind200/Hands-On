/*

74. Accept N numbers from user and return frequency of even numbers. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 3

	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : C programming

*/

#include<stdio.h>
//Logic

int Output(int arr[],int size)
{
	int j=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			j++;
		}
	}
	return j;
}

//Entry point function

int main()	
{
	int size=0,ret=0;
	printf("\n How many elements of enter : ");
	scanf("%d",&size);
	int arr[size];
	printf("\n Enter %d element \n",size);
	for(int i=0;i<size;i++)
	{
		printf("\n Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	ret=Output(arr,size);
	printf("\n Frequency of even numbers = %d ",ret);
}