/*

83. Accept N numbers from user and return the difference between largest and smallest number. 

	Input :  N :   6 
	Elements : 85 66 3 66 93 88  
	Output : 90 (93 -3) 

	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>
//Logic

int Diff(int* p,int size)
{
	int min=p[1];
	int max=0;
	for(int i=0;i<size;i++)
	{
		if(max==min)
		{
			return 0;
		}
		if(min>p[i])
		{
			min=p[i];
		}
		if(max<p[i])
		{
			max=p[i];
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
	cout<<"how many numbers to take as input : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n";
		cout<<"Enter number at position "<<i<<" : ";
		cin>>p[i];
	}
	ret=Diff(p,size);
	cout<<"\n";
	cout<<" The differenc between maximum and minimum number is : "<<ret;
	cout<<"\n";
}
