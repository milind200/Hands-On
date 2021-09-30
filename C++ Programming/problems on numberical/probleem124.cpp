/*
124. Write a program which accept string from user and reverse each word in place. 
		
		Input :   “Marvellous Multi OS” 
		Output :   “suollevraM itluM SO”

		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<string.h> 
void Reverse(char arr[])
{
	char brr[20];
	int i=0,j=0;
	cout<<"\n Output : ";
	while(arr[i]!='\0')
	{
		brr[j]=arr[i];
		j++;
		i++;
		if(arr[i]==' '||arr[i]=='\0')
		{
			j=j-1;
			while(j>=0)
			{
				cout<<brr[j];
				j--;
			}
			cout<<" ";
			memset(brr,'\0',20);
			j=0;
		}
	}
	cout<<"\n";
}

int main()
{
	char arr[30];
	cout<<"\n Enter your string : ";
	scanf("%[^'\n']s",arr);
	Reverse(arr);
	
}		