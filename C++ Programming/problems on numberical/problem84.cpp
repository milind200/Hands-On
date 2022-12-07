/*

84. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  
	Output : 665 953 858
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>
//Logic

void Output(int* p ,int size)
{
	cout<<" The three digit numbers are : ";
	for(int i=0;i<size;i++)
	{
		if(99<p[i]&&999>p[i])
		{
			cout<<p[i]<<" ";
		}
	}
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
	Output(p,size);
}
