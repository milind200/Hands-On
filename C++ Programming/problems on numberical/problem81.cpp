/*

81. Accept N numbers from user and return the largest number. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 93 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>
//Logic

int MaxNo(int* p,int size)
{
	int max=0;
	for(int i=0;i<size;i++)
	{
		if(max<p[i])
		{
			max=p[i];
		}
	}
	return max;
}

//Entry point function	

int main()
{
	int size=0,max=0;
	int* p=NULL;
	p=(int*)malloc(sizeof(int));
	cout<<"how many numbers to take as input : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n";
		cout<<"Enter number at position "<<i<<" : ";
		cin>>p[i];
	}
	max=MaxNo(p,size);
	cout<<" the maximum number is : "<<max;
	cout<<"\n";
}
