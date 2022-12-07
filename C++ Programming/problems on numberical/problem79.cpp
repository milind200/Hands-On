/*

79. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 1 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : -1  
	
	Author : Milind Nalawade
	
	Date : 10/07/2021
	
	Language : C++ programming
	
*/
using namespace std;
#include<iostream>

//Logic
void Logic(int arr[],int size)
{
	int no=0;
	cout<<"\n"<<" Enter your number NO : ";
	cin>>no;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==no)
		{
			cout<<"\n "<<" Number found on index number : "<<i<<"\n";
			return;
		}
	}

	cout<<" Entered number is not present in the arrray !!"<<"\n";
}
//Entry point function
int main()	
{
	int size=0;
	cout<<"\n "<<"Enter size of array : ";
	cin>>size;
	cout<<"\n";
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<" Enter element at index "<<i<<" : ";
		cin>>arr[i];
	}
	Logic(arr,size);
	return 0;
}