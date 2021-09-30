/*
4. Write application which accept file name from user and display size of file. 
	
	Input :  Demo.txt 
	
	Output :  File size is 56 bytes 
	
	Author : Milind Nalawade

	Date : 31/08/2021

	Language : C++ programming

*/

using namespace std;
#include <stdio.h>
#include<iostream>
// Entry point function
int main()
{
	char arr[30]={'\0'};
	FILE* fd;
	cout<<"\n Enter file name : ";
	cin.getline(arr,30);
	fd=fopen(arr,"r");
	if(fd==NULL)
	{
		cout<<"\n Unable to open the file \n";
	}
	fseek(fd,0L,SEEK_END);
	int no =ftell(fd);
	cout<<"\n Size of the file "<< arr<<" is "<<no<<" bytes \n";
	fclose(fd);
	return 0;
}