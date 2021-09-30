/*
2. Write application which accept file name from user and create that file. 
	
	Input :  Demo.txt 
	
	Output :  File created successfully
	
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
	char arr[20];
	int fd=0;
	cout<<"\n Enter file name : ";
	cin.getline(arr,20);
	fd=open(arr,O_CREAT,0777);
	if(fd!=-1)
	{
		cout<<"\n File created successfully !!! \n";
	}
	else
	{
		cout<<"\n Unable to create file !!!\n";
	}
	
	return 0;
}
