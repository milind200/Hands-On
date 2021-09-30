/*
1. Write application which accept file name from user and open that file in read mode. 
	
	Input :  Demo.txt 
	
	Output :  File opened successfully.

	Author : Milind Nalawade

	Date : 27/08/2021

	Language : C programming

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


//Entry point function
int main()
{
	char arr[20]={'\0'};
	int fd=0;
	
	printf("Enter file name : ");
	gets(arr);
	fd=open(arr,O_RDONLY,4);
	if(fd==-1)
	{
		printf("\n Unable to open the file !!!\n");
	}
	else
	{
		printf("\n File open successfully !!!\n");
	}
	close(fd);
	return 0;
}