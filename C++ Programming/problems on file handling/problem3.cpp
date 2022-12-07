/*
3. Write application which accept file name from user and read all data from that file and display contents on screen. 
	
	Input :  Demo.txt 
	
	Output :  Display all data of file.
	
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : C++ programming

*/
using namespace std;
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

//Entry pointt function
int main()
{
	char arr[100]={'\0'};
	int fd=0,ret=0;
	cout<<"\n Enter file name : ";
	cin.getline(arr,100);
	fd=open(arr,O_RDONLY|O_CREAT,0777);
	if(fd==-1)
	{
		cout<<"\n File unable to open !!!\n";
		close(fd);
	}
	while((ret=read(fd,arr,100)!=0))
	{
		write(0,arr,ret);
	}
	cout<<arr;	
	return 0;
}