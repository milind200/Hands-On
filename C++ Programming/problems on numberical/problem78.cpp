/*

78. Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 2 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : 0
	
	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : C++ programming
	
*/


using namespace std;
#include<iostream>
//Logic


int ChkNo(int arr[],int size)
{
	int j=0,no=0;
	cout<<"\n Enter your number : ";
	cin>>no;
	cout<<"\n";
	for(int i=0;i<size;i++)
	{
		if(arr[i]==no)
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
	ret=ChkNo(arr,size);
	cout<<"\n"<<" Frequency of number is = "<<ret;
}