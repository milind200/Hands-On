/*
5.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	
	Output :  m a r v e l l o u s    
				   m a r v e l l o u s    
				   m a r v e l l o u s    
				   m a r v e l l o u s    
				   m a r v e l l o u s    
				   m a r v e l l o u s    
				   m a r v e l l o u s    
				   m a r v e l l o u s     
				   m a r v e l l o u s     
				   m a r v e l l o u s 
	

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
			
			if (arr[i]>=65 && arr[i]<=90)
			{
				cout<<char(arr[i]+32)<<" ";
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