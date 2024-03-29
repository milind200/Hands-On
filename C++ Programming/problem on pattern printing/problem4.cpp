/*
4.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	
	Output :   M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S     
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S 
	

	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : C++ programming
*/
using namespace std;
#include<iostream>
#include<string.h>

//Logic 
void Output(char arr[])
{
	int i=0,j=0;
	cout<<"\n Output : \n\n";
	while(j!=strlen(arr))
	{
		cout<<"	";
		while(i!=strlen(arr))
		{
			
			if (arr[i]>=97 && arr[i]<=122)
			{
				cout<<char(arr[i]-32)<<" ";
			}
			else
			{
				cout<<arr[i]<<" ";
			}	
			i++;
		}
		i=0;
		cout<<"\n";
		j++;
	}
}

//Entry point function
int main()
{
	char arr[30];
	cout<<"\n Enter your string : ";
	cin.getline(arr,30);
	Output(arr);
	return 0;
}	