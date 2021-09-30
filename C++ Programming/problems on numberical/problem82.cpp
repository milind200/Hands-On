/*

82. Accept N numbers from user and return the smallest number. 
	
	Input :  N :   6 
	Elements : 85 66 3 66 93 88  
	Output : 3 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>
//Logic

int MinNo(int* p,int size)
{
	int min=p[1];
	for(int i=0;i<size;i++)
	{
		if(min>p[i])
		{
			min=p[i];
		}
	}
	return min;
}

//Entry point function	

int main()
{
	int size=0,min=0;
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
	min=MinNo(p,size);
	cout<<"\n";
	cout<<" the minimum number is : "<<min;
	cout<<"\n";
}
