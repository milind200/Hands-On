/*
78. Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 2 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : 0
	
	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

int ChkNo(int arr[],int size)
{
	int j=0,no=0;
	printf("\n Enter your number : ");
	scanf("%d",&no);
	printf("\n");
	for(int i=0;i<size;i++)
	{
		if(arr[i]==no)
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
	ret=ChkNo(arr,size);
	printf("\n Frequency of number is : %d \n",ret);
	
	return 0;	
}