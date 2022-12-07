/*
76. Accept N numbers from user check whether that numbers contains 11 in it or not. 
	
	Input :  N :   6 
	
	Elements : 85 66 11 80 93 88  
	
	Output : 11 is present 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 11 is absent  
	
	Author : Milind Nalawade
	
	Date : 09/07/2021
	
	Language : C programming
	
*/

#include<stdio.h>

//Logic

int ChkNo(int arr[],int size)
{
	int flag=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==11)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	return 0;
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
	if (ret==1)
	{
		printf("\n 11 is present \n");
	}
	else
	{
		printf("\n 11 is not present \n");
	}
	return 0;	
}