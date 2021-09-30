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

using namespace std;
#include<iostream>
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
	cout<<"\n Enter number of elements : ";
	cin>>size;
	
	p=(int*)malloc(sizeof(int));
	
	if(p==NULL)
	{
		cout<<" Memory not allocated ";
		return -1;
	}
	
	cout<<"\n"<<" Enter "<<size <<" elements "<<"\n";
	
	for(int i=0;i<size;i++)
	{
		cout<< " Enter  element "<<i+1<<"\n";
		cin>>p[i];
	}
	ret=Difference(p,size);
	cout<<"\n Result is : " <<ret <<" \n";
	free(p);
	return 0;
}