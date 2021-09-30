/*
2.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	Output :   M a r v e l l o u s    
					M a r v e l l o u     
					M a r v e l l o     
					M a r v e l l     
					M a r v e l     
					M a r v e     
					M a r v     
					M a r     
					M a     
					M 

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
	int no=strlen(arr);
	cout<<"\n Output :\n\n";
	for(int i=0;i<strlen(arr);i++)
	{
		cout<<"  ";
		for(int j=0;j<no;j++)
		{
			cout<<arr[j];
		}
		no--;
		cout<<"\n";
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