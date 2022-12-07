/*
2. Write application which accept file name from user and create that file. 
	
	Input :  Demo.txt 
	
	Output :  File created successfully
	
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
	char arr[20];
	int fd=0;
	printf("\n Enter file name : ");
	gets(arr);
	fd=open(arr,O_CREAT,0777);
	if(fd!=-1)
	{
		printf("\n File created successfully !!! \n");
	}
	else
	{
		printf("\n Unable to create file \n");
	}
	
	return 0;
}
