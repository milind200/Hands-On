/*
5. Write application which accept file name from user and one string from user. Write that string at the end of file. 
	
	Enter file name :  Demo.txt 

	Input:	Hello World 
	
	Output :  Write Hello World at the end of Demo.txt file
		
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : C programming
		
*/

#include<stdio.h>

//Entry point function
int main()
{
	char arr[30]={'\0'};
	char brr[100]={'\0'};
	FILE* fd;
	printf("\n Enter file name : ");
	gets(arr);
	fflush(stdin);
	fd=fopen(arr,"a");
	if(fd!=NULL)
	{
		printf("\n File successfully opened !!! \n");
	}
	else
	{
		printf("\n Unable to open the file \n");
	}
	printf("\n Input : ");
	gets(brr);
	fputs(" ",fd);
	fputs(brr,fd);
	fclose(fd);
	return 0;
}