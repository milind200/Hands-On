/*
1. Write application which accept file name from user and open that file in read mode. 
	
	Input :  Demo.txt 
	
	Output :  File opened successfully.

	Author : Milind Nalawade

	Date : 27/08/2021

	Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


//Entry point function
int main()
{
	char arr[20]={'\0'};
	int fd=0;
	
	cout<<"Enter file name : ";
	cin.getline(arr,20);
	fd=open(arr,O_RDONLY);
	if(fd==-1)
	{
		cout<<"\n Unable to open the file !!!\n";
	}
	else
	{
		cout<<"\n File open successfully !!!\n";
	}
	return 0;
}