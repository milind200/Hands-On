/*

73. Accept N numbers from user and display all such elements which are divisible by 11. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 66 88
	
	Author : Milind Nalawade
	
	Date : 07/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>
#include<stdlib.h>

//Logic

void Output(int* p,int size)
{
	cout<<"\n Nunber divisible by 11 are :- \n";
	int i=0;
	while( i!=size)
	{	
		if(p[i]%11==0)
		{
			cout<<" "<<p[i]<<" ";
			i++;
		}
		else
		{
			i++;
		}
	}
}

//Entry point function

int main()
{	
	int size=0;
	cout<<"\n Enter number of element : ";
	cin>>size;
	int* p=(int *)malloc(sizeof(int));
	if(p==NULL)
	{
		cout<<" Memory not avalible ";
	}
	for(int i=0;i<size;i++)
	{
	    cout<<"\n";
		cout<<" Enter "<<i+1 <<" element : ";
		cin>>p[i];
		cout<<"\n";
	}
	Output(p,size);
	free(p);
	return 0;
} 	