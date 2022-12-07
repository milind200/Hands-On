/*

76. Accept N numbers from user and return frequency of even numbers. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 3

	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : C++ programming

*/

using namespace std;
#include<iostream>
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
	ret=ChkNo(arr,size);
	if (ret==1)
	{
		cout<<"\n 11 is present \n";
	}
	else
	{
		cout<<"\n 11 is not present \n";
	}
	return 0;
}