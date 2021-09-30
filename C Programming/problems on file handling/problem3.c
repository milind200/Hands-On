/*
3. Write application which accept file name from user and read all data from that file and display contents on screen. 
	
	Input :  Demo.txt 
	
	Output :  Display all data of file.
	
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : C programming

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
	char arr[100]={'\0'};
	int fd=0,ret=0;
	printf("\n Enter file name : ");
	gets(arr);
	fd=open(arr,O_RDONLY|O_CREAT,0777);
	if(fd==-1)
	{
		printf("\n File unable to open !!!\n");
		close(fd);
	}
	while((ret=read(fd,arr,100)!=0))
	{
		write(0,arr,ret);
	}
	printf("%s",arr);	
	return 0;
}