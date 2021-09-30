/*
85. Accept N numbers from user and display summation of digits of each number. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  	
	Output : 17 17 3 13 17 21 
		
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C programming
	
*/

using namespace std;
#include<iostream>
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
		cout<<" "<<arr[j];
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
		cout<<"Unable to allocate memory";   
		return -1;
		} 
	cout<<"how many numbers to take as input : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n";
		cout<<"Enter number at position "<<i<<" : ";
		cin>>p[i];
	}
	Output(p,size);
	free(p);
}