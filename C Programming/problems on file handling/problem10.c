/*
10. Write a program which accepts file name and one count from user and read that number 
	  of characters from starting position. 
	
	Input : Demo.txt  12 
	
	Output : Display first 12 characters from Demo.txt 
	
	Author : Milind Nalawade

	Date : 1/09/2021

	Language : C programming

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Entry point function
int main()
{
	int fd=0,ret=0,cnt=0,i=0,no=0;
	char arr[30]={'\0'};
	char brr[100]={'\0'};
	printf("\n Enter the file name : ");
	scanf("%[^'\n']s",arr);
	printf("\n Enter your number : ");
	scanf("%d",&no);
	fd=open(arr,O_RDONLY,0777);
	ret=read(fd,brr,no);
	printf("\n %s \n",brr);
	return 0;

}
