/*

80.Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 3 
	
	Input :  N :   6 
	
	NO:  93 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 4 
	
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
	int no=0,k=0,j=0;
	cout<<"\n"<<" Enter your number NO : ";
	cin>>no;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==no&&k!=2)
		{
			j=i;
			k++;	
		}
	}
	if(j!=0)
	{
		cout<<"\n "<<"Number found on index number "<<j;
		cout<<"\n";
	}
	else
	{
	cout<<" Entered number is not present in the arrray !!";
	cout<<"\n";
	}
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