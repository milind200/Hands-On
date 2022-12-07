/*	
80.Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 3 
	
	Input :  N :   6 
	
	NO:  93 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 4 
	
	Author : Milind Nalawade
	
	Date : 10/07/2021
	
	Language : 10/07/2021 
	
*/	


#include<stdio.h>

//Logic
void Logic(int arr[],int size)
{
	int no=0,j=0;
	
	printf("\n Enter your number NO : ");
	scanf("%d",&no);
	for(int i=0;i<size;i++)
	{
		if(arr[i]==no)
		{
			j=i;	
		}
	}
	if(j!=0)
	{
		printf("\n Number found on index number %d ",j);
		printf("\n");
	}
	else
	{
	printf(" Entered number is not present in the arrray !!");
	printf("\n");
	}
}
//Entry point function
int main()	
{
	int size=0;
	printf("\n Enter size of array : ");
	scanf("%d",&size);
	printf("\n");
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		printf(" Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
	}
	Logic(arr,size);
	return 0;
}