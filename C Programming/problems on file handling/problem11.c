/*
11. Write a program which accept oinformation of students from user and write that information into the file. 
		
	Author : Milind Nalawade

	Date : 02/09/2021

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
	fputs("\n",fd);
	fputs(brr,fd);
	fclose(fd);
	return 0;
}