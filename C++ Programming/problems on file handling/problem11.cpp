/*
11. Write a program which accept oinformation of students from user and write that information into the file. 
		
	   Author : Milind Nalawade

	   Date : 02/09/2021

	   Language : C programming
		
*/
using namespace std;
#include<iostream>
#include<stdio.h>

//Entry point function
int main()
{
	char arr[30]={'\0'};
	char brr[100]={'\0'};
	FILE* fd;
	cout<<"\n Enter file name : ";
	cin.getline(arr);
	fflush(stdin);
	fd=fopen(arr,"a");
	if(fd!=NULL)
	{
		cout<<"\n File successfully opened !!! \n";
	}
	else
	{
		cout<<"\n Unable to open the file \n";
	}
	cout<<"\n Input : ";
	cin.getline(brr);
	fputs("\n ",fd);
	fputs(brr,fd);
	fclose(fd);
	return 0;
}