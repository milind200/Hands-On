/*

74. Accept N numbers from user and return frequency of even numbers. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 3

	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : C programming

*/

using namespace std;
#include<iostream>
//Logic

int Output(int arr[],int size)
{
	int j=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
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
	cout<<"\n How many elements of enter : ";
	cin>>size;
	int arr[size];
	cout<<"\n"<<" Enter " << size <<" element "<<"\n";
	for(int i=0;i<size;i++)
	{
		cout<<"\n "<<" Enter "<<i+1<<" element : ";
		cin>>arr[i];
		cout<<"\n";
	}
	ret=Output(arr,size);
	cout<<"\n"<<" Frequency of even numbers = "<<ret;
}