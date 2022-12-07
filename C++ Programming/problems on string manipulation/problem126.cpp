/*
126. Write a program which accept string from user and replace each occurrence of 
		first character of each word into capital case. 
		
		Input :   “marvellous infosystems ” 
		Output :  “Marvellous Infosystems ” 
		
		Author : Milind Nalawade
	
		Date : 06/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<string.h>

//Logic
void Output(char arr[])
{
	int i=0;
	while(i<strlen(arr))
	{
		if(arr[i-1]==' '&& arr[i]!=' '||i==0)
		{
			arr[i]=arr[i]-32;
		}
		i++;
	}
	cout<<"\n Output : "<<arr<<"\n";
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